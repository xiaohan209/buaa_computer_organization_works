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
static const char *ng0 = "C:/ashdaisdh/p7D/drext.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {12U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {16, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {24, 0};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {8U, 0U};
static int ng12[] = {0, 0};



static void Always_27_0(char *t0)
{
    char t9[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char t41[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(80, ng0);

LAB77:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);

LAB24:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(32, ng0);

LAB25:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t9) = 1;

LAB29:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(36, ng0);

LAB34:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 16);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    xsi_vlogtype_concat(t29, 16, 16, 1U, t30, 16);
    t7 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t29, 16);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB32:    goto LAB23;

LAB11:    xsi_set_current_line(40, ng0);

LAB35:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB39;

LAB36:    if (t19 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t9) = 1;

LAB39:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(44, ng0);

LAB44:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    xsi_vlogtype_concat(t29, 16, 16, 1U, t30, 16);
    t7 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t29, 16);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB42:    goto LAB23;

LAB13:    xsi_set_current_line(48, ng0);

LAB45:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB49;

LAB46:    if (t19 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t9) = 1;

LAB49:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(52, ng0);

LAB54:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    xsi_vlogtype_concat(t29, 8, 8, 1U, t30, 8);
    t7 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB52:    goto LAB23;

LAB15:    xsi_set_current_line(56, ng0);

LAB55:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(60, ng0);

LAB64:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 8);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    xsi_vlogtype_concat(t29, 8, 8, 1U, t30, 8);
    t7 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB62:    goto LAB23;

LAB17:    xsi_set_current_line(64, ng0);

LAB65:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(68, ng0);

LAB70:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 16);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    xsi_vlogtype_concat(t29, 8, 8, 1U, t30, 8);
    t7 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB68:    goto LAB23;

LAB19:    xsi_set_current_line(72, ng0);

LAB71:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(76, ng0);

LAB76:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 24);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    xsi_vlogtype_concat(t29, 8, 8, 1U, t30, 8);
    t7 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB74:    goto LAB23;

LAB28:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(33, ng0);

LAB33:    xsi_set_current_line(34, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 16);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 16);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    xsi_vlogtype_concat(t30, 16, 16, 1U, t31, 16);
    t42 = ((char*)((ng4)));
    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 31);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 31);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    xsi_vlog_mul_concat(t41, 16, 1, t42, 1U, t45, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t41, 16, t30, 16);
    t53 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t53, t29, 0, 0, 32, 0LL);
    goto LAB32;

LAB38:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(41, ng0);

LAB43:    xsi_set_current_line(42, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    xsi_vlogtype_concat(t30, 16, 16, 1U, t31, 16);
    t42 = ((char*)((ng4)));
    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 15);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    xsi_vlog_mul_concat(t41, 16, 1, t42, 1U, t45, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t41, 16, t30, 16);
    t53 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t53, t29, 0, 0, 32, 0LL);
    goto LAB42;

LAB48:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(49, ng0);

LAB53:    xsi_set_current_line(50, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    xsi_vlogtype_concat(t30, 8, 8, 1U, t31, 8);
    t42 = ((char*)((ng8)));
    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 7);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 7);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    xsi_vlog_mul_concat(t41, 24, 1, t42, 1U, t45, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t41, 24, t30, 8);
    t53 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t53, t29, 0, 0, 32, 0LL);
    goto LAB52;

LAB58:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(57, ng0);

LAB63:    xsi_set_current_line(58, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 8);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 8);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    xsi_vlogtype_concat(t30, 8, 8, 1U, t31, 8);
    t42 = ((char*)((ng8)));
    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 15);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    xsi_vlog_mul_concat(t41, 24, 1, t42, 1U, t45, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t41, 24, t30, 8);
    t53 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t53, t29, 0, 0, 32, 0LL);
    goto LAB62;

LAB66:    xsi_set_current_line(65, ng0);

LAB69:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t30, 0, 8);
    t7 = (t30 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 16);
    *((unsigned int *)t30) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 16);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t19 & 255U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 255U);
    xsi_vlogtype_concat(t29, 8, 8, 1U, t30, 8);
    t23 = ((char*)((ng8)));
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t41, 0, 8);
    t32 = (t41 + 4);
    t34 = (t33 + 4);
    t21 = *((unsigned int *)t33);
    t24 = (t21 >> 23);
    t25 = (t24 & 1);
    *((unsigned int *)t41) = t25;
    t26 = *((unsigned int *)t34);
    t27 = (t26 >> 23);
    t28 = (t27 & 1);
    *((unsigned int *)t32) = t28;
    xsi_vlog_mul_concat(t31, 24, 1, t23, 1U, t41, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t31, 24, t29, 8);
    t42 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t42, t9, 0, 0, 32, 0LL);
    goto LAB68;

LAB72:    xsi_set_current_line(73, ng0);

LAB75:    xsi_set_current_line(74, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t30, 0, 8);
    t7 = (t30 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 24);
    *((unsigned int *)t30) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 24);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t19 & 255U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 255U);
    xsi_vlogtype_concat(t29, 8, 8, 1U, t30, 8);
    t23 = ((char*)((ng8)));
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t41, 0, 8);
    t32 = (t41 + 4);
    t34 = (t33 + 4);
    t21 = *((unsigned int *)t33);
    t24 = (t21 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t41) = t25;
    t26 = *((unsigned int *)t34);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t32) = t28;
    xsi_vlog_mul_concat(t31, 24, 1, t23, 1U, t41, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t31, 24, t29, 8);
    t42 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t42, t9, 0, 0, 32, 0LL);
    goto LAB74;

}


extern void work_m_00000000000344493569_2616621562_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000000344493569_2616621562", "isim/tb_isim_beh.exe.sim/work/m_00000000000344493569_2616621562.didat");
	xsi_register_executes(pe);
}
