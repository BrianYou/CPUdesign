// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__pc_wire;
    IData/*31:0*/ __Vdly__id_exe_inst_o;
    IData/*31:0*/ __Vtemp8;
    // Body
    __Vdly__pc_wire = vlSymsp->TOP__test_top.__PVT__pc_wire;
    __Vdly__id_exe_inst_o = vlSymsp->TOP__test_top.__PVT__id_exe_inst_o;
    vlSymsp->TOP__test_top.__PVT__id_exe_rd_o = ((IData)(vlTOPp->rst_i)
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                          >> 2U) 
                                                         & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                            >> 3U)))
                                                      ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)
                                                      : 
                                                     ((1U 
                                                       & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                           >> 2U) 
                                                          & (~ 
                                                             ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                              >> 3U))))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                                       >> 7U)))));
    vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                          ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o)
                                          : ((~ (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                     >> 3U)))) 
                                             & (3U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__id_inst_o)))));
    __Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                        ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o))
                            ? vlSymsp->TOP__test_top.__PVT__pc_wire
                            : ((IData)(4U) + vlSymsp->TOP__test_top.__PVT__pc_wire))
                        : 0U);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o;
        vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                       >> 1U) & ((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                                 >> 2U))) ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                           >> 1U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                                        >> 2U)))) ? 0U
                    : vlSymsp->TOP__test_top.__PVT__pc_wire));
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o)));
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o;
    }
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o = 
        ((~ (IData)(vlTOPp->rst_i)) & ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                               >> 2U) 
                                              & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 3U)))
                                        ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)
                                        : ((~ (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                >> 2U) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                   >> 3U)))) 
                                           & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_we_o))));
    vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlTOPp->rst_i)) 
                                         & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 6U)) 
                                            & ((0x20U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (
                                                   (~ 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 4U)) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 3U)) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                           >> 2U)) 
                                                         & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 1U) 
                                                            & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o))))))
                                                : (
                                                   (~ 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 4U)) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 3U)) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                           >> 2U)) 
                                                         & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 1U) 
                                                            & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o))))))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o = 0U;
        __Vdly__id_exe_inst_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o = 0U;
        __Vtemp8 = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o
                                                        : 0U)
                                                       : 0U)))))));
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                         & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                        & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                           == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                        ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                            ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                            : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                      & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                         == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
                                          ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                          : 0U) : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))));
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_op1_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                         & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                        & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                           == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                        ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                            ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                            : 0U) : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                      & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                         == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
                                          ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                          : 0U) : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))));
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o
                                                        : 0U)
                                                       : 0U)))))));
        __Vdly__id_exe_inst_o = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                         >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                  ? vlSymsp->TOP__test_top.__PVT__id_exe_inst_o
                                  : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                             >> 2U) 
                                            & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                  >> 3U))))
                                      ? 0U : vlSymsp->TOP__test_top.__PVT__id_inst_o));
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o)
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o)
                                                        : 0U)
                                                       : 0U)))))));
        __Vtemp8 = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                            >> 1U) & ((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                                      >> 2U))) ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                     : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                                >> 1U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__if_id0__DOT__stall_i) 
                                             >> 2U))))
                         ? 0U : ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                  ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                      [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                      << 0x18U) | (
                                                   (vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                    << 0x10U) 
                                                   | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                       [
                                                       (0x1fffffU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x1ffffcU 
                                                            & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                       << 8U) 
                                                      | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                  : 0U)));
    }
    vlSymsp->TOP__test_top.__PVT__if_id_inst_o = __Vtemp8;
    vlSymsp->TOP__test_top.__PVT__id_exe_inst_o = __Vdly__id_exe_inst_o;
    vlSymsp->TOP__test_top.__PVT__pc_wire = __Vdly__pc_wire;
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top.__PVT__ce_wire = (1U & (~ (IData)(vlTOPp->rst_i)));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
        = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                    >> 7U));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
        = ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
            ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U)))))
            : ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
        = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                    >> 0xfU));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o = 
        ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o;
    }
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__6(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__6\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_op_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? ((0U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0xcU))) ? 1U : 
                   ((1U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                  >> 0xcU))) ? 2U : 
                    ((2U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                   >> 0xcU))) ? 3U : 0U)))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? 0U : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? 0xdU : 0xcU))
                        : ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                ? 0U : 0xbU) : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 0xaU
                                                 : 9U)))
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? 0U : ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))
                         : ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_addr_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                   + ((0xfffff000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 7U)))))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                       + ((0xfffff000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 0x1fU)))) 
                                          << 0xcU)) 
                          | (0xfffU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0x14U))))
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_mem_data_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : 0U);
    }
    if (((IData)(vlTOPp->rst_i) | (0x13U != (0x7fU 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)))) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 0U;
    } else {
        if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
            if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 1U;
                } else {
                    if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        if ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U)))) {
                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 1U;
                        } else {
                            if ((0x20U == (0x7fU & 
                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x19U)))) {
                                vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 1U;
                            }
                        }
                    } else {
                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 1U;
                    }
                }
            } else {
                vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 1U;
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o = 0U;
        }
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((0x23U != 
                                          (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                         & (3U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
    if (((IData)(vlTOPp->rst_i) | (0x13U != (0x7fU 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)))) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o = 0U;
    } else {
        if ((0x13U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
            if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o 
                        = ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                } else {
                    if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        if ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U)))) {
                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o 
                                = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   >> (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                        } else {
                            if ((0x20U == (0x7fU & 
                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x19U)))) {
                                vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o 
                                    = VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                            }
                        }
                    } else {
                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o 
                            = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                    }
                }
            } else {
                vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o 
                    = ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                ? 1U : 0U) : ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                               < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                               ? 1U
                                               : 0U))
                        : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               << (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o = 0U;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_inst_o = 0U;
        vlSymsp->TOP__test_top.__PVT__ctrl_stall_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_inst_o = (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0U)
                                                         : 0U))))));
        vlSymsp->TOP__test_top.__PVT__ctrl_stall_o 
            = (((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__pre_inst_is_load_i) 
                & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                              >> 0xfU)) == (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__exe_rd_i)) 
                   | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0x14U)) == (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__exe_rd_i))))
                ? 7U : 0U);
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 0U;
    } else {
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
            } else {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                    } else {
                        if ((0x20U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U)))) {
                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                }
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o 
                = (1U & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                          >> 0xdU) | ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0xcU) | (
                                                   (0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 0x19U))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x19U)))))));
        }
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o = 0U;
    } else {
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                    = ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                        : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
            } else {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                         >> 0x19U)))) {
                        vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                            = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               >> (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                    } else {
                        if ((0x20U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U)))) {
                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                                = VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                }
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                = ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            ? 1U : 0U) : ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                           < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                           ? 1U : 0U))
                    : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           << (0x1fU & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                        : ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x19U)))
                            ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            : ((0x20U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x19U)))
                                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                : 0U))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : (0x1fU & ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                      : 0U) : ((0x10U 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                ? (
                                                   (8U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o)
                                                       : 0U)
                                                      : 0U)))
                                                : (
                                                   (8U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)))))));
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                         ? (0x1fU & ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U)))))
                         : 0U));
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : (0x1fU & ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0xfU)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U))))
                                  : ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o)
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))))));
    }
    vlSymsp->TOP__test_top.__PVT__id_reg_we_o = (1U 
                                                 & ((~ (IData)(vlTOPp->rst_i)) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 6U)) 
                                                       & ((0x20U 
                                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 4U) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 3U)) 
                                                              & ((4U 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                  ? 
                                                                 ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                  : 
                                                                 ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                     & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o))))))
                                                           : 
                                                          ((0x10U 
                                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 3U)) 
                                                            & ((4U 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                ? 
                                                               ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                : 
                                                               ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o)))))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 3U)) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 2U)) 
                                                               & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 6U)) 
                                                        & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 5U) 
                                                           & ((0x10U 
                                                               & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                               ? 
                                                              ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 3U)) 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 2U)) 
                                                                  & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      >> 1U) 
                                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                        & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o)))))
                                                               : 
                                                              ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 3U)) 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 2U)) 
                                                                  & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      >> 1U) 
                                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
                                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o)))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o)))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_we_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o 
            = (1U & (((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                      >> 3U) & ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                 ? (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                       >> 1U)) : (((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                   >> 1U) 
                                                  | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))));
    }
    vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((8U 
                                                         & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                           >> 1U))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                           >> 1U) 
                                                          | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))
                                                         : 
                                                        ((~ 
                                                          ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                           >> 2U)) 
                                                         & (((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                                                             >> 1U) 
                                                            | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))))));
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o));
    vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 6U)) 
                                                     & ((0x20U 
                                                         & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((~ 
                                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                            >> 3U)) 
                                                          & ((4U 
                                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                              ? 
                                                             ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 1U) 
                                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                                              : 
                                                             ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 1U) 
                                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o)))))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                            >> 3U)) 
                                                          & ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 2U)) 
                                                             & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 >> 1U) 
                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o))))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((~ 
                                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                            >> 3U)) 
                                                          & ((4U 
                                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                              ? 
                                                             ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 1U) 
                                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                                              : 
                                                             ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 1U) 
                                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_we_o)))))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                            >> 3U)) 
                                                          & ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                               >> 2U)) 
                                                             & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 >> 1U) 
                                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_reg_we_o)))))))));
    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? 0U : ((0x20U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U)
                                                  : 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                       + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__i_reg_wdata_o
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U))));
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__7(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__7\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? 0U : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                          ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                                         : 0U)
                                                        : 0U)))
                                                     : 0U))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_mem_data_o = 0U;
                    }
                }
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                             ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                 ? vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o
                                 : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                     : ((2U == (3U 
                                                & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                         ? ((0xffff0000U 
                                             & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                         : 0U))) : 
                            ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                              ? ((2U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                  ? ((1U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                      ? ((0xff000000U 
                                          & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                             << 0x18U)) 
                                         | (0xffffffU 
                                            & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                      : ((0xff000000U 
                                          & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                         | ((0xff0000U 
                                             & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))))
                                  : ((1U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                      ? ((0xffff0000U 
                                          & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                         | ((0xff00U 
                                             & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                << 8U)) 
                                            | (0xffU 
                                               & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                      : ((0xffffff00U 
                                          & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                         | (0xffU & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))))
                              : 0U)));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? (0xffffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                  >> 0x10U))
                                    : 0U)) : ((2U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 0x18U))
                                                   : 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 8U))
                                                   : 
                                                  (0xffU 
                                                   & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))));
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top__data_ram0.__PVT__data_o
                            : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                  >> 0xfU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x1fU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                           >> 0x10U)))
                                    : 0U)));
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                            = ((2U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                ? ((1U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                    ? ((0xffffff00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x1fU)))) 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                   >> 0x18U)))
                                    : ((0xffffff00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x17U)))) 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                   >> 0x10U))))
                                : ((1U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)
                                    ? ((0xffffff00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                   >> 8U)))
                                    : ((0xffffff00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                                       | (0xffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? 0U : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                          ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                         : 0U)
                                                        : 0U)))))));
}
