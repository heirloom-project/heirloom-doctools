#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)/usr/ucb/tbl.sl	5.6 (gritter) 2/13/06";
/* SLIST */
/*
t..c: * Sccsid @(#)t..c	1.12 (gritter) 2/8/06
t0.c: * Sccsid @(#)t0.c	1.6 (gritter) 10/15/05
t1.c: * Sccsid @(#)t1.c	1.10 (gritter) 2/13/06
t2.c: * Sccsid @(#)t2.c	1.3 (gritter) 7/23/05
t3.c: * Sccsid @(#)t3.c	1.7 (gritter) 10/15/05
t4.c: * Sccsid @(#)t4.c	1.4 (gritter) 7/24/05
t5.c: * Sccsid @(#)t5.c	1.5 (gritter) 8/12/05
t6.c: * Sccsid @(#)t6.c	1.6 (gritter) 2/8/06
t7.c: * Sccsid @(#)t7.c	1.3 (gritter) 7/23/05
t8.c: * Sccsid @(#)t8.c	1.7 (gritter) 2/13/06
t9.c: * Sccsid @(#)t9.c	1.6 (gritter) 10/15/05
tb.c: * Sccsid @(#)tb.c	1.5 (gritter) 8/12/05
tc.c: * Sccsid @(#)tc.c	1.5 (gritter) 10/15/05
te.c: * Sccsid @(#)te.c	1.11 (gritter) 2/13/06
tf.c: * Sccsid @(#)tf.c	1.7 (gritter) 2/13/06
tg.c: * Sccsid @(#)tg.c	1.6 (gritter) 10/15/05
ti.c: * Sccsid @(#)ti.c	1.3 (gritter) 7/23/05
tm.c: * Sccsid @(#)tm.c	1.5 (gritter) 9/15/05
ts.c: * Sccsid @(#)ts.c	1.3 (gritter) 7/23/05
tt.c: * Sccsid @(#)tt.c	1.3 (gritter) 7/23/05
tu.c: * Sccsid @(#)tu.c	1.3 (gritter) 7/23/05
tv.c: * Sccsid @(#)tv.c	1.3 (gritter) 7/23/05
*/
