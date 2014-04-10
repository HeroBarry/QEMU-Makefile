#include "exec/def-helper.h"

DEF_HELPER_3(raise_exception_err, void, env, i32, int)
DEF_HELPER_2(raise_exception, void, env, i32)
DEF_HELPER_1(interrupt_restart, void, env)

#ifdef TARGET_MIPS64
DEF_HELPER_4(ldl, tl, env, tl, tl, int)
DEF_HELPER_4(ldr, tl, env, tl, tl, int)
DEF_HELPER_4(sdl, void, env, tl, tl, int)
DEF_HELPER_4(sdr, void, env, tl, tl, int)
#endif
DEF_HELPER_4(lwl, tl, env, tl, tl, int)
DEF_HELPER_4(lwr, tl, env, tl, tl, int)
DEF_HELPER_4(swl, void, env, tl, tl, int)
DEF_HELPER_4(swr, void, env, tl, tl, int)

#ifndef CONFIG_USER_ONLY
DEF_HELPER_2(ll, tl, tl, int)
DEF_HELPER_3(sc, tl, tl, tl, int)
#ifdef TARGET_MIPS64
DEF_HELPER_2(lld, tl, tl, int)
DEF_HELPER_3(scd, tl, tl, tl, int)
#endif
#endif

DEF_HELPER_FLAGS_1(clo, TCG_CALL_CONST | TCG_CALL_PURE, tl, tl)
DEF_HELPER_FLAGS_1(clz, TCG_CALL_CONST | TCG_CALL_PURE, tl, tl)
#ifdef TARGET_MIPS64
DEF_HELPER_FLAGS_1(dclo, TCG_CALL_CONST | TCG_CALL_PURE, tl, tl)
DEF_HELPER_FLAGS_1(dclz, TCG_CALL_CONST | TCG_CALL_PURE, tl, tl)
DEF_HELPER_2(dmult, void, tl, tl)
DEF_HELPER_2(dmultu, void, tl, tl)
#endif

DEF_HELPER_3(muls, tl, env, tl, tl)
DEF_HELPER_3(mulsu, tl, env, tl, tl)
DEF_HELPER_3(macc, tl, env, tl, tl)
DEF_HELPER_3(maccu, tl, env, tl, tl)
DEF_HELPER_3(msac, tl, env, tl, tl)
DEF_HELPER_3(msacu, tl, env, tl, tl)
DEF_HELPER_3(mulhi, tl, env, tl, tl)
DEF_HELPER_3(mulhiu, tl, env, tl, tl)
DEF_HELPER_3(mulshi, tl, env, tl, tl)
DEF_HELPER_3(mulshiu, tl, env, tl, tl)
DEF_HELPER_3(macchi, tl, env, tl, tl)
DEF_HELPER_3(macchiu, tl, env, tl, tl)
DEF_HELPER_3(msachi, tl, env, tl, tl)
DEF_HELPER_3(msachiu, tl, env, tl, tl)

#ifndef CONFIG_USER_ONLY
/* CP0 helpers */
DEF_HELPER_0(mfc0_mvpcontrol, tl)
DEF_HELPER_0(mfc0_mvpconf0, tl)
DEF_HELPER_0(mfc0_mvpconf1, tl)
DEF_HELPER_0(mfc0_random, tl)
DEF_HELPER_0(mfc0_tcstatus, tl)
DEF_HELPER_0(mftc0_tcstatus, tl)
DEF_HELPER_0(mfc0_tcbind, tl)
DEF_HELPER_0(mftc0_tcbind, tl)
DEF_HELPER_0(mfc0_tcrestart, tl)
DEF_HELPER_0(mftc0_tcrestart, tl)
DEF_HELPER_0(mfc0_tchalt, tl)
DEF_HELPER_0(mftc0_tchalt, tl)
DEF_HELPER_0(mfc0_tccontext, tl)
DEF_HELPER_0(mftc0_tccontext, tl)
DEF_HELPER_0(mfc0_tcschedule, tl)
DEF_HELPER_0(mftc0_tcschedule, tl)
DEF_HELPER_0(mfc0_tcschefback, tl)
DEF_HELPER_0(mftc0_tcschefback, tl)
DEF_HELPER_0(mfc0_count, tl)
DEF_HELPER_0(mftc0_entryhi, tl)
DEF_HELPER_0(mftc0_status, tl)
DEF_HELPER_0(mfc0_lladdr, tl)
DEF_HELPER_1(mfc0_watchlo, tl, i32)
DEF_HELPER_1(mfc0_watchhi, tl, i32)
DEF_HELPER_0(mfc0_debug, tl)
DEF_HELPER_0(mftc0_debug, tl)
#ifdef TARGET_MIPS64
DEF_HELPER_0(dmfc0_tcrestart, tl)
DEF_HELPER_0(dmfc0_tchalt, tl)
DEF_HELPER_0(dmfc0_tccontext, tl)
DEF_HELPER_0(dmfc0_tcschedule, tl)
DEF_HELPER_0(dmfc0_tcschefback, tl)
DEF_HELPER_0(dmfc0_lladdr, tl)
DEF_HELPER_1(dmfc0_watchlo, tl, i32)
#endif /* TARGET_MIPS64 */

DEF_HELPER_1(mtc0_index, void, tl)
DEF_HELPER_1(mtc0_mvpcontrol, void, tl)
DEF_HELPER_1(mtc0_vpecontrol, void, tl)
DEF_HELPER_1(mtc0_vpeconf0, void, tl)
DEF_HELPER_1(mtc0_vpeconf1, void, tl)
DEF_HELPER_1(mtc0_yqmask, void, tl)
DEF_HELPER_1(mtc0_vpeopt, void, tl)
DEF_HELPER_1(mtc0_entrylo0, void, tl)
DEF_HELPER_1(mtc0_tcstatus, void, tl)
DEF_HELPER_1(mttc0_tcstatus, void, tl)
DEF_HELPER_1(mtc0_tcbind, void, tl)
DEF_HELPER_1(mttc0_tcbind, void, tl)
DEF_HELPER_1(mtc0_tcrestart, void, tl)
DEF_HELPER_1(mttc0_tcrestart, void, tl)
DEF_HELPER_1(mtc0_tchalt, void, tl)
DEF_HELPER_1(mttc0_tchalt, void, tl)
DEF_HELPER_1(mtc0_tccontext, void, tl)
DEF_HELPER_1(mttc0_tccontext, void, tl)
DEF_HELPER_1(mtc0_tcschedule, void, tl)
DEF_HELPER_1(mttc0_tcschedule, void, tl)
DEF_HELPER_1(mtc0_tcschefback, void, tl)
DEF_HELPER_1(mttc0_tcschefback, void, tl)
DEF_HELPER_1(mtc0_entrylo1, void, tl)
DEF_HELPER_1(mtc0_context, void, tl)
DEF_HELPER_1(mtc0_pagemask, void, tl)
DEF_HELPER_1(mtc0_pagegrain, void, tl)
DEF_HELPER_1(mtc0_wired, void, tl)
DEF_HELPER_1(mtc0_srsconf0, void, tl)
DEF_HELPER_1(mtc0_srsconf1, void, tl)
DEF_HELPER_1(mtc0_srsconf2, void, tl)
DEF_HELPER_1(mtc0_srsconf3, void, tl)
DEF_HELPER_1(mtc0_srsconf4, void, tl)
DEF_HELPER_1(mtc0_hwrena, void, tl)
DEF_HELPER_1(mtc0_count, void, tl)
DEF_HELPER_1(mtc0_entryhi, void, tl)
DEF_HELPER_1(mttc0_entryhi, void, tl)
DEF_HELPER_1(mtc0_compare, void, tl)
DEF_HELPER_1(mtc0_status, void, tl)
DEF_HELPER_1(mttc0_status, void, tl)
DEF_HELPER_1(mtc0_intctl, void, tl)
DEF_HELPER_1(mtc0_srsctl, void, tl)
DEF_HELPER_1(mtc0_cause, void, tl)
DEF_HELPER_1(mtc0_ebase, void, tl)
DEF_HELPER_1(mtc0_config0, void, tl)
DEF_HELPER_1(mtc0_config2, void, tl)
DEF_HELPER_1(mtc0_lladdr, void, tl)
DEF_HELPER_2(mtc0_watchlo, void, tl, i32)
DEF_HELPER_2(mtc0_watchhi, void, tl, i32)
DEF_HELPER_1(mtc0_xcontext, void, tl)
DEF_HELPER_1(mtc0_framemask, void, tl)
DEF_HELPER_1(mtc0_debug, void, tl)
DEF_HELPER_1(mttc0_debug, void, tl)
DEF_HELPER_1(mtc0_performance0, void, tl)
DEF_HELPER_1(mtc0_taglo, void, tl)
DEF_HELPER_1(mtc0_datalo, void, tl)
DEF_HELPER_1(mtc0_taghi, void, tl)
DEF_HELPER_1(mtc0_datahi, void, tl)

/* MIPS MT functions */
DEF_HELPER_1(mftgpr, tl, i32)
DEF_HELPER_1(mftlo, tl, i32)
DEF_HELPER_1(mfthi, tl, i32)
DEF_HELPER_1(mftacx, tl, i32)
DEF_HELPER_0(mftdsp, tl)
DEF_HELPER_2(mttgpr, void, tl, i32)
DEF_HELPER_2(mttlo, void, tl, i32)
DEF_HELPER_2(mtthi, void, tl, i32)
DEF_HELPER_2(mttacx, void, tl, i32)
DEF_HELPER_1(mttdsp, void, tl)
DEF_HELPER_1(dmt, tl, tl)
DEF_HELPER_1(emt, tl, tl)
DEF_HELPER_1(dvpe, tl, tl)
DEF_HELPER_1(evpe, tl, tl)
#endif /* !CONFIG_USER_ONLY */
DEF_HELPER_2(fork, void, tl, tl)
DEF_HELPER_1(yield, tl, tl)

/* CP1 functions */
DEF_HELPER_2(cfc1, tl, env, i32)
DEF_HELPER_3(ctc1, void, env, tl, i32)

DEF_HELPER_2(float_cvtd_s, i64, env, i32)
DEF_HELPER_2(float_cvtd_w, i64, env, i32)
DEF_HELPER_2(float_cvtd_l, i64, env, i64)
DEF_HELPER_2(float_cvtl_d, i64, env, i64)
DEF_HELPER_2(float_cvtl_s, i64, env, i32)
DEF_HELPER_2(float_cvtps_pw, i64, env, i64)
DEF_HELPER_2(float_cvtpw_ps, i64, env, i64)
DEF_HELPER_2(float_cvts_d, i32, env, i64)
DEF_HELPER_2(float_cvts_w, i32, env, i32)
DEF_HELPER_2(float_cvts_l, i32, env, i64)
DEF_HELPER_2(float_cvts_pl, i32, env, i32)
DEF_HELPER_2(float_cvts_pu, i32, env, i32)
DEF_HELPER_2(float_cvtw_s, i32, env, i32)
DEF_HELPER_2(float_cvtw_d, i32, env, i64)

DEF_HELPER_3(float_addr_ps, i64, env, i64, i64)
DEF_HELPER_3(float_mulr_ps, i64, env, i64, i64)

#define FOP_PROTO(op)                            \
DEF_HELPER_2(float_ ## op ## l_s, i64, env, i32) \
DEF_HELPER_2(float_ ## op ## l_d, i64, env, i64) \
DEF_HELPER_2(float_ ## op ## w_s, i32, env, i32) \
DEF_HELPER_2(float_ ## op ## w_d, i32, env, i64)
FOP_PROTO(round)
FOP_PROTO(trunc)
FOP_PROTO(ceil)
FOP_PROTO(floor)
#undef FOP_PROTO

#define FOP_PROTO(op)                            \
DEF_HELPER_2(float_ ## op ## _s, i32, env, i32)  \
DEF_HELPER_2(float_ ## op ## _d, i64, env, i64)
FOP_PROTO(sqrt)
FOP_PROTO(rsqrt)
FOP_PROTO(recip)
#undef FOP_PROTO

#define FOP_PROTO(op)                       \
DEF_HELPER_1(float_ ## op ## _s, i32, i32)  \
DEF_HELPER_1(float_ ## op ## _d, i64, i64)  \
DEF_HELPER_1(float_ ## op ## _ps, i64, i64)
FOP_PROTO(abs)
FOP_PROTO(chs)
#undef FOP_PROTO

#define FOP_PROTO(op)                       \
DEF_HELPER_2(float_ ## op ## _s, i32, env, i32)  \
DEF_HELPER_2(float_ ## op ## _d, i64, env, i64)  \
DEF_HELPER_2(float_ ## op ## _ps, i64, env, i64)
FOP_PROTO(recip1)
FOP_PROTO(rsqrt1)
#undef FOP_PROTO

#define FOP_PROTO(op)                                  \
DEF_HELPER_3(float_ ## op ## _s, i32, env, i32, i32)   \
DEF_HELPER_3(float_ ## op ## _d, i64, env, i64, i64)   \
DEF_HELPER_3(float_ ## op ## _ps, i64, env, i64, i64)
FOP_PROTO(add)
FOP_PROTO(sub)
FOP_PROTO(mul)
FOP_PROTO(div)
FOP_PROTO(recip2)
FOP_PROTO(rsqrt2)
#undef FOP_PROTO

#define FOP_PROTO(op)                                      \
DEF_HELPER_4(float_ ## op ## _s, i32, env, i32, i32, i32)  \
DEF_HELPER_4(float_ ## op ## _d, i64, env, i64, i64, i64)  \
DEF_HELPER_4(float_ ## op ## _ps, i64, env, i64, i64, i64)
FOP_PROTO(muladd)
FOP_PROTO(mulsub)
FOP_PROTO(nmuladd)
FOP_PROTO(nmulsub)
#undef FOP_PROTO

#define FOP_PROTO(op)                                    \
DEF_HELPER_4(cmp_d_ ## op, void, env, i64, i64, int)     \
DEF_HELPER_4(cmpabs_d_ ## op, void, env, i64, i64, int)  \
DEF_HELPER_4(cmp_s_ ## op, void, env, i32, i32, int)     \
DEF_HELPER_4(cmpabs_s_ ## op, void, env, i32, i32, int)  \
DEF_HELPER_4(cmp_ps_ ## op, void, env, i64, i64, int)    \
DEF_HELPER_4(cmpabs_ps_ ## op, void, env, i64, i64, int)
FOP_PROTO(f)
FOP_PROTO(un)
FOP_PROTO(eq)
FOP_PROTO(ueq)
FOP_PROTO(olt)
FOP_PROTO(ult)
FOP_PROTO(ole)
FOP_PROTO(ule)
FOP_PROTO(sf)
FOP_PROTO(ngle)
FOP_PROTO(seq)
FOP_PROTO(ngl)
FOP_PROTO(lt)
FOP_PROTO(nge)
FOP_PROTO(le)
FOP_PROTO(ngt)
#undef FOP_PROTO

/* Special functions */
#ifndef CONFIG_USER_ONLY
DEF_HELPER_1(tlbwi, void, env)
DEF_HELPER_1(tlbwr, void, env)
DEF_HELPER_1(tlbp, void, env)
DEF_HELPER_1(tlbr, void, env)
DEF_HELPER_1(di, tl, env)
DEF_HELPER_1(ei, tl, env)
DEF_HELPER_1(eret, void, env)
DEF_HELPER_1(deret, void, env)
#endif /* !CONFIG_USER_ONLY */
DEF_HELPER_1(rdhwr_cpunum, tl, env)
DEF_HELPER_1(rdhwr_synci_step, tl, env)
DEF_HELPER_1(rdhwr_cc, tl, env)
DEF_HELPER_1(rdhwr_ccres, tl, env)
DEF_HELPER_2(pmon, void, env, int)
DEF_HELPER_1(wait, void, env)

#include "exec/def-helper.h"
