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
static const char *ng0 = "C:/ashdaisdh/p8auto/DM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {8192U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {15U, 0U};
static int ng11[] = {0, 0};



static void Cont_38_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t4, 30, 30, 1U, t5, 30);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t4, 30, t2, 2);
    t15 = (t0 + 5640);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 5512);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_39_1(char *t0)
{
    char t4[8];
    char t17[8];
    char t21[8];
    char t29[8];
    char t61[8];
    char t75[8];
    char t91[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
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
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t29, t4, 8);

LAB10:    memset(t61, 0, 8);
    t62 = (t29 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t29);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t62) != 0)
        goto LAB25;

LAB26:    t69 = (t61 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB27;

LAB28:    memcpy(t99, t61, 8);

LAB29:    t131 = (t0 + 5704);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    memset(t135, 0, 8);
    t136 = 1U;
    t137 = t136;
    t138 = (t99 + 4);
    t139 = *((unsigned int *)t99);
    t136 = (t136 & t139);
    t140 = *((unsigned int *)t138);
    t137 = (t137 & t140);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t142 | t136);
    t143 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t143 | t137);
    xsi_driver_vfirst_trans(t131, 0, 0);
    t144 = (t0 + 5528);
    *((int *)t144) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 2808U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB12;

LAB11:    t19 = (t15 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t16) < *((unsigned int *)t15))
        goto LAB13;

LAB14:    memset(t21, 0, 8);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t17);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t22) != 0)
        goto LAB18;

LAB19:    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t21);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t33 = (t4 + 4);
    t34 = (t21 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB10;

LAB12:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB16:    *((unsigned int *)t21) = 1;
    goto LAB19;

LAB18:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB20:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t4 + 4);
    t44 = (t21 + 4);
    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t21);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t55);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t56);
    goto LAB22;

LAB23:    *((unsigned int *)t61) = 1;
    goto LAB26;

LAB25:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB26;

LAB27:    t73 = (t0 + 1528U);
    t74 = *((char **)t73);
    t73 = ((char*)((ng3)));
    memset(t75, 0, 8);
    t76 = (t74 + 4);
    t77 = (t73 + 4);
    t78 = *((unsigned int *)t74);
    t79 = *((unsigned int *)t73);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB31;

LAB30:    if (t87 != 0)
        goto LAB32;

LAB33:    memset(t91, 0, 8);
    t92 = (t75 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t75);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t92) != 0)
        goto LAB36;

LAB37:    t100 = *((unsigned int *)t61);
    t101 = *((unsigned int *)t91);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t103 = (t61 + 4);
    t104 = (t91 + 4);
    t105 = (t99 + 4);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB31:    *((unsigned int *)t75) = 1;
    goto LAB33;

LAB32:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t91) = 1;
    goto LAB37;

LAB36:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB37;

LAB38:    t111 = *((unsigned int *)t99);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t99) = (t111 | t112);
    t113 = (t61 + 4);
    t114 = (t91 + 4);
    t115 = *((unsigned int *)t61);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (~(t117));
    t119 = *((unsigned int *)t91);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (~(t121));
    t123 = (t116 & t118);
    t124 = (t120 & t122);
    t125 = (~(t123));
    t126 = (~(t124));
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t128 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t128 & t126);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    t130 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t130 & t126);
    goto LAB40;

}

static void Cont_40_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 5544);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_49_3(char *t0)
{
    char t14[8];
    char t15[8];
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
    int t13;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(79, ng0);

LAB36:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(74, ng0);

LAB35:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB27:    goto LAB8;

LAB11:    xsi_set_current_line(53, ng0);

LAB28:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 2U, t12, 16, t15, 16);
    t17 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 32, 0LL);
    goto LAB27;

LAB13:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 65535U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t15, 16, t4, 16);
    t17 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 32, 0LL);
    goto LAB27;

LAB15:    xsi_set_current_line(59, ng0);

LAB30:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 2U, t12, 24, t15, 8);
    t17 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 32, 0LL);
    goto LAB27;

LAB17:    xsi_set_current_line(62, ng0);

LAB31:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 3U, t17, 16, t15, 8, t4, 8);
    t18 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, 0, 32, 0LL);
    goto LAB27;

LAB19:    xsi_set_current_line(65, ng0);

LAB32:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 3U, t17, 8, t15, 8, t4, 16);
    t18 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, 0, 32, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(68, ng0);

LAB33:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t15, 8, t4, 24);
    t17 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 32, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(71, ng0);

LAB34:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB27;

}


extern void work_m_00000000002824976090_2924402094_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Cont_39_1,(void *)Cont_40_2,(void *)Always_49_3};
	xsi_register_didat("work_m_00000000002824976090_2924402094", "isim/mips_test_isim_beh.exe.sim/work/m_00000000002824976090_2924402094.didat");
	xsi_register_executes(pe);
}
