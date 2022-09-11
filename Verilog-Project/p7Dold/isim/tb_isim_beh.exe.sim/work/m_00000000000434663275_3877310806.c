/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/ashdaisdh/p7Dold/mips.v";
static unsigned int ng1[] = {0U, 0U};



static void Cont_43_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t4, 1, 1, 1U, t5, 1);
    t2 = (t0 + 1848U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t6, 1, 1, 1U, t7, 1);
    t2 = (t0 + 1368U);
    t9 = *((char **)t2);
    xsi_vlogtype_concat(t8, 1, 1, 1U, t9, 1);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 6, 6, 4U, t2, 3, t8, 1, t6, 1, t4, 1);
    t10 = (t0 + 5488);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 63U;
    t16 = t15;
    t17 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t10, 0, 5);
    t23 = (t0 + 5408);
    *((int *)t23) = 1;

LAB1:    return;
}


extern void work_m_00000000000434663275_3877310806_init()
{
	static char *pe[] = {(void *)Cont_43_0};
	xsi_register_didat("work_m_00000000000434663275_3877310806", "isim/tb_isim_beh.exe.sim/work/m_00000000000434663275_3877310806.didat");
	xsi_register_executes(pe);
}
