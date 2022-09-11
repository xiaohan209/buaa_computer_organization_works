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
static const char *ng0 = "C:/ashdaisdh/p8/uart.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static int ng6[] = {100000, 0};
static int ng7[] = {9600, 0};
static int ng8[] = {8, 0};
static int ng9[] = {1, 0};



static void Initial_46_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Cont_61_1(char *t0)
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

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 8920);
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
    t16 = (t0 + 8744);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_62_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t71[8];
    char t78[8];
    char t79[8];
    char t82[8];
    char t109[8];
    char t118[8];
    char t119[8];
    char t122[8];
    char t149[8];
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
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB20:    t159 = (t0 + 8984);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    memcpy(t163, t3, 8);
    xsi_driver_vfirst_trans(t159, 0, 31);
    t164 = (t0 + 8760);
    *((int *)t164) = 1;

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

LAB12:    t34 = (t0 + 2808U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng2)));
    xsi_vlogtype_concat(t33, 32, 32, 2U, t34, 24, t35, 8);
    goto LAB13;

LAB14:    t42 = (t0 + 1688U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng3)));
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

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
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

LAB29:    t72 = (t0 + 2968U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng2)));
    xsi_vlogtype_concat(t71, 32, 32, 2U, t72, 26, t73, 6);
    goto LAB30;

LAB31:    t80 = (t0 + 1688U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng4)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t80);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t79, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t114 = *((unsigned int *)t79);
    t115 = (~(t114));
    t116 = *((unsigned int *)t105);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t118, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t71, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t71, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t104 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t110 = (t0 + 5128);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    t113 = ((char*)((ng2)));
    xsi_vlogtype_concat(t109, 32, 32, 2U, t113, 16, t112, 16);
    goto LAB47;

LAB48:    t120 = (t0 + 1688U);
    t121 = *((char **)t120);
    t120 = ((char*)((ng5)));
    memset(t122, 0, 8);
    t123 = (t121 + 4);
    t124 = (t120 + 4);
    t125 = *((unsigned int *)t121);
    t126 = *((unsigned int *)t120);
    t127 = (t125 ^ t126);
    t128 = *((unsigned int *)t123);
    t129 = *((unsigned int *)t124);
    t130 = (t128 ^ t129);
    t131 = (t127 | t130);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t124);
    t134 = (t132 | t133);
    t135 = (~(t134));
    t136 = (t131 & t135);
    if (t136 != 0)
        goto LAB58;

LAB55:    if (t134 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t122) = 1;

LAB58:    memset(t119, 0, 8);
    t138 = (t122 + 4);
    t139 = *((unsigned int *)t138);
    t140 = (~(t139));
    t141 = *((unsigned int *)t122);
    t142 = (t141 & t140);
    t143 = (t142 & 1U);
    if (t143 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t138) != 0)
        goto LAB61;

LAB62:    t145 = (t119 + 4);
    t146 = *((unsigned int *)t119);
    t147 = *((unsigned int *)t145);
    t148 = (t146 || t147);
    if (t148 > 0)
        goto LAB63;

LAB64:    t154 = *((unsigned int *)t119);
    t155 = (~(t154));
    t156 = *((unsigned int *)t145);
    t157 = (t155 || t156);
    if (t157 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t145) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t119) > 0)
        goto LAB69;

LAB70:    memcpy(t118, t158, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 32, t109, 32, t118, 32);
    goto LAB54;

LAB52:    memcpy(t78, t109, 8);
    goto LAB54;

LAB57:    t137 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t119) = 1;
    goto LAB62;

LAB61:    t144 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB62;

LAB63:    t150 = (t0 + 5288);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    t153 = ((char*)((ng2)));
    xsi_vlogtype_concat(t149, 32, 32, 2U, t153, 16, t152, 16);
    goto LAB64;

LAB65:    t158 = ((char*)((ng2)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t118, 32, t149, 32, t158, 32);
    goto LAB71;

LAB69:    memcpy(t118, t149, 8);
    goto LAB71;

}

static void Always_69_3(char *t0)
{
    char t13[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8776);
    *((int *)t2) = 1;
    t3 = (t0 + 7464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t16 = (t9 | t10);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB10;

LAB11:
LAB12:    t38 = (t13 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t13);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);

LAB9:    xsi_set_current_line(71, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t3, 32, t4, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_divide(t14, 32, t2, 32, t13, 32);
    t5 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t14, 32, t5, 32);
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 16, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_divide(t13, 32, t2, 32, t3, 32);
    t4 = ((char*)((ng9)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t13, 32, t4, 32);
    t5 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 16, 0LL);
    goto LAB8;

LAB10:    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t19 | t20);
    t12 = (t3 + 4);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t32);
    t37 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t37 & t33);
    goto LAB12;

LAB13:    xsi_set_current_line(76, ng0);

LAB16:    xsi_set_current_line(77, ng0);
    t44 = (t0 + 1688U);
    t45 = *((char **)t44);

LAB17:    t44 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t45, 3, t44, 32);
    if (t46 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t45, 3, t2, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t45, 3, t2, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB15;

LAB18:    xsi_set_current_line(78, ng0);
    t47 = (t0 + 1208U);
    t48 = *((char **)t47);
    memset(t14, 0, 8);
    t47 = (t14 + 4);
    t49 = (t48 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 0);
    *((unsigned int *)t14) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t47) = t53;
    t54 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t54 & 255U);
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 255U);
    t56 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t56, t14, 0, 0, 8, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    goto LAB24;

}

static void Cont_85_4(char *t0)
{
    char t4[8];
    char t17[8];
    char t24[8];
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
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 7680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1848U);
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

LAB9:    memcpy(t24, t4, 8);

LAB10:    t56 = (t0 + 9048);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 8792);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 2008U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB14:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t4);
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
    goto LAB17;

}

static void Cont_88_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 7928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3768U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3928U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 6, 6, 3U, t6, 1, t2, 4, t4, 1);
    t5 = (t0 + 9112);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 63U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t19 = (t0 + 8808);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Cont_89_6(char *t0)
{
    char t4[8];
    char t20[8];
    char t32[8];
    char t51[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;

LAB0:    t1 = (t0 + 8176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB12;

LAB13:    memcpy(t59, t20, 8);

LAB14:    t91 = (t0 + 9176);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memset(t95, 0, 8);
    t96 = 1U;
    t97 = t96;
    t98 = (t59 + 4);
    t99 = *((unsigned int *)t59);
    t96 = (t96 & t99);
    t100 = *((unsigned int *)t98);
    t97 = (t97 & t100);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t102 | t96);
    t103 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t103 | t97);
    xsi_driver_vfirst_trans(t91, 0, 0);
    t104 = (t0 + 8824);
    *((int *)t104) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2008U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t34 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (~(t35));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t33) == 0)
        goto LAB15;

LAB17:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;

LAB18:    t41 = (t32 + 4);
    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (~(t43));
    *((unsigned int *)t32) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB20;

LAB19:    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    memset(t51, 0, 8);
    t52 = (t32 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t52) != 0)
        goto LAB23;

LAB24:    t60 = *((unsigned int *)t20);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t20 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB14;

LAB15:    *((unsigned int *)t32) = 1;
    goto LAB18;

LAB20:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t32) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB19;

LAB21:    *((unsigned int *)t51) = 1;
    goto LAB24;

LAB23:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB24;

LAB25:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t20 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t20);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB27;

}

static void Always_94_7(char *t0)
{
    char t13[8];
    char t15[8];
    char t48[8];
    char t81[8];
    char t97[8];
    char t130[8];
    char t132[8];
    char t136[8];
    char t139[8];
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
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t131;
    char *t133;
    char *t134;
    char *t135;
    char *t137;
    char *t138;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;

LAB0:    t1 = (t0 + 8424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8840);
    *((int *)t2) = 1;
    t3 = (t0 + 8456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(102, ng0);

LAB10:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t0 + 1848U);
    t14 = *((char **)t12);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t12 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB15;

LAB16:
LAB17:    t46 = (t0 + 2008U);
    t47 = *((char **)t46);
    t49 = *((unsigned int *)t15);
    t50 = *((unsigned int *)t47);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t46 = (t15 + 4);
    t52 = (t47 + 4);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t46);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB18;

LAB19:
LAB20:    t79 = (t0 + 1688U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng2)));
    memset(t81, 0, 8);
    t82 = (t80 + 4);
    t83 = (t79 + 4);
    t84 = *((unsigned int *)t80);
    t85 = *((unsigned int *)t79);
    t86 = (t84 ^ t85);
    t87 = *((unsigned int *)t82);
    t88 = *((unsigned int *)t83);
    t89 = (t87 ^ t88);
    t90 = (t86 | t89);
    t91 = *((unsigned int *)t82);
    t92 = *((unsigned int *)t83);
    t93 = (t91 | t92);
    t94 = (~(t93));
    t95 = (t90 & t94);
    if (t95 != 0)
        goto LAB24;

LAB21:    if (t93 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t81) = 1;

LAB24:    t98 = *((unsigned int *)t48);
    t99 = *((unsigned int *)t81);
    t100 = (t98 & t99);
    *((unsigned int *)t97) = t100;
    t101 = (t48 + 4);
    t102 = (t81 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB25;

LAB26:
LAB27:    t129 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t129, t97, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t2) != 0)
        goto LAB30;

LAB31:    t5 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB32;

LAB33:    memcpy(t81, t13, 8);

LAB34:    t80 = (t81 + 4);
    t75 = *((unsigned int *)t80);
    t76 = (~(t75));
    t77 = *((unsigned int *)t81);
    t78 = (t77 & t76);
    t84 = (t78 != 0);
    if (t84 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t18 | t21);
    t23 = (~(t22));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB53;

LAB50:    if (t22 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t13) = 1;

LAB53:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t30 = (t27 & t26);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t18 | t21);
    t23 = (~(t22));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB61;

LAB58:    if (t22 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t13) = 1;

LAB61:    memset(t15, 0, 8);
    t19 = (t13 + 4);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t30 = (t27 & t26);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t19) != 0)
        goto LAB64;

LAB65:    t28 = (t15 + 4);
    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t28);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB66;

LAB67:    memcpy(t97, t15, 8);

LAB68:    memset(t130, 0, 8);
    t101 = (t97 + 4);
    t92 = *((unsigned int *)t101);
    t93 = (~(t92));
    t94 = *((unsigned int *)t97);
    t95 = (t94 & t93);
    t98 = (t95 & 1U);
    if (t98 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t101) != 0)
        goto LAB82;

LAB83:    t103 = (t130 + 4);
    t99 = *((unsigned int *)t130);
    t100 = *((unsigned int *)t103);
    t104 = (t99 || t100);
    if (t104 > 0)
        goto LAB84;

LAB85:    memcpy(t139, t130, 8);

LAB86:    t166 = (t139 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t139);
    t170 = (t169 & t168);
    t171 = (t170 != 0);
    if (t171 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t2) != 0)
        goto LAB104;

LAB105:    t5 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB106;

LAB107:    memcpy(t81, t13, 8);

LAB108:    t80 = (t81 + 4);
    t75 = *((unsigned int *)t80);
    t76 = (~(t75));
    t77 = *((unsigned int *)t81);
    t78 = (t77 & t76);
    t84 = (t78 != 0);
    if (t84 > 0)
        goto LAB120;

LAB121:
LAB122:
LAB100:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(95, ng0);

LAB9:    xsi_set_current_line(96, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t26 | t27);
    t28 = (t13 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t40);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    goto LAB17;

LAB18:    t59 = *((unsigned int *)t48);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t48) = (t59 | t60);
    t61 = (t15 + 4);
    t62 = (t47 + 4);
    t63 = *((unsigned int *)t15);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t77 & t73);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    goto LAB20;

LAB23:    t96 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB24;

LAB25:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t48 + 4);
    t112 = (t81 + 4);
    t113 = *((unsigned int *)t48);
    t114 = (~(t113));
    t115 = *((unsigned int *)t111);
    t116 = (~(t115));
    t117 = *((unsigned int *)t81);
    t118 = (~(t117));
    t119 = *((unsigned int *)t112);
    t120 = (~(t119));
    t121 = (t114 & t116);
    t122 = (t118 & t120);
    t123 = (~(t121));
    t124 = (~(t122));
    t125 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t125 & t123);
    t126 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t126 & t124);
    t127 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t127 & t123);
    t128 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t128 & t124);
    goto LAB27;

LAB28:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB30:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t11 = (t0 + 5768);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t19 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t20 = (t14 + 4);
    t28 = (t19 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t19);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t28);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t27 & t33);
    if (t34 != 0)
        goto LAB38;

LAB35:    if (t32 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t15) = 1;

LAB38:    memset(t48, 0, 8);
    t46 = (t15 + 4);
    t35 = *((unsigned int *)t46);
    t36 = (~(t35));
    t37 = *((unsigned int *)t15);
    t40 = (t37 & t36);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t46) != 0)
        goto LAB41;

LAB42:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t48);
    t44 = (t42 & t43);
    *((unsigned int *)t81) = t44;
    t52 = (t13 + 4);
    t53 = (t48 + 4);
    t61 = (t81 + 4);
    t45 = *((unsigned int *)t52);
    t49 = *((unsigned int *)t53);
    t50 = (t45 | t49);
    *((unsigned int *)t61) = t50;
    t51 = *((unsigned int *)t61);
    t54 = (t51 != 0);
    if (t54 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB37:    t29 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t48) = 1;
    goto LAB42;

LAB41:    t47 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB42;

LAB43:    t55 = *((unsigned int *)t81);
    t56 = *((unsigned int *)t61);
    *((unsigned int *)t81) = (t55 | t56);
    t62 = (t13 + 4);
    t79 = (t48 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t62);
    t60 = (~(t59));
    t63 = *((unsigned int *)t48);
    t64 = (~(t63));
    t65 = *((unsigned int *)t79);
    t66 = (~(t65));
    t38 = (t58 & t60);
    t39 = (t64 & t66);
    t67 = (~(t38));
    t68 = (~(t39));
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & t67);
    t70 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t70 & t68);
    t73 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t73 & t67);
    t74 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t74 & t68);
    goto LAB45;

LAB46:    xsi_set_current_line(104, ng0);

LAB49:    xsi_set_current_line(105, ng0);
    t82 = ((char*)((ng9)));
    t83 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB52:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(108, ng0);

LAB57:    xsi_set_current_line(109, ng0);
    t14 = ((char*)((ng1)));
    t19 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t19, t14, 0, 0, 1, 0LL);
    goto LAB56;

LAB60:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t15) = 1;
    goto LAB65;

LAB64:    t20 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB65;

LAB66:    t29 = (t0 + 2488U);
    t46 = *((char **)t29);
    t29 = ((char*)((ng9)));
    memset(t48, 0, 8);
    t47 = (t46 + 4);
    t52 = (t29 + 4);
    t35 = *((unsigned int *)t46);
    t36 = *((unsigned int *)t29);
    t37 = (t35 ^ t36);
    t40 = *((unsigned int *)t47);
    t41 = *((unsigned int *)t52);
    t42 = (t40 ^ t41);
    t43 = (t37 | t42);
    t44 = *((unsigned int *)t47);
    t45 = *((unsigned int *)t52);
    t49 = (t44 | t45);
    t50 = (~(t49));
    t51 = (t43 & t50);
    if (t51 != 0)
        goto LAB70;

LAB69:    if (t49 != 0)
        goto LAB71;

LAB72:    memset(t81, 0, 8);
    t61 = (t48 + 4);
    t54 = *((unsigned int *)t61);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t61) != 0)
        goto LAB75;

LAB76:    t59 = *((unsigned int *)t15);
    t60 = *((unsigned int *)t81);
    t63 = (t59 & t60);
    *((unsigned int *)t97) = t63;
    t79 = (t15 + 4);
    t80 = (t81 + 4);
    t82 = (t97 + 4);
    t64 = *((unsigned int *)t79);
    t65 = *((unsigned int *)t80);
    t66 = (t64 | t65);
    *((unsigned int *)t82) = t66;
    t67 = *((unsigned int *)t82);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB70:    *((unsigned int *)t48) = 1;
    goto LAB72;

LAB71:    t53 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t81) = 1;
    goto LAB76;

LAB75:    t62 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB76;

LAB77:    t69 = *((unsigned int *)t97);
    t70 = *((unsigned int *)t82);
    *((unsigned int *)t97) = (t69 | t70);
    t83 = (t15 + 4);
    t96 = (t81 + 4);
    t73 = *((unsigned int *)t15);
    t74 = (~(t73));
    t75 = *((unsigned int *)t83);
    t76 = (~(t75));
    t77 = *((unsigned int *)t81);
    t78 = (~(t77));
    t84 = *((unsigned int *)t96);
    t85 = (~(t84));
    t38 = (t74 & t76);
    t39 = (t78 & t85);
    t86 = (~(t38));
    t87 = (~(t39));
    t88 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t88 & t86);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t89 & t87);
    t90 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t90 & t86);
    t91 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t91 & t87);
    goto LAB79;

LAB80:    *((unsigned int *)t130) = 1;
    goto LAB83;

LAB82:    t102 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB83;

LAB84:    t111 = (t0 + 4328);
    t112 = (t111 + 56U);
    t129 = *((char **)t112);
    t131 = ((char*)((ng1)));
    memset(t132, 0, 8);
    t133 = (t129 + 4);
    t134 = (t131 + 4);
    t105 = *((unsigned int *)t129);
    t106 = *((unsigned int *)t131);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t133);
    t109 = *((unsigned int *)t134);
    t110 = (t108 ^ t109);
    t113 = (t107 | t110);
    t114 = *((unsigned int *)t133);
    t115 = *((unsigned int *)t134);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB90;

LAB87:    if (t116 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t132) = 1;

LAB90:    memset(t136, 0, 8);
    t137 = (t132 + 4);
    t119 = *((unsigned int *)t137);
    t120 = (~(t119));
    t123 = *((unsigned int *)t132);
    t124 = (t123 & t120);
    t125 = (t124 & 1U);
    if (t125 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t137) != 0)
        goto LAB93;

LAB94:    t126 = *((unsigned int *)t130);
    t127 = *((unsigned int *)t136);
    t128 = (t126 & t127);
    *((unsigned int *)t139) = t128;
    t140 = (t130 + 4);
    t141 = (t136 + 4);
    t142 = (t139 + 4);
    t143 = *((unsigned int *)t140);
    t144 = *((unsigned int *)t141);
    t145 = (t143 | t144);
    *((unsigned int *)t142) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 != 0);
    if (t147 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB86;

LAB89:    t135 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t136) = 1;
    goto LAB94;

LAB93:    t138 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB94;

LAB95:    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t139) = (t148 | t149);
    t150 = (t130 + 4);
    t151 = (t136 + 4);
    t152 = *((unsigned int *)t130);
    t153 = (~(t152));
    t154 = *((unsigned int *)t150);
    t155 = (~(t154));
    t156 = *((unsigned int *)t136);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (~(t158));
    t71 = (t153 & t155);
    t72 = (t157 & t159);
    t160 = (~(t71));
    t161 = (~(t72));
    t162 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t162 & t160);
    t163 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t163 & t161);
    t164 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t164 & t160);
    t165 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t165 & t161);
    goto LAB97;

LAB98:    xsi_set_current_line(111, ng0);

LAB101:    xsi_set_current_line(112, ng0);
    t172 = ((char*)((ng9)));
    t173 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t173, t172, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB100;

LAB102:    *((unsigned int *)t13) = 1;
    goto LAB105;

LAB104:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB105;

LAB106:    t11 = (t0 + 4328);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t19 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t20 = (t14 + 4);
    t28 = (t19 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t19);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t28);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t27 & t33);
    if (t34 != 0)
        goto LAB112;

LAB109:    if (t32 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t15) = 1;

LAB112:    memset(t48, 0, 8);
    t46 = (t15 + 4);
    t35 = *((unsigned int *)t46);
    t36 = (~(t35));
    t37 = *((unsigned int *)t15);
    t40 = (t37 & t36);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t46) != 0)
        goto LAB115;

LAB116:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t48);
    t44 = (t42 & t43);
    *((unsigned int *)t81) = t44;
    t52 = (t13 + 4);
    t53 = (t48 + 4);
    t61 = (t81 + 4);
    t45 = *((unsigned int *)t52);
    t49 = *((unsigned int *)t53);
    t50 = (t45 | t49);
    *((unsigned int *)t61) = t50;
    t51 = *((unsigned int *)t61);
    t54 = (t51 != 0);
    if (t54 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB108;

LAB111:    t29 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t48) = 1;
    goto LAB116;

LAB115:    t47 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB116;

LAB117:    t55 = *((unsigned int *)t81);
    t56 = *((unsigned int *)t61);
    *((unsigned int *)t81) = (t55 | t56);
    t62 = (t13 + 4);
    t79 = (t48 + 4);
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t62);
    t60 = (~(t59));
    t63 = *((unsigned int *)t48);
    t64 = (~(t63));
    t65 = *((unsigned int *)t79);
    t66 = (~(t65));
    t38 = (t58 & t60);
    t39 = (t64 & t66);
    t67 = (~(t38));
    t68 = (~(t39));
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & t67);
    t70 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t70 & t68);
    t73 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t73 & t67);
    t74 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t74 & t68);
    goto LAB119;

LAB120:    xsi_set_current_line(115, ng0);

LAB123:    xsi_set_current_line(116, ng0);
    t82 = ((char*)((ng1)));
    t83 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 1, 0LL);
    goto LAB122;

}


extern void work_m_00000000004058083503_2962164981_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Cont_61_1,(void *)Cont_62_2,(void *)Always_69_3,(void *)Cont_85_4,(void *)Cont_88_5,(void *)Cont_89_6,(void *)Always_94_7};
	xsi_register_didat("work_m_00000000004058083503_2962164981", "isim/mips_test_isim_beh.exe.sim/work/m_00000000004058083503_2962164981.didat");
	xsi_register_executes(pe);
}
