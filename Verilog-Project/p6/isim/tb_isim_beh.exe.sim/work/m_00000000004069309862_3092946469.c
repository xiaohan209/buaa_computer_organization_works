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
static const char *ng0 = "C:/ashdaisdh/p6/controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_51_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t33[8];
    char t40[8];
    char t68[8];
    char t76[8];
    char t116[8];
    char t117[8];
    char t123[8];
    char t125[8];
    char t131[8];
    char t145[8];
    char t153[8];
    char t183[8];
    char t191[8];
    char t219[8];
    char t227[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t124;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    int t251;
    int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5336);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1048U);
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

LAB11:    memcpy(t76, t6, 8);

LAB12:    t108 = (t76 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t76);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB39;

LAB38:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB40;

LAB41:    memset(t19, 0, 8);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t13) != 0)
        goto LAB45;

LAB46:    t18 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t18);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB47;

LAB48:    memcpy(t227, t19, 8);

LAB49:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB118;

LAB117:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB119;

LAB120:    memset(t19, 0, 8);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t13) != 0)
        goto LAB124;

LAB125:    t18 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t18);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB126;

LAB127:    memcpy(t227, t19, 8);

LAB128:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB192;

LAB193:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB197;

LAB196:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB197;

LAB200:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB198;

LAB199:    memset(t19, 0, 8);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t13) != 0)
        goto LAB203;

LAB204:    t18 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t18);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB205;

LAB206:    memcpy(t227, t19, 8);

LAB207:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB271;

LAB272:    xsi_set_current_line(80, ng0);

LAB275:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB273:
LAB194:
LAB115:
LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t26 = (t19 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (!(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB17;

LAB18:    memcpy(t40, t19, 8);

LAB19:    memset(t68, 0, 8);
    t69 = (t40 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t40);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t69) != 0)
        goto LAB29;

LAB30:    t77 = *((unsigned int *)t6);
    t78 = *((unsigned int *)t68);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t6 + 4);
    t81 = (t68 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t32 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t31) != 0)
        goto LAB22;

LAB23:    t41 = *((unsigned int *)t19);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t19 + 4);
    t45 = (t33 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB20:    *((unsigned int *)t33) = 1;
    goto LAB23;

LAB22:    t39 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB23;

LAB24:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t19 + 4);
    t55 = (t33 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t19);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t33);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB26;

LAB27:    *((unsigned int *)t68) = 1;
    goto LAB30;

LAB29:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB30;

LAB31:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t6 + 4);
    t91 = (t68 + 4);
    t92 = *((unsigned int *)t6);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t68);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB33;

LAB34:    xsi_set_current_line(52, ng0);

LAB37:    xsi_set_current_line(53, ng0);
    t114 = ((char*)((ng2)));
    t115 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t115, t114, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB36;

LAB39:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t19) = 1;
    goto LAB46;

LAB45:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB46;

LAB47:    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    t25 = (t0 + 2168U);
    t31 = *((char **)t25);
    memset(t33, 0, 8);
    if (*((unsigned int *)t26) != *((unsigned int *)t31))
        goto LAB52;

LAB50:    t25 = (t26 + 4);
    t32 = (t31 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t32))
        goto LAB52;

LAB51:    *((unsigned int *)t33) = 1;

LAB52:    memset(t40, 0, 8);
    t39 = (t33 + 4);
    t20 = *((unsigned int *)t39);
    t21 = (~(t20));
    t22 = *((unsigned int *)t33);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t39) != 0)
        goto LAB55;

LAB56:    t45 = (t40 + 4);
    t27 = *((unsigned int *)t40);
    t28 = *((unsigned int *)t45);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB57;

LAB58:    memcpy(t116, t40, 8);

LAB59:    memset(t117, 0, 8);
    t115 = (t116 + 4);
    t92 = *((unsigned int *)t115);
    t93 = (~(t92));
    t94 = *((unsigned int *)t116);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t115) != 0)
        goto LAB73;

LAB74:    t119 = (t117 + 4);
    t97 = *((unsigned int *)t117);
    t98 = (!(t97));
    t99 = *((unsigned int *)t119);
    t102 = (t98 || t99);
    if (t102 > 0)
        goto LAB75;

LAB76:    memcpy(t191, t117, 8);

LAB77:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t220) != 0)
        goto LAB108;

LAB109:    t228 = *((unsigned int *)t19);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t19 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB49;

LAB53:    *((unsigned int *)t40) = 1;
    goto LAB56;

LAB55:    t44 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB56;

LAB57:    t46 = (t0 + 2168U);
    t54 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t68, 0, 8);
    t55 = (t54 + 4);
    t69 = (t46 + 4);
    t30 = *((unsigned int *)t54);
    t34 = *((unsigned int *)t46);
    t35 = (t30 ^ t34);
    t36 = *((unsigned int *)t55);
    t37 = *((unsigned int *)t69);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t55);
    t43 = *((unsigned int *)t69);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB61;

LAB60:    if (t47 != 0)
        goto LAB62;

LAB63:    memset(t76, 0, 8);
    t80 = (t68 + 4);
    t50 = *((unsigned int *)t80);
    t51 = (~(t50));
    t52 = *((unsigned int *)t68);
    t53 = (t52 & t51);
    t56 = (t53 & 1U);
    if (t56 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t80) != 0)
        goto LAB66;

LAB67:    t57 = *((unsigned int *)t40);
    t58 = *((unsigned int *)t76);
    t60 = (t57 & t58);
    *((unsigned int *)t116) = t60;
    t82 = (t40 + 4);
    t90 = (t76 + 4);
    t91 = (t116 + 4);
    t61 = *((unsigned int *)t82);
    t62 = *((unsigned int *)t90);
    t64 = (t61 | t62);
    *((unsigned int *)t91) = t64;
    t65 = *((unsigned int *)t91);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB59;

LAB61:    *((unsigned int *)t68) = 1;
    goto LAB63;

LAB62:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t76) = 1;
    goto LAB67;

LAB66:    t81 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB67;

LAB68:    t67 = *((unsigned int *)t116);
    t70 = *((unsigned int *)t91);
    *((unsigned int *)t116) = (t67 | t70);
    t108 = (t40 + 4);
    t114 = (t76 + 4);
    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t108);
    t74 = (~(t73));
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t114);
    t83 = (~(t79));
    t59 = (t72 & t74);
    t63 = (t78 & t83);
    t84 = (~(t59));
    t85 = (~(t63));
    t86 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t86 & t84);
    t87 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t87 & t85);
    t88 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t88 & t84);
    t89 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t89 & t85);
    goto LAB70;

LAB71:    *((unsigned int *)t117) = 1;
    goto LAB74;

LAB73:    t118 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB74;

LAB75:    t120 = (t0 + 1848U);
    t121 = *((char **)t120);
    t120 = (t0 + 2168U);
    t122 = *((char **)t120);
    memset(t123, 0, 8);
    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB80;

LAB78:    t120 = (t121 + 4);
    t124 = (t122 + 4);
    if (*((unsigned int *)t120) != *((unsigned int *)t124))
        goto LAB80;

LAB79:    *((unsigned int *)t123) = 1;

LAB80:    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t103 = *((unsigned int *)t126);
    t104 = (~(t103));
    t105 = *((unsigned int *)t123);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t126) != 0)
        goto LAB83;

LAB84:    t128 = (t125 + 4);
    t109 = *((unsigned int *)t125);
    t110 = *((unsigned int *)t128);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB85;

LAB86:    memcpy(t153, t125, 8);

LAB87:    memset(t183, 0, 8);
    t184 = (t153 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t153);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t184) != 0)
        goto LAB101;

LAB102:    t192 = *((unsigned int *)t117);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t117 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB77;

LAB81:    *((unsigned int *)t125) = 1;
    goto LAB84;

LAB83:    t127 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB84;

LAB85:    t129 = (t0 + 2168U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng1)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t129 + 4);
    t112 = *((unsigned int *)t130);
    t113 = *((unsigned int *)t129);
    t134 = (t112 ^ t113);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t132);
    t140 = *((unsigned int *)t133);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB89;

LAB88:    if (t141 != 0)
        goto LAB90;

LAB91:    memset(t145, 0, 8);
    t146 = (t131 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t131);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t146) != 0)
        goto LAB94;

LAB95:    t154 = *((unsigned int *)t125);
    t155 = *((unsigned int *)t145);
    t156 = (t154 & t155);
    *((unsigned int *)t153) = t156;
    t157 = (t125 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB89:    *((unsigned int *)t131) = 1;
    goto LAB91;

LAB90:    t144 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t145) = 1;
    goto LAB95;

LAB94:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB95;

LAB96:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t125 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t125);
    t170 = (~(t169));
    t171 = *((unsigned int *)t167);
    t172 = (~(t171));
    t173 = *((unsigned int *)t145);
    t174 = (~(t173));
    t175 = *((unsigned int *)t168);
    t176 = (~(t175));
    t100 = (t170 & t172);
    t101 = (t174 & t176);
    t177 = (~(t100));
    t178 = (~(t101));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    t181 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t181 & t177);
    t182 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t182 & t178);
    goto LAB98;

LAB99:    *((unsigned int *)t183) = 1;
    goto LAB102;

LAB101:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB102;

LAB103:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t117 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t117);
    t210 = (t209 & t208);
    t211 = *((unsigned int *)t206);
    t212 = (~(t211));
    t213 = *((unsigned int *)t183);
    t214 = (t213 & t212);
    t215 = (~(t210));
    t216 = (~(t214));
    t217 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t217 & t215);
    t218 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t218 & t216);
    goto LAB105;

LAB106:    *((unsigned int *)t219) = 1;
    goto LAB109;

LAB108:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB109;

LAB110:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t19 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t19);
    t244 = (~(t243));
    t245 = *((unsigned int *)t241);
    t246 = (~(t245));
    t247 = *((unsigned int *)t219);
    t248 = (~(t247));
    t249 = *((unsigned int *)t242);
    t250 = (~(t249));
    t251 = (t244 & t246);
    t252 = (t248 & t250);
    t253 = (~(t251));
    t254 = (~(t252));
    t255 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t255 & t253);
    t256 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t256 & t254);
    t257 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t257 & t253);
    t258 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t258 & t254);
    goto LAB112;

LAB113:    xsi_set_current_line(59, ng0);

LAB116:    xsi_set_current_line(60, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB115;

LAB118:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB120;

LAB119:    *((unsigned int *)t6) = 1;
    goto LAB120;

LAB122:    *((unsigned int *)t19) = 1;
    goto LAB125;

LAB124:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB125;

LAB126:    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    t25 = (t0 + 2488U);
    t31 = *((char **)t25);
    memset(t33, 0, 8);
    if (*((unsigned int *)t26) != *((unsigned int *)t31))
        goto LAB131;

LAB129:    t25 = (t26 + 4);
    t32 = (t31 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t32))
        goto LAB131;

LAB130:    *((unsigned int *)t33) = 1;

LAB131:    memset(t40, 0, 8);
    t39 = (t33 + 4);
    t20 = *((unsigned int *)t39);
    t21 = (~(t20));
    t22 = *((unsigned int *)t33);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t39) != 0)
        goto LAB134;

LAB135:    t45 = (t40 + 4);
    t27 = *((unsigned int *)t40);
    t28 = *((unsigned int *)t45);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB136;

LAB137:    memcpy(t116, t40, 8);

LAB138:    memset(t117, 0, 8);
    t115 = (t116 + 4);
    t92 = *((unsigned int *)t115);
    t93 = (~(t92));
    t94 = *((unsigned int *)t116);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t115) != 0)
        goto LAB152;

LAB153:    t119 = (t117 + 4);
    t97 = *((unsigned int *)t117);
    t98 = (!(t97));
    t99 = *((unsigned int *)t119);
    t102 = (t98 || t99);
    if (t102 > 0)
        goto LAB154;

LAB155:    memcpy(t191, t117, 8);

LAB156:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB185;

LAB186:    if (*((unsigned int *)t220) != 0)
        goto LAB187;

LAB188:    t228 = *((unsigned int *)t19);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t19 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB189;

LAB190:
LAB191:    goto LAB128;

LAB132:    *((unsigned int *)t40) = 1;
    goto LAB135;

LAB134:    t44 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB135;

LAB136:    t46 = (t0 + 2488U);
    t54 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t68, 0, 8);
    t55 = (t54 + 4);
    t69 = (t46 + 4);
    t30 = *((unsigned int *)t54);
    t34 = *((unsigned int *)t46);
    t35 = (t30 ^ t34);
    t36 = *((unsigned int *)t55);
    t37 = *((unsigned int *)t69);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t55);
    t43 = *((unsigned int *)t69);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB140;

LAB139:    if (t47 != 0)
        goto LAB141;

LAB142:    memset(t76, 0, 8);
    t80 = (t68 + 4);
    t50 = *((unsigned int *)t80);
    t51 = (~(t50));
    t52 = *((unsigned int *)t68);
    t53 = (t52 & t51);
    t56 = (t53 & 1U);
    if (t56 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t80) != 0)
        goto LAB145;

LAB146:    t57 = *((unsigned int *)t40);
    t58 = *((unsigned int *)t76);
    t60 = (t57 & t58);
    *((unsigned int *)t116) = t60;
    t82 = (t40 + 4);
    t90 = (t76 + 4);
    t91 = (t116 + 4);
    t61 = *((unsigned int *)t82);
    t62 = *((unsigned int *)t90);
    t64 = (t61 | t62);
    *((unsigned int *)t91) = t64;
    t65 = *((unsigned int *)t91);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB147;

LAB148:
LAB149:    goto LAB138;

LAB140:    *((unsigned int *)t68) = 1;
    goto LAB142;

LAB141:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB142;

LAB143:    *((unsigned int *)t76) = 1;
    goto LAB146;

LAB145:    t81 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB146;

LAB147:    t67 = *((unsigned int *)t116);
    t70 = *((unsigned int *)t91);
    *((unsigned int *)t116) = (t67 | t70);
    t108 = (t40 + 4);
    t114 = (t76 + 4);
    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t108);
    t74 = (~(t73));
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t114);
    t83 = (~(t79));
    t59 = (t72 & t74);
    t63 = (t78 & t83);
    t84 = (~(t59));
    t85 = (~(t63));
    t86 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t86 & t84);
    t87 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t87 & t85);
    t88 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t88 & t84);
    t89 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t89 & t85);
    goto LAB149;

LAB150:    *((unsigned int *)t117) = 1;
    goto LAB153;

LAB152:    t118 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB153;

LAB154:    t120 = (t0 + 1848U);
    t121 = *((char **)t120);
    t120 = (t0 + 2488U);
    t122 = *((char **)t120);
    memset(t123, 0, 8);
    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB159;

LAB157:    t120 = (t121 + 4);
    t124 = (t122 + 4);
    if (*((unsigned int *)t120) != *((unsigned int *)t124))
        goto LAB159;

LAB158:    *((unsigned int *)t123) = 1;

LAB159:    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t103 = *((unsigned int *)t126);
    t104 = (~(t103));
    t105 = *((unsigned int *)t123);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t126) != 0)
        goto LAB162;

LAB163:    t128 = (t125 + 4);
    t109 = *((unsigned int *)t125);
    t110 = *((unsigned int *)t128);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB164;

LAB165:    memcpy(t153, t125, 8);

LAB166:    memset(t183, 0, 8);
    t184 = (t153 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t153);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t184) != 0)
        goto LAB180;

LAB181:    t192 = *((unsigned int *)t117);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t117 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB182;

LAB183:
LAB184:    goto LAB156;

LAB160:    *((unsigned int *)t125) = 1;
    goto LAB163;

LAB162:    t127 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB163;

LAB164:    t129 = (t0 + 2488U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng1)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t129 + 4);
    t112 = *((unsigned int *)t130);
    t113 = *((unsigned int *)t129);
    t134 = (t112 ^ t113);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t132);
    t140 = *((unsigned int *)t133);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB168;

LAB167:    if (t141 != 0)
        goto LAB169;

LAB170:    memset(t145, 0, 8);
    t146 = (t131 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t131);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t146) != 0)
        goto LAB173;

LAB174:    t154 = *((unsigned int *)t125);
    t155 = *((unsigned int *)t145);
    t156 = (t154 & t155);
    *((unsigned int *)t153) = t156;
    t157 = (t125 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB175;

LAB176:
LAB177:    goto LAB166;

LAB168:    *((unsigned int *)t131) = 1;
    goto LAB170;

LAB169:    t144 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB170;

LAB171:    *((unsigned int *)t145) = 1;
    goto LAB174;

LAB173:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB174;

LAB175:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t125 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t125);
    t170 = (~(t169));
    t171 = *((unsigned int *)t167);
    t172 = (~(t171));
    t173 = *((unsigned int *)t145);
    t174 = (~(t173));
    t175 = *((unsigned int *)t168);
    t176 = (~(t175));
    t100 = (t170 & t172);
    t101 = (t174 & t176);
    t177 = (~(t100));
    t178 = (~(t101));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    t181 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t181 & t177);
    t182 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t182 & t178);
    goto LAB177;

LAB178:    *((unsigned int *)t183) = 1;
    goto LAB181;

LAB180:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB181;

LAB182:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t117 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t117);
    t210 = (t209 & t208);
    t211 = *((unsigned int *)t206);
    t212 = (~(t211));
    t213 = *((unsigned int *)t183);
    t214 = (t213 & t212);
    t215 = (~(t210));
    t216 = (~(t214));
    t217 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t217 & t215);
    t218 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t218 & t216);
    goto LAB184;

LAB185:    *((unsigned int *)t219) = 1;
    goto LAB188;

LAB187:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB188;

LAB189:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t19 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t19);
    t244 = (~(t243));
    t245 = *((unsigned int *)t241);
    t246 = (~(t245));
    t247 = *((unsigned int *)t219);
    t248 = (~(t247));
    t249 = *((unsigned int *)t242);
    t250 = (~(t249));
    t251 = (t244 & t246);
    t252 = (t248 & t250);
    t253 = (~(t251));
    t254 = (~(t252));
    t255 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t255 & t253);
    t256 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t256 & t254);
    t257 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t257 & t253);
    t258 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t258 & t254);
    goto LAB191;

LAB192:    xsi_set_current_line(66, ng0);

LAB195:    xsi_set_current_line(67, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB194;

LAB197:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB199;

LAB198:    *((unsigned int *)t6) = 1;
    goto LAB199;

LAB201:    *((unsigned int *)t19) = 1;
    goto LAB204;

LAB203:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB204;

LAB205:    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    t25 = (t0 + 2808U);
    t31 = *((char **)t25);
    memset(t33, 0, 8);
    if (*((unsigned int *)t26) != *((unsigned int *)t31))
        goto LAB210;

LAB208:    t25 = (t26 + 4);
    t32 = (t31 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t32))
        goto LAB210;

LAB209:    *((unsigned int *)t33) = 1;

LAB210:    memset(t40, 0, 8);
    t39 = (t33 + 4);
    t20 = *((unsigned int *)t39);
    t21 = (~(t20));
    t22 = *((unsigned int *)t33);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB211;

LAB212:    if (*((unsigned int *)t39) != 0)
        goto LAB213;

LAB214:    t45 = (t40 + 4);
    t27 = *((unsigned int *)t40);
    t28 = *((unsigned int *)t45);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB215;

LAB216:    memcpy(t116, t40, 8);

LAB217:    memset(t117, 0, 8);
    t115 = (t116 + 4);
    t92 = *((unsigned int *)t115);
    t93 = (~(t92));
    t94 = *((unsigned int *)t116);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB229;

LAB230:    if (*((unsigned int *)t115) != 0)
        goto LAB231;

LAB232:    t119 = (t117 + 4);
    t97 = *((unsigned int *)t117);
    t98 = (!(t97));
    t99 = *((unsigned int *)t119);
    t102 = (t98 || t99);
    if (t102 > 0)
        goto LAB233;

LAB234:    memcpy(t191, t117, 8);

LAB235:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB264;

LAB265:    if (*((unsigned int *)t220) != 0)
        goto LAB266;

LAB267:    t228 = *((unsigned int *)t19);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t19 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB268;

LAB269:
LAB270:    goto LAB207;

LAB211:    *((unsigned int *)t40) = 1;
    goto LAB214;

LAB213:    t44 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB214;

LAB215:    t46 = (t0 + 2808U);
    t54 = *((char **)t46);
    t46 = ((char*)((ng1)));
    memset(t68, 0, 8);
    t55 = (t54 + 4);
    t69 = (t46 + 4);
    t30 = *((unsigned int *)t54);
    t34 = *((unsigned int *)t46);
    t35 = (t30 ^ t34);
    t36 = *((unsigned int *)t55);
    t37 = *((unsigned int *)t69);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t55);
    t43 = *((unsigned int *)t69);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB219;

LAB218:    if (t47 != 0)
        goto LAB220;

LAB221:    memset(t76, 0, 8);
    t80 = (t68 + 4);
    t50 = *((unsigned int *)t80);
    t51 = (~(t50));
    t52 = *((unsigned int *)t68);
    t53 = (t52 & t51);
    t56 = (t53 & 1U);
    if (t56 != 0)
        goto LAB222;

LAB223:    if (*((unsigned int *)t80) != 0)
        goto LAB224;

LAB225:    t57 = *((unsigned int *)t40);
    t58 = *((unsigned int *)t76);
    t60 = (t57 & t58);
    *((unsigned int *)t116) = t60;
    t82 = (t40 + 4);
    t90 = (t76 + 4);
    t91 = (t116 + 4);
    t61 = *((unsigned int *)t82);
    t62 = *((unsigned int *)t90);
    t64 = (t61 | t62);
    *((unsigned int *)t91) = t64;
    t65 = *((unsigned int *)t91);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB226;

LAB227:
LAB228:    goto LAB217;

LAB219:    *((unsigned int *)t68) = 1;
    goto LAB221;

LAB220:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB221;

LAB222:    *((unsigned int *)t76) = 1;
    goto LAB225;

LAB224:    t81 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB225;

LAB226:    t67 = *((unsigned int *)t116);
    t70 = *((unsigned int *)t91);
    *((unsigned int *)t116) = (t67 | t70);
    t108 = (t40 + 4);
    t114 = (t76 + 4);
    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t108);
    t74 = (~(t73));
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t114);
    t83 = (~(t79));
    t59 = (t72 & t74);
    t63 = (t78 & t83);
    t84 = (~(t59));
    t85 = (~(t63));
    t86 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t86 & t84);
    t87 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t87 & t85);
    t88 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t88 & t84);
    t89 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t89 & t85);
    goto LAB228;

LAB229:    *((unsigned int *)t117) = 1;
    goto LAB232;

LAB231:    t118 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB232;

LAB233:    t120 = (t0 + 1848U);
    t121 = *((char **)t120);
    t120 = (t0 + 2808U);
    t122 = *((char **)t120);
    memset(t123, 0, 8);
    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB238;

LAB236:    t120 = (t121 + 4);
    t124 = (t122 + 4);
    if (*((unsigned int *)t120) != *((unsigned int *)t124))
        goto LAB238;

LAB237:    *((unsigned int *)t123) = 1;

LAB238:    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t103 = *((unsigned int *)t126);
    t104 = (~(t103));
    t105 = *((unsigned int *)t123);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB239;

LAB240:    if (*((unsigned int *)t126) != 0)
        goto LAB241;

LAB242:    t128 = (t125 + 4);
    t109 = *((unsigned int *)t125);
    t110 = *((unsigned int *)t128);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB243;

LAB244:    memcpy(t153, t125, 8);

LAB245:    memset(t183, 0, 8);
    t184 = (t153 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t153);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB257;

LAB258:    if (*((unsigned int *)t184) != 0)
        goto LAB259;

LAB260:    t192 = *((unsigned int *)t117);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t117 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB261;

LAB262:
LAB263:    goto LAB235;

LAB239:    *((unsigned int *)t125) = 1;
    goto LAB242;

LAB241:    t127 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB242;

LAB243:    t129 = (t0 + 2808U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng1)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t129 + 4);
    t112 = *((unsigned int *)t130);
    t113 = *((unsigned int *)t129);
    t134 = (t112 ^ t113);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t132);
    t140 = *((unsigned int *)t133);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB247;

LAB246:    if (t141 != 0)
        goto LAB248;

LAB249:    memset(t145, 0, 8);
    t146 = (t131 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t131);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB250;

LAB251:    if (*((unsigned int *)t146) != 0)
        goto LAB252;

LAB253:    t154 = *((unsigned int *)t125);
    t155 = *((unsigned int *)t145);
    t156 = (t154 & t155);
    *((unsigned int *)t153) = t156;
    t157 = (t125 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB254;

LAB255:
LAB256:    goto LAB245;

LAB247:    *((unsigned int *)t131) = 1;
    goto LAB249;

LAB248:    t144 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB249;

LAB250:    *((unsigned int *)t145) = 1;
    goto LAB253;

LAB252:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB253;

LAB254:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t125 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t125);
    t170 = (~(t169));
    t171 = *((unsigned int *)t167);
    t172 = (~(t171));
    t173 = *((unsigned int *)t145);
    t174 = (~(t173));
    t175 = *((unsigned int *)t168);
    t176 = (~(t175));
    t100 = (t170 & t172);
    t101 = (t174 & t176);
    t177 = (~(t100));
    t178 = (~(t101));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    t181 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t181 & t177);
    t182 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t182 & t178);
    goto LAB256;

LAB257:    *((unsigned int *)t183) = 1;
    goto LAB260;

LAB259:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB260;

LAB261:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t117 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t117);
    t210 = (t209 & t208);
    t211 = *((unsigned int *)t206);
    t212 = (~(t211));
    t213 = *((unsigned int *)t183);
    t214 = (t213 & t212);
    t215 = (~(t210));
    t216 = (~(t214));
    t217 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t217 & t215);
    t218 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t218 & t216);
    goto LAB263;

LAB264:    *((unsigned int *)t219) = 1;
    goto LAB267;

LAB266:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB267;

LAB268:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t19 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t19);
    t244 = (~(t243));
    t245 = *((unsigned int *)t241);
    t246 = (~(t245));
    t247 = *((unsigned int *)t219);
    t248 = (~(t247));
    t249 = *((unsigned int *)t242);
    t250 = (~(t249));
    t251 = (t244 & t246);
    t252 = (t248 & t250);
    t253 = (~(t251));
    t254 = (~(t252));
    t255 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t255 & t253);
    t256 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t256 & t254);
    t257 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t257 & t253);
    t258 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t258 & t254);
    goto LAB270;

LAB271:    xsi_set_current_line(73, ng0);

LAB274:    xsi_set_current_line(74, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB273;

}


extern void work_m_00000000004069309862_3092946469_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_51_1};
	xsi_register_didat("work_m_00000000004069309862_3092946469", "isim/tb_isim_beh.exe.sim/work/m_00000000004069309862_3092946469.didat");
	xsi_register_executes(pe);
}
