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
static const char *ng0 = "C:/ashdaisdh/p7Dold/mude.v";
static int ng1[] = {0, 0};
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {6, 0};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {32, 0};
static int ng8[] = {2, 0};
static int ng9[] = {63, 0};
static int ng10[] = {31, 0};
static int ng11[] = {3, 0};
static int ng12[] = {4, 0};
static int ng13[] = {5, 0};
static int ng14[] = {8, 0};
static int ng15[] = {9, 0};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Cont_45_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t79 = (t0 + 5040);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memcpy(t83, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t84 = (t0 + 4944);
    *((int *)t84) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 2728);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t78 = ((char*)((ng5)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

}

static void Always_46_2(char *t0)
{
    char t13[8];
    char t31[16];
    char t32[8];
    char t33[8];
    char t35[16];
    char t36[8];
    char t38[8];
    char t41[8];
    char t43[16];
    char t45[8];
    char t46[8];
    char t47[8];
    char t48[8];
    char t49[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t37;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    char *t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4960);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
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

LAB7:    xsi_set_current_line(55, ng0);

LAB10:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB73;

LAB70:    if (t18 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t37 = (t13 + 4);
    t21 = *((unsigned int *)t37);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(141, ng0);

LAB137:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB141;

LAB138:    if (t18 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t13) = 1;

LAB141:    t26 = (t13 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB149;

LAB146:    if (t18 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t13) = 1;

LAB149:    t26 = (t13 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(148, ng0);

LAB154:
LAB152:
LAB144:
LAB76:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(56, ng0);

LAB18:    xsi_set_current_line(57, ng0);
    t26 = ((char*)((ng6)));
    t27 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB19:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(87, ng0);

LAB69:
LAB30:    goto LAB17;

LAB20:    xsi_set_current_line(61, ng0);

LAB31:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t13, 32, 32, 1U, t5, 32);
    t4 = ((char*)((ng7)));
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t33, 0, 8);
    t11 = (t33 + 4);
    t26 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t33) = t8;
    t9 = *((unsigned int *)t26);
    t10 = (t9 >> 31);
    t14 = (t10 & 1);
    *((unsigned int *)t11) = t14;
    xsi_vlog_mul_concat(t32, 32, 1, t4, 1U, t33, 1);
    xsi_vlogtype_concat(t31, 64, 64, 2U, t32, 32, t13, 32);
    t27 = (t0 + 1528U);
    t37 = *((char **)t27);
    xsi_vlogtype_concat(t36, 32, 32, 1U, t37, 32);
    t27 = ((char*)((ng7)));
    t39 = (t0 + 1528U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t15 = *((unsigned int *)t40);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t41) = t17;
    t18 = *((unsigned int *)t42);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t39) = t20;
    xsi_vlog_mul_concat(t38, 32, 1, t27, 1U, t41, 1);
    xsi_vlogtype_concat(t35, 64, 64, 2U, t38, 32, t36, 32);
    xsi_vlog_signed_multiply(t43, 64, t31, 64, t35, 64);
    t44 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 64, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(64, ng0);

LAB32:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t13, 32, 32, 1U, t5, 32);
    t4 = ((char*)((ng5)));
    xsi_vlogtype_concat(t31, 64, 64, 2U, t4, 32, t13, 32);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t32, 32, 32, 1U, t12, 32);
    t11 = ((char*)((ng5)));
    xsi_vlogtype_concat(t35, 64, 64, 2U, t11, 32, t32, 32);
    xsi_vlog_unsigned_multiply(t43, 64, t31, 64, t35, 64);
    t26 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t26, t43, 0, 0, 64, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(67, ng0);

LAB33:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB35;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB37:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(72, ng0);

LAB46:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t26 = (t12 + 72U);
    t27 = *((char **)t26);
    t37 = ((char*)((ng9)));
    t39 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t32, t33, ((int*)(t27)), 2, t37, 32, 1, t39, 32, 1);
    t40 = (t13 + 4);
    t6 = *((unsigned int *)t40);
    t28 = (!(t6));
    t42 = (t32 + 4);
    t7 = *((unsigned int *)t42);
    t57 = (!(t7));
    t60 = (t28 && t57);
    t44 = (t33 + 4);
    t8 = *((unsigned int *)t44);
    t61 = (!(t8));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t26 = (t12 + 72U);
    t27 = *((char **)t26);
    t37 = ((char*)((ng10)));
    t39 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t13, t32, t33, ((int*)(t27)), 2, t37, 32, 1, t39, 32, 1);
    t40 = (t13 + 4);
    t6 = *((unsigned int *)t40);
    t28 = (!(t6));
    t42 = (t32 + 4);
    t7 = *((unsigned int *)t42);
    t57 = (!(t7));
    t60 = (t28 && t57);
    t44 = (t33 + 4);
    t8 = *((unsigned int *)t44);
    t61 = (!(t8));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB49;

LAB50:
LAB40:    goto LAB30;

LAB26:    xsi_set_current_line(77, ng0);

LAB51:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB53;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB55:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(82, ng0);

LAB64:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t26 = (t12 + 72U);
    t27 = *((char **)t26);
    t37 = ((char*)((ng9)));
    t39 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t32, t33, ((int*)(t27)), 2, t37, 32, 1, t39, 32, 1);
    t40 = (t13 + 4);
    t6 = *((unsigned int *)t40);
    t28 = (!(t6));
    t42 = (t32 + 4);
    t7 = *((unsigned int *)t42);
    t57 = (!(t7));
    t60 = (t28 && t57);
    t44 = (t33 + 4);
    t8 = *((unsigned int *)t44);
    t61 = (!(t8));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t26 = (t12 + 72U);
    t27 = *((char **)t26);
    t37 = ((char*)((ng10)));
    t39 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t13, t32, t33, ((int*)(t27)), 2, t37, 32, 1, t39, 32, 1);
    t40 = (t13 + 4);
    t6 = *((unsigned int *)t40);
    t28 = (!(t6));
    t42 = (t32 + 4);
    t7 = *((unsigned int *)t42);
    t57 = (!(t7));
    t60 = (t28 && t57);
    t44 = (t33 + 4);
    t8 = *((unsigned int *)t44);
    t61 = (!(t8));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB67;

LAB68:
LAB58:    goto LAB30;

LAB35:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB36:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(68, ng0);

LAB41:    xsi_set_current_line(69, ng0);
    t37 = (t0 + 1368U);
    t39 = *((char **)t37);
    t37 = (t0 + 1368U);
    t40 = *((char **)t37);
    t37 = (t0 + 1528U);
    t42 = *((char **)t37);
    memset(t38, 0, 8);
    xsi_vlog_signed_divide(t38, 32, t40, 32, t42, 32);
    t37 = (t0 + 1528U);
    t44 = *((char **)t37);
    memset(t45, 0, 8);
    xsi_vlog_signed_multiply(t45, 32, t38, 32, t44, 32);
    memset(t46, 0, 8);
    xsi_vlog_signed_minus(t46, 32, t39, 32, t45, 32);
    t37 = (t0 + 2888);
    t50 = (t0 + 2888);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng9)));
    t54 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t47, t48, t49, ((int*)(t52)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t47 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t48 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    t62 = (t49 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    if (t65 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t36, 0, 8);
    xsi_vlog_signed_divide(t36, 32, t4, 32, t5, 32);
    t2 = (t0 + 2888);
    t11 = (t0 + 2888);
    t12 = (t11 + 72U);
    t26 = *((char **)t12);
    t27 = ((char*)((ng10)));
    t37 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t38, t41, t45, ((int*)(t26)), 2, t27, 32, 1, t37, 32, 1);
    t39 = (t38 + 4);
    t6 = *((unsigned int *)t39);
    t28 = (!(t6));
    t40 = (t41 + 4);
    t7 = *((unsigned int *)t40);
    t57 = (!(t7));
    t60 = (t28 && t57);
    t42 = (t45 + 4);
    t8 = *((unsigned int *)t42);
    t61 = (!(t8));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB44;

LAB45:    goto LAB40;

LAB42:    t66 = *((unsigned int *)t49);
    t67 = (t66 + 0);
    t68 = *((unsigned int *)t47);
    t69 = *((unsigned int *)t48);
    t70 = (t68 - t69);
    t71 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t37, t46, t67, *((unsigned int *)t48), t71, 0LL);
    goto LAB43;

LAB44:    t9 = *((unsigned int *)t45);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t38);
    t14 = *((unsigned int *)t41);
    t67 = (t10 - t14);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t2, t36, t65, *((unsigned int *)t41), t70, 0LL);
    goto LAB45;

LAB47:    t9 = *((unsigned int *)t33);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t32);
    t67 = (t10 - t14);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t11, t5, t65, *((unsigned int *)t32), t70, 0LL);
    goto LAB48;

LAB49:    t9 = *((unsigned int *)t33);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t32);
    t67 = (t10 - t14);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t11, t5, t65, *((unsigned int *)t32), t70, 0LL);
    goto LAB50;

LAB53:    *((unsigned int *)t13) = 1;
    goto LAB55;

LAB54:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(78, ng0);

LAB59:    xsi_set_current_line(79, ng0);
    t37 = (t0 + 1368U);
    t39 = *((char **)t37);
    t37 = (t0 + 1528U);
    t40 = *((char **)t37);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_mod(t38, 32, t39, 32, t40, 32);
    t37 = (t0 + 2888);
    t42 = (t0 + 2888);
    t44 = (t42 + 72U);
    t50 = *((char **)t44);
    t51 = ((char*)((ng9)));
    t52 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t41, t45, t46, ((int*)(t50)), 2, t51, 32, 1, t52, 32, 1);
    t53 = (t41 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (!(t56));
    t54 = (t45 + 4);
    t59 = *((unsigned int *)t54);
    t60 = (!(t59));
    t61 = (t57 && t60);
    t55 = (t46 + 4);
    t63 = *((unsigned int *)t55);
    t64 = (!(t63));
    t65 = (t61 && t64);
    if (t65 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_divide(t36, 32, t4, 32, t5, 32);
    t2 = (t0 + 2888);
    t11 = (t0 + 2888);
    t12 = (t11 + 72U);
    t26 = *((char **)t12);
    t27 = ((char*)((ng10)));
    t37 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t38, t41, t45, ((int*)(t26)), 2, t27, 32, 1, t37, 32, 1);
    t39 = (t38 + 4);
    t6 = *((unsigned int *)t39);
    t28 = (!(t6));
    t40 = (t41 + 4);
    t7 = *((unsigned int *)t40);
    t57 = (!(t7));
    t60 = (t28 && t57);
    t42 = (t45 + 4);
    t8 = *((unsigned int *)t42);
    t61 = (!(t8));
    t64 = (t60 && t61);
    if (t64 == 1)
        goto LAB62;

LAB63:    goto LAB58;

LAB60:    t66 = *((unsigned int *)t46);
    t67 = (t66 + 0);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t45);
    t70 = (t68 - t69);
    t71 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t37, t38, t67, *((unsigned int *)t45), t71, 0LL);
    goto LAB61;

LAB62:    t9 = *((unsigned int *)t45);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t38);
    t14 = *((unsigned int *)t41);
    t67 = (t10 - t14);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t2, t36, t65, *((unsigned int *)t41), t70, 0LL);
    goto LAB63;

LAB65:    t9 = *((unsigned int *)t33);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t32);
    t67 = (t10 - t14);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t11, t5, t65, *((unsigned int *)t32), t70, 0LL);
    goto LAB66;

LAB67:    t9 = *((unsigned int *)t33);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t32);
    t67 = (t10 - t14);
    t70 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t11, t5, t65, *((unsigned int *)t32), t70, 0LL);
    goto LAB68;

LAB72:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(92, ng0);

LAB77:    xsi_set_current_line(93, ng0);
    t39 = (t0 + 3048);
    t40 = (t39 + 56U);
    t42 = *((char **)t40);

LAB78:    t44 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t44, 32);
    if (t28 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t42, 4, t2, 32);
    if (t28 == 1)
        goto LAB97;

LAB98:
LAB99:    goto LAB76;

LAB79:    xsi_set_current_line(94, ng0);

LAB100:    xsi_set_current_line(95, ng0);
    t50 = (t0 + 3048);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng6)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t52, 4, t53, 32);
    t54 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t54, t32, 0, 0, 4, 0LL);
    goto LAB99;

LAB81:    xsi_set_current_line(97, ng0);

LAB101:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB83:    xsi_set_current_line(100, ng0);

LAB102:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB85:    xsi_set_current_line(103, ng0);

LAB103:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB87:    xsi_set_current_line(106, ng0);

LAB104:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t26 = (t11 + 4);
    t27 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t26);
    t10 = *((unsigned int *)t27);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB108;

LAB105:    if (t18 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t13) = 1;

LAB108:    memset(t32, 0, 8);
    t39 = (t13 + 4);
    t21 = *((unsigned int *)t39);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t39) != 0)
        goto LAB111;

LAB112:    t44 = (t32 + 4);
    t56 = *((unsigned int *)t32);
    t59 = (!(t56));
    t63 = *((unsigned int *)t44);
    t66 = (t59 || t63);
    if (t66 > 0)
        goto LAB113;

LAB114:    memcpy(t38, t32, 8);

LAB115:    t113 = (t38 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t38);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(115, ng0);

LAB131:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 4, t11, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);

LAB129:    goto LAB99;

LAB89:    xsi_set_current_line(119, ng0);

LAB132:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB91:    xsi_set_current_line(122, ng0);

LAB133:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB93:    xsi_set_current_line(125, ng0);

LAB134:    xsi_set_current_line(126, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB95:    xsi_set_current_line(128, ng0);

LAB135:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t26 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 4, 0LL);
    goto LAB99;

LAB97:    xsi_set_current_line(131, ng0);

LAB136:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t13 + 4);
    t26 = (t11 + 8);
    t27 = (t11 + 12);
    t6 = *((unsigned int *)t26);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t27);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 4294967295U);
    t37 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t37, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 4294967295U);
    t26 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB99;

LAB107:    t37 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB108;

LAB109:    *((unsigned int *)t32) = 1;
    goto LAB112;

LAB111:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB112;

LAB113:    t50 = (t0 + 3208);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng6)));
    memset(t33, 0, 8);
    t54 = (t52 + 4);
    t55 = (t53 + 4);
    t68 = *((unsigned int *)t52);
    t69 = *((unsigned int *)t53);
    t72 = (t68 ^ t69);
    t73 = *((unsigned int *)t54);
    t74 = *((unsigned int *)t55);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t55);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB119;

LAB116:    if (t79 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t33) = 1;

LAB119:    memset(t36, 0, 8);
    t62 = (t33 + 4);
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t84 = *((unsigned int *)t33);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t62) != 0)
        goto LAB122;

LAB123:    t88 = *((unsigned int *)t32);
    t89 = *((unsigned int *)t36);
    t90 = (t88 | t89);
    *((unsigned int *)t38) = t90;
    t91 = (t32 + 4);
    t92 = (t36 + 4);
    t93 = (t38 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB124;

LAB125:
LAB126:    goto LAB115;

LAB118:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB119;

LAB120:    *((unsigned int *)t36) = 1;
    goto LAB123;

LAB122:    t87 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB123;

LAB124:    t99 = *((unsigned int *)t38);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t38) = (t99 | t100);
    t101 = (t32 + 4);
    t102 = (t36 + 4);
    t103 = *((unsigned int *)t101);
    t104 = (~(t103));
    t105 = *((unsigned int *)t32);
    t57 = (t105 & t104);
    t106 = *((unsigned int *)t102);
    t107 = (~(t106));
    t108 = *((unsigned int *)t36);
    t60 = (t108 & t107);
    t109 = (~(t57));
    t110 = (~(t60));
    t111 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t111 & t109);
    t112 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t112 & t110);
    goto LAB126;

LAB127:    xsi_set_current_line(107, ng0);

LAB130:    xsi_set_current_line(108, ng0);
    t119 = (t0 + 2888);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    memset(t41, 0, 8);
    t122 = (t41 + 4);
    t123 = (t121 + 8);
    t124 = (t121 + 12);
    t125 = *((unsigned int *)t123);
    t126 = (t125 >> 0);
    *((unsigned int *)t41) = t126;
    t127 = *((unsigned int *)t124);
    t128 = (t127 >> 0);
    *((unsigned int *)t122) = t128;
    t129 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t129 & 4294967295U);
    t130 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t130 & 4294967295U);
    t131 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t131, t41, 0, 0, 32, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 4294967295U);
    t26 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB129;

LAB140:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(142, ng0);

LAB145:    xsi_set_current_line(143, ng0);
    t27 = (t0 + 1368U);
    t37 = *((char **)t27);
    t27 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t27, t37, 0, 0, 32, 0LL);
    goto LAB144;

LAB148:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(145, ng0);

LAB153:    xsi_set_current_line(146, ng0);
    t27 = (t0 + 1368U);
    t37 = *((char **)t27);
    t27 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t27, t37, 0, 0, 32, 0LL);
    goto LAB152;

}


extern void work_m_00000000000924106195_0677194054_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Cont_45_1,(void *)Always_46_2};
	xsi_register_didat("work_m_00000000000924106195_0677194054", "isim/mips_isim_beh.exe.sim/work/m_00000000000924106195_0677194054.didat");
	xsi_register_executes(pe);
}
