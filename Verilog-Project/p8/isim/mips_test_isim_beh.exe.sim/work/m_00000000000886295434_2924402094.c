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
static const char *ng0 = "C:/ashdaisdh/p8/DM.v";
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



static void Cont_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
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
    t15 = (t0 + 4792);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 4696);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_46_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t23[8];
    char t31[8];
    char t63[8];
    char t77[8];
    char t93[8];
    char t101[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
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
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
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
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4712);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t31, t6, 8);

LAB12:    memset(t63, 0, 8);
    t64 = (t31 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t64) != 0)
        goto LAB27;

LAB28:    t71 = (t63 + 4);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB29;

LAB30:    memcpy(t101, t63, 8);

LAB31:    t133 = (t101 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t101);
    t137 = (t136 & t135);
    t138 = (t137 != 0);
    if (t138 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(76, ng0);

LAB73:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB45:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 2648U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB14;

LAB13:    t21 = (t17 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t18) < *((unsigned int *)t17))
        goto LAB15;

LAB16:    memset(t23, 0, 8);
    t24 = (t19 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t24) != 0)
        goto LAB20;

LAB21:    t32 = *((unsigned int *)t6);
    t33 = *((unsigned int *)t23);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t6 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB12;

LAB14:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB18:    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB20:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB22:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t6 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t6);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB24;

LAB25:    *((unsigned int *)t63) = 1;
    goto LAB28;

LAB27:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB28;

LAB29:    t75 = (t0 + 1528U);
    t76 = *((char **)t75);
    t75 = ((char*)((ng3)));
    memset(t77, 0, 8);
    t78 = (t76 + 4);
    t79 = (t75 + 4);
    t80 = *((unsigned int *)t76);
    t81 = *((unsigned int *)t75);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t78);
    t84 = *((unsigned int *)t79);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t79);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB33;

LAB32:    if (t89 != 0)
        goto LAB34;

LAB35:    memset(t93, 0, 8);
    t94 = (t77 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t77);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t94) != 0)
        goto LAB38;

LAB39:    t102 = *((unsigned int *)t63);
    t103 = *((unsigned int *)t93);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t105 = (t63 + 4);
    t106 = (t93 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB33:    *((unsigned int *)t77) = 1;
    goto LAB35;

LAB34:    t92 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t93) = 1;
    goto LAB39;

LAB38:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB39;

LAB40:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t63 + 4);
    t116 = (t93 + 4);
    t117 = *((unsigned int *)t63);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t93);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t129 & t127);
    t130 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t130 & t128);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    t132 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t132 & t128);
    goto LAB42;

LAB43:    xsi_set_current_line(47, ng0);

LAB46:    xsi_set_current_line(48, ng0);
    t139 = (t0 + 2328U);
    t140 = *((char **)t139);
    t139 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t139, t140, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);

LAB47:    t2 = ((char*)((ng4)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng5)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng6)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng7)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng8)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng9)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng10)));
    t55 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t55 == 1)
        goto LAB60;

LAB61:
LAB63:
LAB62:    xsi_set_current_line(71, ng0);

LAB72:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB64:    goto LAB45;

LAB48:    xsi_set_current_line(50, ng0);

LAB65:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t19, 0, 8);
    t4 = (t19 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t11 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t13, 16, t19, 16);
    t17 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t17, t6, 0, 0, 32, 0LL);
    goto LAB64;

LAB50:    xsi_set_current_line(53, ng0);

LAB66:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t11 & 65535U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 65535U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t19, 16, t4, 16);
    t17 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t17, t6, 0, 0, 32, 0LL);
    goto LAB64;

LAB52:    xsi_set_current_line(56, ng0);

LAB67:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t19, 0, 8);
    t4 = (t19 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t11 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t13, 24, t19, 8);
    t17 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t17, t6, 0, 0, 32, 0LL);
    goto LAB64;

LAB54:    xsi_set_current_line(59, ng0);

LAB68:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 32, 32, 3U, t17, 16, t19, 8, t4, 8);
    t18 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 32, 0LL);
    goto LAB64;

LAB56:    xsi_set_current_line(62, ng0);

LAB69:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 32, 32, 3U, t17, 8, t19, 8, t4, 16);
    t18 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 32, 0LL);
    goto LAB64;

LAB58:    xsi_set_current_line(65, ng0);

LAB70:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t19, 8, t4, 24);
    t17 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t17, t6, 0, 0, 32, 0LL);
    goto LAB64;

LAB60:    xsi_set_current_line(68, ng0);

LAB71:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB64;

}


extern void work_m_00000000000886295434_2924402094_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000000886295434_2924402094", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000886295434_2924402094.didat");
	xsi_register_executes(pe);
}
