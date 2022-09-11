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
static const char *ng0 = "C:/ashdaisdh/p4-CPU/IM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1023, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static const char *ng5 = "code.txt";
static unsigned int ng6[] = {12288U, 0U};
static int ng7[] = {4, 0};



static void Cont_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5920);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5936);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_41_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5952);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_42_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2888);
    xsi_vlogfile_readmemh(ng5, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 2888);
    t6 = (t4 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2888);
    t16 = (t13 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 3048);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t14, 0, 8);
    t21 = (t14 + 4);
    t22 = (t20 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (t7 >> 2);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t22);
    t10 = (t9 >> 2);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t11 & 1023U);
    t26 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t26 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t3, t12, t17, 2, 1, t14, 10, 2);
    t23 = (t0 + 3208);
    xsi_vlogvar_assign_value(t23, t5, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB6:    xsi_set_current_line(45, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2888);
    t16 = (t0 + 2888);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3688);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_54_4(char *t0)
{
    char t13[8];
    char t17[8];
    char t24[8];
    char t66[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5968);
    *((int *)t2) = 1;
    t3 = (t0 + 5632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB10:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB15;

LAB16:    memcpy(t24, t13, 8);

LAB17:    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB33;

LAB34:    memcpy(t24, t13, 8);

LAB35:    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(69, ng0);

LAB51:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);

LAB49:
LAB45:
LAB27:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t23 = (t0 + 2888);
    t28 = (t23 + 64U);
    t29 = *((char **)t28);
    t30 = (t0 + 3048);
    t38 = (t30 + 56U);
    t39 = *((char **)t38);
    memset(t17, 0, 8);
    t56 = (t17 + 4);
    t62 = (t39 + 4);
    t6 = *((unsigned int *)t39);
    t7 = (t6 >> 2);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t62);
    t9 = (t8 >> 2);
    *((unsigned int *)t56) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 1023U);
    t14 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t14 & 1023U);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t29, 2, 1, t17, 10, 2);
    t63 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t63, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB21:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t13 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t17) = 1;
    goto LAB21;

LAB20:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB22:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t13 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);

LAB28:    xsi_set_current_line(60, ng0);
    t62 = (t0 + 3048);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng7)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 32, t64, 32, t65, 32);
    t67 = (t0 + 2008U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    xsi_vlog_unsigned_add(t69, 32, t66, 32, t68, 32);
    t67 = (t0 + 3048);
    xsi_vlogvar_assign_value(t67, t69, 0, 0, 32);
    goto LAB27;

LAB29:    *((unsigned int *)t13) = 1;
    goto LAB32;

LAB31:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB33:    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t11) != 0)
        goto LAB38;

LAB39:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t13 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB38:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB40:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t13 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB42;

LAB43:    xsi_set_current_line(62, ng0);

LAB46:    xsi_set_current_line(63, ng0);
    t62 = (t0 + 2008U);
    t63 = *((char **)t62);
    t62 = (t0 + 3048);
    xsi_vlogvar_assign_value(t62, t63, 0, 0, 32);
    goto LAB45;

LAB47:    xsi_set_current_line(65, ng0);

LAB50:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2008U);
    t11 = *((char **)t5);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t12 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t17) = t15;
    t16 = *((unsigned int *)t12);
    t18 = (t16 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 & 67108863U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 67108863U);
    t23 = (t0 + 3048);
    t28 = (t23 + 56U);
    t29 = *((char **)t28);
    memset(t24, 0, 8);
    t30 = (t24 + 4);
    t38 = (t29 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (t21 >> 28);
    *((unsigned int *)t24) = t22;
    t25 = *((unsigned int *)t38);
    t26 = (t25 >> 28);
    *((unsigned int *)t30) = t26;
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t27 & 15U);
    t31 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t31 & 15U);
    xsi_vlogtype_concat(t13, 32, 32, 3U, t24, 4, t17, 26, t4, 2);
    t39 = (t0 + 3048);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 32);
    goto LAB49;

}


extern void work_m_00000000001023724936_0467708899_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Initial_42_3,(void *)Always_54_4};
	xsi_register_didat("work_m_00000000001023724936_0467708899", "isim/tb_isim_beh.exe.sim/work/m_00000000001023724936_0467708899.didat");
	xsi_register_executes(pe);
}
