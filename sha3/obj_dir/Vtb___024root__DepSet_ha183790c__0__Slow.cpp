// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__1(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__2(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__3(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__4(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__5(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__6(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__7(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__8(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
        Vtb___024root___stl_sequent__TOP__1(vlSelf);
        Vtb___024root___stl_sequent__TOP__2(vlSelf);
        Vtb___024root___stl_sequent__TOP__3(vlSelf);
        Vtb___024root___stl_sequent__TOP__4(vlSelf);
        Vtb___024root___stl_sequent__TOP__5(vlSelf);
        Vtb___024root___stl_sequent__TOP__6(vlSelf);
        Vtb___024root___stl_sequent__TOP__7(vlSelf);
        Vtb___024root___stl_sequent__TOP__8(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_ha02b9d81_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_hb99522a5_0;
extern const VlUnpacked<IData/*31:0*/, 8> Vtb__ConstPool__TABLE_h3e75c2ad_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb__ConstPool__TABLE_h010b2d2f_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb__ConstPool__TABLE_he7b302ea_0;

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
           >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
               - (IData)(1U))) & (((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                  >= (IData)(vlSelfRef.tb__DOT__outlen_partial))) 
         & (0U < (IData)(vlSelfRef.tb__DOT__outlen_partial)))) {
        vlSelfRef.tb__DOT__m_axis_tkeep = ((0xeU & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                              < (IData)(vlSelfRef.tb__DOT__outlen_partial)));
        vlSelfRef.tb__DOT__m_axis_tkeep = ((0xdU & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((((IData)(1U) 
                                                + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                               < (IData)(vlSelfRef.tb__DOT__outlen_partial)) 
                                              << 1U));
        vlSelfRef.tb__DOT__m_axis_tkeep = ((0xbU & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((((IData)(2U) 
                                                + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                               < (IData)(vlSelfRef.tb__DOT__outlen_partial)) 
                                              << 2U));
        vlSelfRef.tb__DOT__m_axis_tkeep = ((7U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((((IData)(3U) 
                                                + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                               < (IData)(vlSelfRef.tb__DOT__outlen_partial)) 
                                              << 3U));
        vlSelfRef.tb__DOT__dut__DOT__unnamedblk4__DOT__i = 4U;
    } else {
        vlSelfRef.tb__DOT__m_axis_tkeep = 0xfU;
    }
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (1U 
                                                 & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep));
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (7U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                        >> 1U))));
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (7U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                        >> 2U))));
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (7U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                        >> 3U))));
    vlSelfRef.tb__DOT__dut__DOT__rdata_mask = ((((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                                >> 3U)))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                                     >> 2U)))) 
                                                      << 0x10U))) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                                     >> 1U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))))));
    __Vtableidx1 = vlSelfRef.tb__DOT__mode;
    vlSelfRef.tb__DOT__dut__DOT__sha3_rate = Vtb__ConstPool__TABLE_ha02b9d81_0
        [__Vtableidx1];
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                if (vlSelfRef.tb__DOT__s_axis_tvalid) {
                    vlSelfRef.tb__DOT__dut__DOT__unnamedblk1__DOT__i = 4U;
                    if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                           >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                               - (IData)(1U))) & ((0xffffU 
                                                   & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                                      + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                                  >= (IData)(vlSelfRef.tb__DOT__inlen_partial))) 
                         & (0U < (IData)(vlSelfRef.tb__DOT__inlen_partial)))) {
                        if (((IData)(vlSelfRef.tb__DOT__inlen_partial) 
                             != ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                 - (IData)(1U)))) {
                            if ((0xffffffffU != vlSelfRef.tb__DOT__dut__DOT__rdata_mask)) {
                                vlSelfRef.tb__DOT__dut__DOT__unnamedblk2__DOT__i = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__sha3_suffix = Vtb__ConstPool__TABLE_hb99522a5_0
        [__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__sha3_suffix_word = 
        Vtb__ConstPool__TABLE_h3e75c2ad_0[__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__rounds = Vtb__ConstPool__TABLE_h010b2d2f_0
        [__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__round_cnt_offset = 
        Vtb__ConstPool__TABLE_he7b302ea_0[__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [1U])) << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [2U])) << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [3U])) << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [4U])) << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [5U])) << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [6U])) << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [7U])) << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x28U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x29U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x50U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x51U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x52U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x53U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x54U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x55U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x56U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x57U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x78U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x79U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xa0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa1U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa2U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa3U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa4U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa5U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa6U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa7U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [8U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [9U])) << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xaU])) << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbU])) << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xcU])) << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xdU])) << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xeU])) << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xfU])) << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x30U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x31U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x32U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x33U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x34U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x35U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x36U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x37U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x58U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x59U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x80U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x81U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x82U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x83U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x84U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x85U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x86U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x87U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xa8U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa9U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xaaU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xabU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xacU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xadU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xaeU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xafU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x10U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x11U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x12U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x13U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x14U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x15U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x16U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x17U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x38U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x39U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x60U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x61U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x62U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x63U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x64U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x65U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x66U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x67U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x88U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x89U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xb0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb1U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb2U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb3U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb4U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb5U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb6U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb7U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x18U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x19U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x40U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x41U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x42U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x43U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x44U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x45U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x46U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x47U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x68U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x69U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x90U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x91U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x92U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x93U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x94U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x95U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x96U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x97U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xb8U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb9U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbaU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbbU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbcU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbdU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbeU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbfU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x20U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x21U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x22U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x23U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x24U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x25U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x26U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x27U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x48U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x49U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x70U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x71U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x72U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x73U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x74U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x75U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x76U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x77U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x98U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x99U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xc0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc1U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc2U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc3U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc4U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc5U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc6U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc7U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__rdata_masked = (vlSelfRef.tb__DOT__s_axis_tdata 
                                                 & vlSelfRef.tb__DOT__dut__DOT__rdata_mask);
    vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked 
        = (((1U == (IData)(vlSelfRef.tb__DOT__s_axis_tkeep))
             ? 0xff00U : ((2U == (0xeU & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))
                           ? 0xff0000U : ((4U == (0xcU 
                                                  & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))
                                           ? 0xff000000U
                                           : 0U))) 
           & vlSelfRef.tb__DOT__dut__DOT__sha3_suffix_word);
    vlSelfRef.tb__DOT__dut__DOT__state_n = vlSelfRef.tb__DOT__dut__DOT__state_r;
    if ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 0U;
            } else if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                        >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                            - (IData)(1U)))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 5U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if (((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)) 
                 & (IData)(vlSelfRef.tb__DOT__m_axis_tready))) {
                if ((0U < (IData)(vlSelfRef.tb__DOT__outlen_partial))) {
                    if ((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                          >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
                              - (IData)(1U))) & (((IData)(4U) 
                                                  + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                                 >= (IData)(vlSelfRef.tb__DOT__outlen_partial)))) {
                        vlSelfRef.tb__DOT__dut__DOT__state_n = 0U;
                    } else if ((((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))) {
                        vlSelfRef.tb__DOT__dut__DOT__state_n = 6U;
                    }
                } else if ((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                             >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
                                 - (IData)(1U))) & 
                            (((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                             >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate)))) {
                    vlSelfRef.tb__DOT__dut__DOT__state_n = 0U;
                } else if ((((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                            >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))) {
                    vlSelfRef.tb__DOT__dut__DOT__state_n = 6U;
                }
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__state_n = 3U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                 >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                     - (IData)(1U)))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 5U;
            }
        } else if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                    >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                        - (IData)(1U)))) {
            vlSelfRef.tb__DOT__dut__DOT__state_n = 
                ((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                   >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                       - (IData)(1U))) & (0U == (IData)(vlSelfRef.tb__DOT__inlen_partial)))
                  ? 4U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if (((IData)(vlSelfRef.tb__DOT__s_axis_tvalid) 
             & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))) {
            if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                   >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                       - (IData)(1U))) & ((0xffffU 
                                           & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                              + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                          >= (IData)(vlSelfRef.tb__DOT__inlen_partial))) 
                 & (0U < (IData)(vlSelfRef.tb__DOT__inlen_partial)))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 3U;
            } else if (((0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                  + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                        >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 2U;
            }
        }
    } else if (vlSelfRef.tb__DOT__s_axis_tvalid) {
        vlSelfRef.tb__DOT__dut__DOT__state_n = (((0U 
                                                  == (IData)(vlSelfRef.tb__DOT__inblocks)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb__DOT__inlen_partial)))
                                                 ? 4U
                                                 : 1U);
    }
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [0U]
                                                        [0U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [0U]
                                                        [1U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [0U]
                                                        [2U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
}
