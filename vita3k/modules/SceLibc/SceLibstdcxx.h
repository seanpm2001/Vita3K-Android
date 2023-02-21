// Vita3K emulator project
// Copyright (C) 2023 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <module/module.h>

BRIDGE_DECL(_Atomic_compare_exchange_strong)
BRIDGE_DECL(_Atomic_compare_exchange_strong_1)
BRIDGE_DECL(_Atomic_compare_exchange_strong_2)
BRIDGE_DECL(_Atomic_compare_exchange_strong_4)
BRIDGE_DECL(_Atomic_compare_exchange_strong_8)
BRIDGE_DECL(_Atomic_compare_exchange_weak)
BRIDGE_DECL(_Atomic_compare_exchange_weak_1)
BRIDGE_DECL(_Atomic_compare_exchange_weak_2)
BRIDGE_DECL(_Atomic_compare_exchange_weak_4)
BRIDGE_DECL(_Atomic_compare_exchange_weak_8)
BRIDGE_DECL(_Atomic_copy)
BRIDGE_DECL(_Atomic_exchange)
BRIDGE_DECL(_Atomic_exchange_1)
BRIDGE_DECL(_Atomic_exchange_2)
BRIDGE_DECL(_Atomic_exchange_4)
BRIDGE_DECL(_Atomic_exchange_8)
BRIDGE_DECL(_Atomic_fetch_add_1)
BRIDGE_DECL(_Atomic_fetch_add_2)
BRIDGE_DECL(_Atomic_fetch_add_4)
BRIDGE_DECL(_Atomic_fetch_add_8)
BRIDGE_DECL(_Atomic_fetch_and_1)
BRIDGE_DECL(_Atomic_fetch_and_2)
BRIDGE_DECL(_Atomic_fetch_and_4)
BRIDGE_DECL(_Atomic_fetch_and_8)
BRIDGE_DECL(_Atomic_fetch_or_1)
BRIDGE_DECL(_Atomic_fetch_or_2)
BRIDGE_DECL(_Atomic_fetch_or_4)
BRIDGE_DECL(_Atomic_fetch_or_8)
BRIDGE_DECL(_Atomic_fetch_sub_1)
BRIDGE_DECL(_Atomic_fetch_sub_2)
BRIDGE_DECL(_Atomic_fetch_sub_4)
BRIDGE_DECL(_Atomic_fetch_sub_8)
BRIDGE_DECL(_Atomic_fetch_xor_1)
BRIDGE_DECL(_Atomic_fetch_xor_2)
BRIDGE_DECL(_Atomic_fetch_xor_4)
BRIDGE_DECL(_Atomic_fetch_xor_8)
BRIDGE_DECL(_Atomic_flag_clear)
BRIDGE_DECL(_Atomic_flag_test_and_set)
BRIDGE_DECL(_Atomic_is_lock_free_1)
BRIDGE_DECL(_Atomic_is_lock_free_2)
BRIDGE_DECL(_Atomic_is_lock_free_4)
BRIDGE_DECL(_Atomic_is_lock_free_8)
BRIDGE_DECL(_Atomic_load_1)
BRIDGE_DECL(_Atomic_load_2)
BRIDGE_DECL(_Atomic_load_4)
BRIDGE_DECL(_Atomic_load_8)
BRIDGE_DECL(_Atomic_signal_fence)
BRIDGE_DECL(_Atomic_store_1)
BRIDGE_DECL(_Atomic_store_2)
BRIDGE_DECL(_Atomic_store_4)
BRIDGE_DECL(_Atomic_store_8)
BRIDGE_DECL(_Atomic_thread_fence)
BRIDGE_DECL(_Call_onceEx)
BRIDGE_DECL(_Cnd_broadcast)
BRIDGE_DECL(_Cnd_destroy)
BRIDGE_DECL(_Cnd_do_broadcast_at_thread_exit)
BRIDGE_DECL(_Cnd_init)
BRIDGE_DECL(_Cnd_register_at_thread_exit)
BRIDGE_DECL(_Cnd_signal)
BRIDGE_DECL(_Cnd_timedwait)
BRIDGE_DECL(_Cnd_unregister_at_thread_exit)
BRIDGE_DECL(_Cnd_wait)
BRIDGE_DECL(_Do_call)
BRIDGE_DECL(_Lock_shared_ptr_spin_lock)
BRIDGE_DECL(_Mtx_current_owns)
BRIDGE_DECL(_Mtx_destroy)
BRIDGE_DECL(_Mtx_init)
BRIDGE_DECL(_Mtx_lock)
BRIDGE_DECL(_Mtx_timedlock)
BRIDGE_DECL(_Mtx_trylock)
BRIDGE_DECL(_Mtx_unlock)
BRIDGE_DECL(_Restore_state)
BRIDGE_DECL(_Save_state)
BRIDGE_DECL(_Thrd_abort)
BRIDGE_DECL(_Thrd_create)
BRIDGE_DECL(_Thrd_current)
BRIDGE_DECL(_Thrd_detach)
BRIDGE_DECL(_Thrd_equal)
BRIDGE_DECL(_Thrd_exit)
BRIDGE_DECL(_Thrd_join)
BRIDGE_DECL(_Thrd_lt)
BRIDGE_DECL(_Thrd_sleep)
BRIDGE_DECL(_Thrd_start)
BRIDGE_DECL(_Thrd_yield)
BRIDGE_DECL(_Unlock_shared_ptr_spin_lock)
BRIDGE_DECL(_Unwind_Resume)
BRIDGE_DECL(_Xtime_get_ticks)
BRIDGE_DECL(_ZN10__cxxabiv116__enum_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv116__enum_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv116__enum_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__array_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__array_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__array_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__class_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__class_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__class_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__pbase_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__pbase_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv117__pbase_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv119__pointer_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv119__pointer_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv119__pointer_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv120__function_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv120__function_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv120__function_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv120__si_class_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv120__si_class_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv120__si_class_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv121__vmi_class_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv121__vmi_class_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv121__vmi_class_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv123__fundamental_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv123__fundamental_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv123__fundamental_type_infoD2Ev)
BRIDGE_DECL(_ZN10__cxxabiv129__pointer_to_member_type_infoD0Ev)
BRIDGE_DECL(_ZN10__cxxabiv129__pointer_to_member_type_infoD1Ev)
BRIDGE_DECL(_ZN10__cxxabiv129__pointer_to_member_type_infoD2Ev)
BRIDGE_DECL(_ZN6Dinkum7threads17_Throw_lock_errorEv)
BRIDGE_DECL(_ZN6Dinkum7threads21_Throw_resource_errorEv)
BRIDGE_DECL(_ZNKSt10bad_typeid4whatEv)
BRIDGE_DECL(_ZNKSt10bad_typeid8_DoraiseEv)
BRIDGE_DECL(_ZNKSt11logic_error4whatEv)
BRIDGE_DECL(_ZNKSt11logic_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt11range_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt12_String_base5_XlenEv)
BRIDGE_DECL(_ZNKSt12_String_base5_XranEv)
BRIDGE_DECL(_ZNKSt12domain_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt12length_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt12out_of_range8_DoraiseEv)
BRIDGE_DECL(_ZNKSt13_codecvt_base11do_encodingEv)
BRIDGE_DECL(_ZNKSt13_codecvt_base13do_max_lengthEv)
BRIDGE_DECL(_ZNKSt13_codecvt_base16do_always_noconvEv)
BRIDGE_DECL(_ZNKSt13bad_exception4whatEv)
BRIDGE_DECL(_ZNKSt13bad_exception8_DoraiseEv)
BRIDGE_DECL(_ZNKSt13runtime_error4whatEv)
BRIDGE_DECL(_ZNKSt13runtime_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt14overflow_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt15underflow_error8_DoraiseEv)
BRIDGE_DECL(_ZNKSt16invalid_argument8_DoraiseEv)
BRIDGE_DECL(_ZNKSt6_ctypeIcE10do_tolowerEPcPKc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE10do_tolowerEc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE10do_toupperEPcPKc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE10do_toupperEc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE8do_widenEPKcS2_Pc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE8do_widenEc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE9do_narrowEPKcS2_cPc)
BRIDGE_DECL(_ZNKSt6_ctypeIcE9do_narrowEcc)
BRIDGE_DECL(_ZNKSt6_ctypeIwE10do_scan_isEsPKwS2_)
BRIDGE_DECL(_ZNKSt6_ctypeIwE10do_tolowerEPwPKw)
BRIDGE_DECL(_ZNKSt6_ctypeIwE10do_tolowerEw)
BRIDGE_DECL(_ZNKSt6_ctypeIwE10do_toupperEPwPKw)
BRIDGE_DECL(_ZNKSt6_ctypeIwE10do_toupperEw)
BRIDGE_DECL(_ZNKSt6_ctypeIwE11do_scan_notEsPKwS2_)
BRIDGE_DECL(_ZNKSt6_ctypeIwE5do_isEPKwS2_Ps)
BRIDGE_DECL(_ZNKSt6_ctypeIwE5do_isEsw)
BRIDGE_DECL(_ZNKSt6_ctypeIwE8do_widenEPKcS2_Pw)
BRIDGE_DECL(_ZNKSt6_ctypeIwE8do_widenEc)
BRIDGE_DECL(_ZNKSt6_ctypeIwE9do_narrowEPKwS2_cPc)
BRIDGE_DECL(_ZNKSt6_ctypeIwE9do_narrowEwc)
BRIDGE_DECL(_ZNKSt8_codecvtIccSt9_MbstatetE10do_unshiftERS0_PcS3_RS3_)
BRIDGE_DECL(_ZNKSt8_codecvtIccSt9_MbstatetE5do_inERS0_PKcS4_RS4_PcS6_RS6_)
BRIDGE_DECL(_ZNKSt8_codecvtIccSt9_MbstatetE6do_outERS0_PKcS4_RS4_PcS6_RS6_)
BRIDGE_DECL(_ZNKSt8_codecvtIccSt9_MbstatetE9do_lengthERKS0_PKcS5_j)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE10do_unshiftERS0_PcS3_RS3_)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE11do_encodingEv)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE13do_max_lengthEv)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE16do_always_noconvEv)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE5do_inERS0_PKcS4_RS4_PwS6_RS6_)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE6do_outERS0_PKwS4_RS4_PcS6_RS6_)
BRIDGE_DECL(_ZNKSt8_codecvtIwcSt9_MbstatetE9do_lengthERKS0_PKcS5_j)
BRIDGE_DECL(_ZNKSt8bad_cast4whatEv)
BRIDGE_DECL(_ZNKSt8bad_cast8_DoraiseEv)
BRIDGE_DECL(_ZNKSt8ios_base7failure8_DoraiseEv)
BRIDGE_DECL(_ZNKSt9bad_alloc4whatEv)
BRIDGE_DECL(_ZNKSt9bad_alloc8_DoraiseEv)
BRIDGE_DECL(_ZNKSt9exception4whatEv)
BRIDGE_DECL(_ZNKSt9exception6_RaiseEv)
BRIDGE_DECL(_ZNKSt9exception8_DoraiseEv)
BRIDGE_DECL(_ZNKSt9type_info4nameEv)
BRIDGE_DECL(_ZNKSt9type_info6beforeERKS_)
BRIDGE_DECL(_ZNKSt9type_infoeqERKS_)
BRIDGE_DECL(_ZNKSt9type_infoneERKS_)
BRIDGE_DECL(_ZNSdD0Ev)
BRIDGE_DECL(_ZNSdD1Ev)
BRIDGE_DECL(_ZNSiD0Ev)
BRIDGE_DECL(_ZNSiD1Ev)
BRIDGE_DECL(_ZNSoC1EPSt15basic_streambufIcSt11char_traitsIcEEb)
BRIDGE_DECL(_ZNSoD0Ev)
BRIDGE_DECL(_ZNSoD1Ev)
BRIDGE_DECL(_ZNSs5_GrowEjb)
BRIDGE_DECL(_ZNSs6assignERKSsjj)
BRIDGE_DECL(_ZNSsC1EPKc)
BRIDGE_DECL(_ZNSsC1ERKSs)
BRIDGE_DECL(_ZNSt10bad_typeidC1ERKS_)
BRIDGE_DECL(_ZNSt10bad_typeidC1Ev)
BRIDGE_DECL(_ZNSt10bad_typeidC2ERKS_)
BRIDGE_DECL(_ZNSt10bad_typeidC2Ev)
BRIDGE_DECL(_ZNSt10bad_typeidD0Ev)
BRIDGE_DECL(_ZNSt10bad_typeidD1Ev)
BRIDGE_DECL(_ZNSt10bad_typeidD2Ev)
BRIDGE_DECL(_ZNSt10bad_typeidaSERKS_)
BRIDGE_DECL(_ZNSt10istrstreamD0Ev)
BRIDGE_DECL(_ZNSt10istrstreamD1Ev)
BRIDGE_DECL(_ZNSt10istrstreamD2Ev)
BRIDGE_DECL(_ZNSt10ostrstreamC1EPciNSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt10ostrstreamC2EPciNSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt10ostrstreamD0Ev)
BRIDGE_DECL(_ZNSt10ostrstreamD1Ev)
BRIDGE_DECL(_ZNSt10ostrstreamD2Ev)
BRIDGE_DECL(_ZNSt11logic_errorC1ERKS_)
BRIDGE_DECL(_ZNSt11logic_errorC2ERKSs)
BRIDGE_DECL(_ZNSt11logic_errorD0Ev)
BRIDGE_DECL(_ZNSt11logic_errorD1Ev)
BRIDGE_DECL(_ZNSt11logic_errorD2Ev)
BRIDGE_DECL(_ZNSt11range_errorC1ERKS_)
BRIDGE_DECL(_ZNSt11range_errorD0Ev)
BRIDGE_DECL(_ZNSt11range_errorD1Ev)
BRIDGE_DECL(_ZNSt11range_errorD2Ev)
BRIDGE_DECL(_ZNSt11regex_errorD1Ev)
BRIDGE_DECL(_ZNSt12bad_weak_ptrD1Ev)
BRIDGE_DECL(_ZNSt12domain_errorC1ERKS_)
BRIDGE_DECL(_ZNSt12domain_errorD0Ev)
BRIDGE_DECL(_ZNSt12domain_errorD1Ev)
BRIDGE_DECL(_ZNSt12domain_errorD2Ev)
BRIDGE_DECL(_ZNSt12future_errorD1Ev)
BRIDGE_DECL(_ZNSt12length_errorC1ERKS_)
BRIDGE_DECL(_ZNSt12length_errorC1ERKSs)
BRIDGE_DECL(_ZNSt12length_errorD0Ev)
BRIDGE_DECL(_ZNSt12length_errorD1Ev)
BRIDGE_DECL(_ZNSt12length_errorD2Ev)
BRIDGE_DECL(_ZNSt12out_of_rangeC1ERKS_)
BRIDGE_DECL(_ZNSt12out_of_rangeC1ERKSs)
BRIDGE_DECL(_ZNSt12out_of_rangeD0Ev)
BRIDGE_DECL(_ZNSt12out_of_rangeD1Ev)
BRIDGE_DECL(_ZNSt12out_of_rangeD2Ev)
BRIDGE_DECL(_ZNSt12strstreambuf5_InitEiPcS0_i)
BRIDGE_DECL(_ZNSt12strstreambuf5_TidyEv)
BRIDGE_DECL(_ZNSt12strstreambuf6freezeEb)
BRIDGE_DECL(_ZNSt12strstreambuf7seekoffElNSt5_IosbIiE8_SeekdirENS1_9_OpenmodeE)
BRIDGE_DECL(_ZNSt12strstreambuf7seekposESt4fposISt9_MbstatetENSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt12strstreambuf8overflowEi)
BRIDGE_DECL(_ZNSt12strstreambuf9pbackfailEi)
BRIDGE_DECL(_ZNSt12strstreambuf9underflowEv)
BRIDGE_DECL(_ZNSt12strstreambufD0Ev)
BRIDGE_DECL(_ZNSt12strstreambufD1Ev)
BRIDGE_DECL(_ZNSt12strstreambufD2Ev)
BRIDGE_DECL(_ZNSt12system_errorD1Ev)
BRIDGE_DECL(_ZNSt12system_errorD2Ev)
BRIDGE_DECL(_ZNSt13_codecvt_baseD0Ev)
BRIDGE_DECL(_ZNSt13_codecvt_baseD1Ev)
BRIDGE_DECL(_ZNSt13bad_exceptionC1ERKS_)
BRIDGE_DECL(_ZNSt13bad_exceptionC1Ev)
BRIDGE_DECL(_ZNSt13bad_exceptionC2ERKS_)
BRIDGE_DECL(_ZNSt13bad_exceptionC2Ev)
BRIDGE_DECL(_ZNSt13bad_exceptionD0Ev)
BRIDGE_DECL(_ZNSt13bad_exceptionD1Ev)
BRIDGE_DECL(_ZNSt13bad_exceptionD2Ev)
BRIDGE_DECL(_ZNSt13bad_exceptionaSERKS_)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE4syncEv)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE5_LockEv)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE5uflowEv)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE6setbufEPci)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE7_UnlockEv)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE7seekoffElNSt5_IosbIiE8_SeekdirENS4_9_OpenmodeE)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE7seekposESt4fposISt9_MbstatetENSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE8overflowEi)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE9_EndwriteEv)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE9pbackfailEi)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEE9underflowEv)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev)
BRIDGE_DECL(_ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE4syncEv)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE5_LockEv)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE5uflowEv)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE6setbufEPwi)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE7_UnlockEv)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE7seekoffElNSt5_IosbIiE8_SeekdirENS4_9_OpenmodeE)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE7seekposESt4fposISt9_MbstatetENSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE8overflowEj)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE9_EndwriteEv)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE9pbackfailEj)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEE9underflowEv)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZNSt13basic_filebufIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZNSt13basic_istreamIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZNSt13basic_istreamIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZNSt13basic_ostreamIwSt11char_traitsIwEEC1EPSt15basic_streambufIwS1_Eb)
BRIDGE_DECL(_ZNSt13basic_ostreamIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZNSt13basic_ostreamIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZNSt13runtime_errorC1ERKS_)
BRIDGE_DECL(_ZNSt13runtime_errorD0Ev)
BRIDGE_DECL(_ZNSt13runtime_errorD1Ev)
BRIDGE_DECL(_ZNSt13runtime_errorD2Ev)
BRIDGE_DECL(_ZNSt14overflow_errorC1ERKS_)
BRIDGE_DECL(_ZNSt14overflow_errorD0Ev)
BRIDGE_DECL(_ZNSt14overflow_errorD1Ev)
BRIDGE_DECL(_ZNSt14overflow_errorD2Ev)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE4syncEv)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE5_LockEv)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE5uflowEv)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE6setbufEPci)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE6xsgetnEPci)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE6xsputnEPKci)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE7_UnlockEv)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE7seekoffElNSt5_IosbIiE8_SeekdirENS4_9_OpenmodeE)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE7seekposESt4fposISt9_MbstatetENSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE8overflowEi)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE9pbackfailEi)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE9showmanycEv)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEE9underflowEv)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev)
BRIDGE_DECL(_ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE4syncEv)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE5_LockEv)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE5uflowEv)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE6setbufEPwi)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE6xsgetnEPwi)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE6xsputnEPKwi)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE7_UnlockEv)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE7seekoffElNSt5_IosbIiE8_SeekdirENS4_9_OpenmodeE)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE7seekposESt4fposISt9_MbstatetENSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE8overflowEj)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE9pbackfailEj)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE9showmanycEv)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEE9underflowEv)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZNSt15basic_streambufIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZNSt15underflow_errorC1ERKS_)
BRIDGE_DECL(_ZNSt15underflow_errorD0Ev)
BRIDGE_DECL(_ZNSt15underflow_errorD1Ev)
BRIDGE_DECL(_ZNSt15underflow_errorD2Ev)
BRIDGE_DECL(_ZNSt16invalid_argumentC1ERKS_)
BRIDGE_DECL(_ZNSt16invalid_argumentD0Ev)
BRIDGE_DECL(_ZNSt16invalid_argumentD1Ev)
BRIDGE_DECL(_ZNSt16invalid_argumentD2Ev)
BRIDGE_DECL(_ZNSt16nested_exceptionD0Ev)
BRIDGE_DECL(_ZNSt16nested_exceptionD1Ev)
BRIDGE_DECL(_ZNSt16nested_exceptionD2Ev)
BRIDGE_DECL(_ZNSt17bad_function_callD1Ev)
BRIDGE_DECL(_ZNSt20bad_array_new_lengthD1Ev)
BRIDGE_DECL(_ZNSt4_Pad7_LaunchEPij)
BRIDGE_DECL(_ZNSt4_Pad8_ReleaseEv)
BRIDGE_DECL(_ZNSt4_PadC1Ev)
BRIDGE_DECL(_ZNSt4_PadC2Ev)
BRIDGE_DECL(_ZNSt4_PadD1Ev)
BRIDGE_DECL(_ZNSt4_PadD2Ev)
BRIDGE_DECL(_ZNSt6_Mutex5_LockEv)
BRIDGE_DECL(_ZNSt6_Mutex7_UnlockEv)
BRIDGE_DECL(_ZNSt6_MutexC1ESt14_Uninitialized)
BRIDGE_DECL(_ZNSt6_MutexC1Ev)
BRIDGE_DECL(_ZNSt6_MutexC2ESt14_Uninitialized)
BRIDGE_DECL(_ZNSt6_MutexC2Ev)
BRIDGE_DECL(_ZNSt6_MutexD1Ev)
BRIDGE_DECL(_ZNSt6_MutexD2Ev)
BRIDGE_DECL(_ZNSt6_WinitC1Ev)
BRIDGE_DECL(_ZNSt6_WinitC2Ev)
BRIDGE_DECL(_ZNSt6_WinitD1Ev)
BRIDGE_DECL(_ZNSt6_WinitD2Ev)
BRIDGE_DECL(_ZNSt6_ctypeIcED0Ev)
BRIDGE_DECL(_ZNSt6_ctypeIcED1Ev)
BRIDGE_DECL(_ZNSt6_ctypeIwED0Ev)
BRIDGE_DECL(_ZNSt6_ctypeIwED1Ev)
BRIDGE_DECL(_ZNSt8_codecvtIccSt9_MbstatetED0Ev)
BRIDGE_DECL(_ZNSt8_codecvtIccSt9_MbstatetED1Ev)
BRIDGE_DECL(_ZNSt8_codecvtIwcSt9_MbstatetED0Ev)
BRIDGE_DECL(_ZNSt8_codecvtIwcSt9_MbstatetED1Ev)
BRIDGE_DECL(_ZNSt8bad_castC1ERKS_)
BRIDGE_DECL(_ZNSt8bad_castC1Ev)
BRIDGE_DECL(_ZNSt8bad_castC2ERKS_)
BRIDGE_DECL(_ZNSt8bad_castC2Ev)
BRIDGE_DECL(_ZNSt8bad_castD0Ev)
BRIDGE_DECL(_ZNSt8bad_castD1Ev)
BRIDGE_DECL(_ZNSt8bad_castD2Ev)
BRIDGE_DECL(_ZNSt8bad_castaSERKS_)
BRIDGE_DECL(_ZNSt8ios_base17register_callbackEPFvNS_5eventERS_iEi)
BRIDGE_DECL(_ZNSt8ios_base4InitC1Ev)
BRIDGE_DECL(_ZNSt8ios_base4InitC2Ev)
BRIDGE_DECL(_ZNSt8ios_base4InitD1Ev)
BRIDGE_DECL(_ZNSt8ios_base4InitD2Ev)
BRIDGE_DECL(_ZNSt8ios_base5_InitEv)
BRIDGE_DECL(_ZNSt8ios_base5_TidyEv)
BRIDGE_DECL(_ZNSt8ios_base5clearENSt5_IosbIiE8_IostateEb)
BRIDGE_DECL(_ZNSt8ios_base7_AddstdEPS_)
BRIDGE_DECL(_ZNSt8ios_base7_AddstdEv)
BRIDGE_DECL(_ZNSt8ios_base7copyfmtERKS_)
BRIDGE_DECL(_ZNSt8ios_base7failureC1ERKS0_)
BRIDGE_DECL(_ZNSt8ios_base7failureC1ERKSs)
BRIDGE_DECL(_ZNSt8ios_base7failureD0Ev)
BRIDGE_DECL(_ZNSt8ios_base7failureD1Ev)
BRIDGE_DECL(_ZNSt8ios_base8_CallfnsENS_5eventE)
BRIDGE_DECL(_ZNSt8ios_base8_FindarrEi)
BRIDGE_DECL(_ZNSt8ios_baseD0Ev)
BRIDGE_DECL(_ZNSt8ios_baseD1Ev)
BRIDGE_DECL(_ZNSt8ios_baseD2Ev)
BRIDGE_DECL(_ZNSt9bad_allocC1EPKc)
BRIDGE_DECL(_ZNSt9bad_allocC1ERKS_)
BRIDGE_DECL(_ZNSt9bad_allocC1Ev)
BRIDGE_DECL(_ZNSt9bad_allocC2EPKc)
BRIDGE_DECL(_ZNSt9bad_allocC2ERKS_)
BRIDGE_DECL(_ZNSt9bad_allocC2Ev)
BRIDGE_DECL(_ZNSt9bad_allocD0Ev)
BRIDGE_DECL(_ZNSt9bad_allocD1Ev)
BRIDGE_DECL(_ZNSt9bad_allocD2Ev)
BRIDGE_DECL(_ZNSt9bad_allocaSERKS_)
BRIDGE_DECL(_ZNSt9basic_iosIcSt11char_traitsIcEED0Ev)
BRIDGE_DECL(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev)
BRIDGE_DECL(_ZNSt9basic_iosIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZNSt9basic_iosIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZNSt9exception18_Set_raise_handlerEPFvRKS_E)
BRIDGE_DECL(_ZNSt9exceptionC1ERKS_)
BRIDGE_DECL(_ZNSt9exceptionC1Ev)
BRIDGE_DECL(_ZNSt9exceptionC2ERKS_)
BRIDGE_DECL(_ZNSt9exceptionC2Ev)
BRIDGE_DECL(_ZNSt9exceptionD0Ev)
BRIDGE_DECL(_ZNSt9exceptionD1Ev)
BRIDGE_DECL(_ZNSt9exceptionD2Ev)
BRIDGE_DECL(_ZNSt9exceptionaSERKS_)
BRIDGE_DECL(_ZNSt9strstreamC1EPciNSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt9strstreamC2EPciNSt5_IosbIiE9_OpenmodeE)
BRIDGE_DECL(_ZNSt9strstreamD0Ev)
BRIDGE_DECL(_ZNSt9strstreamD1Ev)
BRIDGE_DECL(_ZNSt9strstreamD2Ev)
BRIDGE_DECL(_ZNSt9type_infoD0Ev)
BRIDGE_DECL(_ZNSt9type_infoD1Ev)
BRIDGE_DECL(_ZNSt9type_infoD2Ev)
BRIDGE_DECL(_ZSt10_Rng_abortPKc)
BRIDGE_DECL(_ZSt10adopt_lock)
BRIDGE_DECL(_ZSt10defer_lock)
BRIDGE_DECL(_ZSt10unexpectedv)
BRIDGE_DECL(_ZSt11_Xbad_allocv)
BRIDGE_DECL(_ZSt11setiosflagsNSt5_IosbIiE9_FmtflagsE)
BRIDGE_DECL(_ZSt11try_to_lock)
BRIDGE_DECL(_ZSt12setprecisioni)
BRIDGE_DECL(_ZSt13_Syserror_mapi)
BRIDGE_DECL(_ZSt13_Xregex_errorNSt15regex_constants10error_typeE)
BRIDGE_DECL(_ZSt13resetiosflagsNSt5_IosbIiE9_FmtflagsE)
BRIDGE_DECL(_ZSt13set_terminatePFvvE)
BRIDGE_DECL(_ZSt14_Debug_messagePKcS0_)
BRIDGE_DECL(_ZSt14_Debug_messagePKcS0_j)
BRIDGE_DECL(_ZSt14_Random_devicev)
BRIDGE_DECL(_ZSt14_Throw_C_errori)
BRIDGE_DECL(_ZSt14_Xlength_errorPKc)
BRIDGE_DECL(_ZSt14_Xout_of_rangePKc)
BRIDGE_DECL(_ZSt14set_unexpectedPFvvE)
BRIDGE_DECL(_ZSt15_Xruntime_errorPKc)
BRIDGE_DECL(_ZSt15get_new_handlerv)
BRIDGE_DECL(_ZSt15set_new_handlerPFvvE)
BRIDGE_DECL(_ZSt16_Throw_Cpp_errori)
BRIDGE_DECL(_ZSt16_Xoverflow_errorPKc)
BRIDGE_DECL(_ZSt16_get_new_handlerv)
BRIDGE_DECL(_ZSt17_Future_error_mapi)
BRIDGE_DECL(_ZSt18_Xinvalid_argumentPKc)
BRIDGE_DECL(_ZSt18uncaught_exceptionv)
BRIDGE_DECL(_ZSt19_Throw_future_errorRKSt10error_code)
BRIDGE_DECL(_ZSt19_Xbad_function_callv)
BRIDGE_DECL(_ZSt22_Get_future_error_whati)
BRIDGE_DECL(_ZSt22_Random_device_entropyv)
BRIDGE_DECL(_ZSt25_Rethrow_future_exceptionSt13exception_ptr)
BRIDGE_DECL(_ZSt4setwi)
BRIDGE_DECL(_ZSt6_ThrowRKSt9exception)
BRIDGE_DECL(_ZSt7_FiopenPKcNSt5_IosbIiE9_OpenmodeEi)
BRIDGE_DECL(_ZSt7_FiopenPKwNSt5_IosbIiE9_OpenmodeEi)
BRIDGE_DECL(_ZSt7_MP_AddPyy)
BRIDGE_DECL(_ZSt7_MP_GetPy)
BRIDGE_DECL(_ZSt7_MP_MulPyyy)
BRIDGE_DECL(_ZSt7_MP_RemPyy)
BRIDGE_DECL(_ZSt7setbasei)
BRIDGE_DECL(_ZSt8_XLgammad)
BRIDGE_DECL(_ZSt8_XLgammae)
BRIDGE_DECL(_ZSt8_XLgammaf)
BRIDGE_DECL(_ZSt9terminatev)
BRIDGE_DECL(_ZThn8_NSdD0Ev)
BRIDGE_DECL(_ZThn8_NSdD1Ev)
BRIDGE_DECL(_ZThn8_NSt9strstreamD0Ev)
BRIDGE_DECL(_ZThn8_NSt9strstreamD1Ev)
BRIDGE_DECL(_ZTv0_n12_NSdD0Ev)
BRIDGE_DECL(_ZTv0_n12_NSdD1Ev)
BRIDGE_DECL(_ZTv0_n12_NSiD0Ev)
BRIDGE_DECL(_ZTv0_n12_NSiD1Ev)
BRIDGE_DECL(_ZTv0_n12_NSoD0Ev)
BRIDGE_DECL(_ZTv0_n12_NSoD1Ev)
BRIDGE_DECL(_ZTv0_n12_NSt10istrstreamD0Ev)
BRIDGE_DECL(_ZTv0_n12_NSt10istrstreamD1Ev)
BRIDGE_DECL(_ZTv0_n12_NSt10ostrstreamD0Ev)
BRIDGE_DECL(_ZTv0_n12_NSt10ostrstreamD1Ev)
BRIDGE_DECL(_ZTv0_n12_NSt13basic_istreamIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZTv0_n12_NSt13basic_istreamIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZTv0_n12_NSt13basic_ostreamIwSt11char_traitsIwEED0Ev)
BRIDGE_DECL(_ZTv0_n12_NSt13basic_ostreamIwSt11char_traitsIwEED1Ev)
BRIDGE_DECL(_ZTv0_n12_NSt9strstreamD0Ev)
BRIDGE_DECL(_ZTv0_n12_NSt9strstreamD1Ev)
BRIDGE_DECL(_ZdaPv)
BRIDGE_DECL(_ZdaPvRKSt9nothrow_t)
BRIDGE_DECL(_ZdaPvS_)
BRIDGE_DECL(_ZdlPv)
BRIDGE_DECL(_ZdlPvRKSt9nothrow_t)
BRIDGE_DECL(_ZdlPvS_)
BRIDGE_DECL(_Znaj)
BRIDGE_DECL(_ZnajRKSt9nothrow_t)
BRIDGE_DECL(_Znwj)
BRIDGE_DECL(_ZnwjRKSt9nothrow_t)
BRIDGE_DECL(__cxa_allocate_exception)
BRIDGE_DECL(__cxa_begin_catch)
BRIDGE_DECL(__cxa_begin_cleanup)
BRIDGE_DECL(__cxa_call_terminate)
BRIDGE_DECL(__cxa_call_unexpected)
BRIDGE_DECL(__cxa_current_primary_exception)
BRIDGE_DECL(__cxa_decrement_exception_refcount)
BRIDGE_DECL(__cxa_end_catch)
BRIDGE_DECL(__cxa_end_cleanup)
BRIDGE_DECL(__cxa_free_exception)
BRIDGE_DECL(__cxa_get_exception_ptr)
BRIDGE_DECL(__cxa_increment_exception_refcount)
BRIDGE_DECL(__cxa_rethrow)
BRIDGE_DECL(__cxa_rethrow_primary_exception)
BRIDGE_DECL(__cxa_throw)
BRIDGE_DECL(__snc_personality_v0)
BRIDGE_DECL(xtime_get)