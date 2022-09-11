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
static const char *ng0 = "C:/ashdaisdh/p6/BE.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {12U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {15U, 0U};



static void Always_26_0(char *t0)
{
    char t9[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    int t38;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(52, ng0);

LAB39:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);

LAB14:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1008U);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t8, t11, 2, t12, 32, 1);
    t13 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t9 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB18;

LAB15:    if (t26 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t14) = 1;

LAB18:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(32, ng0);

LAB23:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB21:    goto LAB13;

LAB9:    xsi_set_current_line(36, ng0);

LAB24:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t7);
    t20 = (t19 >> 0);
    *((unsigned int *)t3) = t20;
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 & 3U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 3U);

LAB25:    t8 = ((char*)((ng2)));
    t38 = xsi_vlog_unsigned_case_compare(t9, 32, t8, 32);
    if (t38 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 32, t2, 32);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 32, t2, 32);
    if (t6 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(47, ng0);

LAB38:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB34:    goto LAB13;

LAB17:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(29, ng0);

LAB22:    xsi_set_current_line(30, ng0);
    t36 = ((char*)((ng3)));
    t37 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB21;

LAB26:    xsi_set_current_line(38, ng0);

LAB35:    xsi_set_current_line(39, ng0);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(41, ng0);

LAB36:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(44, ng0);

LAB37:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB34;

}


extern void work_m_00000000004059358370_4140825114_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000004059358370_4140825114", "isim/tb_isim_beh.exe.sim/work/m_00000000004059358370_4140825114.didat");
	xsi_register_executes(pe);
}
