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
static const char *ng0 = "C:/ashdaisdh/p8/controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {5, 0};



static void Initial_45_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t13[8];
    char t21[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t98[8];
    char t99[8];
    char t104[8];
    char t111[8];
    char t113[8];
    char t127[8];
    char t143[8];
    char t151[8];
    char t183[8];
    char t191[8];
    char t219[8];
    char t227[8];
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
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    int t175;
    int t176;
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

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB17:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB18;

LAB19:    memcpy(t58, t21, 8);

LAB20:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB37;

LAB36:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB38;

LAB39:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB44:    t28 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB45;

LAB46:    memcpy(t227, t21, 8);

LAB47:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB118;

LAB115:    if (t18 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t13) = 1;

LAB118:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t12) != 0)
        goto LAB121;

LAB122:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB123;

LAB124:    memcpy(t58, t21, 8);

LAB125:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB142;

LAB141:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB142;

LAB145:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB143;

LAB144:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t12) != 0)
        goto LAB148;

LAB149:    t28 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB150;

LAB151:    memcpy(t227, t21, 8);

LAB152:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB216;

LAB217:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB221;

LAB220:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB221;

LAB224:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB222;

LAB223:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB225;

LAB226:    if (*((unsigned int *)t12) != 0)
        goto LAB227;

LAB228:    t28 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB229;

LAB230:    memcpy(t227, t21, 8);

LAB231:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB295;

LAB296:    xsi_set_current_line(95, ng0);

LAB299:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB297:
LAB218:
LAB139:
LAB113:
LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB16:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB17;

LAB18:    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng3)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB24;

LAB21:    if (t46 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t34) = 1;

LAB24:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t51) != 0)
        goto LAB27;

LAB28:    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB27:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB28;

LAB29:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB31;

LAB32:    xsi_set_current_line(60, ng0);

LAB35:    xsi_set_current_line(61, ng0);
    t96 = ((char*)((ng2)));
    t97 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t97, t96, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB34;

LAB37:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB43:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB44;

LAB45:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = (t0 + 1688U);
    t35 = *((char **)t32);
    memset(t34, 0, 8);
    if (*((unsigned int *)t33) != *((unsigned int *)t35))
        goto LAB50;

LAB48:    t32 = (t33 + 4);
    t36 = (t35 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t36))
        goto LAB50;

LAB49:    *((unsigned int *)t34) = 1;

LAB50:    memset(t50, 0, 8);
    t49 = (t34 + 4);
    t17 = *((unsigned int *)t49);
    t18 = (~(t17));
    t19 = *((unsigned int *)t34);
    t20 = (t19 & t18);
    t22 = (t20 & 1U);
    if (t22 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t49) != 0)
        goto LAB53;

LAB54:    t57 = (t50 + 4);
    t23 = *((unsigned int *)t50);
    t24 = *((unsigned int *)t57);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB55;

LAB56:    memcpy(t99, t50, 8);

LAB57:    memset(t104, 0, 8);
    t105 = (t99 + 4);
    t86 = *((unsigned int *)t105);
    t87 = (~(t86));
    t88 = *((unsigned int *)t99);
    t89 = (t88 & t87);
    t91 = (t89 & 1U);
    if (t91 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t105) != 0)
        goto LAB71;

LAB72:    t107 = (t104 + 4);
    t92 = *((unsigned int *)t104);
    t93 = (!(t92));
    t94 = *((unsigned int *)t107);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB73;

LAB74:    memcpy(t191, t104, 8);

LAB75:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t220) != 0)
        goto LAB106;

LAB107:    t228 = *((unsigned int *)t21);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t21 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB47;

LAB51:    *((unsigned int *)t50) = 1;
    goto LAB54;

LAB53:    t51 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB54;

LAB55:    t62 = (t0 + 1688U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng1)));
    memset(t58, 0, 8);
    t64 = (t63 + 4);
    t72 = (t62 + 4);
    t26 = *((unsigned int *)t63);
    t29 = *((unsigned int *)t62);
    t30 = (t26 ^ t29);
    t31 = *((unsigned int *)t64);
    t37 = *((unsigned int *)t72);
    t38 = (t31 ^ t37);
    t39 = (t30 | t38);
    t40 = *((unsigned int *)t64);
    t41 = *((unsigned int *)t72);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB59;

LAB58:    if (t42 != 0)
        goto LAB60;

LAB61:    memset(t98, 0, 8);
    t90 = (t58 + 4);
    t45 = *((unsigned int *)t90);
    t46 = (~(t45));
    t47 = *((unsigned int *)t58);
    t48 = (t47 & t46);
    t52 = (t48 & 1U);
    if (t52 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t90) != 0)
        goto LAB64;

LAB65:    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t98);
    t55 = (t53 & t54);
    *((unsigned int *)t99) = t55;
    t97 = (t50 + 4);
    t100 = (t98 + 4);
    t101 = (t99 + 4);
    t56 = *((unsigned int *)t97);
    t59 = *((unsigned int *)t100);
    t60 = (t56 | t59);
    *((unsigned int *)t101) = t60;
    t61 = *((unsigned int *)t101);
    t65 = (t61 != 0);
    if (t65 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB59:    *((unsigned int *)t58) = 1;
    goto LAB61;

LAB60:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t98) = 1;
    goto LAB65;

LAB64:    t96 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB65;

LAB66:    t66 = *((unsigned int *)t99);
    t67 = *((unsigned int *)t101);
    *((unsigned int *)t99) = (t66 | t67);
    t102 = (t50 + 4);
    t103 = (t98 + 4);
    t68 = *((unsigned int *)t50);
    t69 = (~(t68));
    t70 = *((unsigned int *)t102);
    t71 = (~(t70));
    t74 = *((unsigned int *)t98);
    t75 = (~(t74));
    t76 = *((unsigned int *)t103);
    t77 = (~(t76));
    t82 = (t69 & t71);
    t83 = (t75 & t77);
    t78 = (~(t82));
    t79 = (~(t83));
    t80 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t80 & t78);
    t81 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t81 & t79);
    t84 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t84 & t78);
    t85 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t85 & t79);
    goto LAB68;

LAB69:    *((unsigned int *)t104) = 1;
    goto LAB72;

LAB71:    t106 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB72;

LAB73:    t108 = (t0 + 1368U);
    t109 = *((char **)t108);
    t108 = (t0 + 1688U);
    t110 = *((char **)t108);
    memset(t111, 0, 8);
    if (*((unsigned int *)t109) != *((unsigned int *)t110))
        goto LAB78;

LAB76:    t108 = (t109 + 4);
    t112 = (t110 + 4);
    if (*((unsigned int *)t108) != *((unsigned int *)t112))
        goto LAB78;

LAB77:    *((unsigned int *)t111) = 1;

LAB78:    memset(t113, 0, 8);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t111);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t114) != 0)
        goto LAB81;

LAB82:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB83;

LAB84:    memcpy(t151, t113, 8);

LAB85:    memset(t183, 0, 8);
    t184 = (t151 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t151);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t184) != 0)
        goto LAB99;

LAB100:    t192 = *((unsigned int *)t104);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t104 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB75;

LAB79:    *((unsigned int *)t113) = 1;
    goto LAB82;

LAB81:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB82;

LAB83:    t125 = (t0 + 1688U);
    t126 = *((char **)t125);
    t125 = ((char*)((ng1)));
    memset(t127, 0, 8);
    t128 = (t126 + 4);
    t129 = (t125 + 4);
    t130 = *((unsigned int *)t126);
    t131 = *((unsigned int *)t125);
    t132 = (t130 ^ t131);
    t133 = *((unsigned int *)t128);
    t134 = *((unsigned int *)t129);
    t135 = (t133 ^ t134);
    t136 = (t132 | t135);
    t137 = *((unsigned int *)t128);
    t138 = *((unsigned int *)t129);
    t139 = (t137 | t138);
    t140 = (~(t139));
    t141 = (t136 & t140);
    if (t141 != 0)
        goto LAB87;

LAB86:    if (t139 != 0)
        goto LAB88;

LAB89:    memset(t143, 0, 8);
    t144 = (t127 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t127);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t144) != 0)
        goto LAB92;

LAB93:    t152 = *((unsigned int *)t113);
    t153 = *((unsigned int *)t143);
    t154 = (t152 & t153);
    *((unsigned int *)t151) = t154;
    t155 = (t113 + 4);
    t156 = (t143 + 4);
    t157 = (t151 + 4);
    t158 = *((unsigned int *)t155);
    t159 = *((unsigned int *)t156);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = *((unsigned int *)t157);
    t162 = (t161 != 0);
    if (t162 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB85;

LAB87:    *((unsigned int *)t127) = 1;
    goto LAB89;

LAB88:    t142 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t143) = 1;
    goto LAB93;

LAB92:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB93;

LAB94:    t163 = *((unsigned int *)t151);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t151) = (t163 | t164);
    t165 = (t113 + 4);
    t166 = (t143 + 4);
    t167 = *((unsigned int *)t113);
    t168 = (~(t167));
    t169 = *((unsigned int *)t165);
    t170 = (~(t169));
    t171 = *((unsigned int *)t143);
    t172 = (~(t171));
    t173 = *((unsigned int *)t166);
    t174 = (~(t173));
    t175 = (t168 & t170);
    t176 = (t172 & t174);
    t177 = (~(t175));
    t178 = (~(t176));
    t179 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t179 & t177);
    t180 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t180 & t178);
    t181 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t181 & t177);
    t182 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t182 & t178);
    goto LAB96;

LAB97:    *((unsigned int *)t183) = 1;
    goto LAB100;

LAB99:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB100;

LAB101:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t104 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t104);
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
    goto LAB103;

LAB104:    *((unsigned int *)t219) = 1;
    goto LAB107;

LAB106:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB107;

LAB108:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t21 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t21);
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
    goto LAB110;

LAB111:    xsi_set_current_line(67, ng0);

LAB114:    xsi_set_current_line(68, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB113;

LAB117:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t21) = 1;
    goto LAB122;

LAB121:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB122;

LAB123:    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng3)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB129;

LAB126:    if (t46 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t34) = 1;

LAB129:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t51) != 0)
        goto LAB132;

LAB133:    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB134;

LAB135:
LAB136:    goto LAB125;

LAB128:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB129;

LAB130:    *((unsigned int *)t50) = 1;
    goto LAB133;

LAB132:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB133;

LAB134:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB136;

LAB137:    xsi_set_current_line(74, ng0);

LAB140:    xsi_set_current_line(75, ng0);
    t96 = ((char*)((ng2)));
    t97 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t97, t96, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB139;

LAB142:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB144;

LAB143:    *((unsigned int *)t13) = 1;
    goto LAB144;

LAB146:    *((unsigned int *)t21) = 1;
    goto LAB149;

LAB148:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB149;

LAB150:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = (t0 + 2008U);
    t35 = *((char **)t32);
    memset(t34, 0, 8);
    if (*((unsigned int *)t33) != *((unsigned int *)t35))
        goto LAB155;

LAB153:    t32 = (t33 + 4);
    t36 = (t35 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t36))
        goto LAB155;

LAB154:    *((unsigned int *)t34) = 1;

LAB155:    memset(t50, 0, 8);
    t49 = (t34 + 4);
    t17 = *((unsigned int *)t49);
    t18 = (~(t17));
    t19 = *((unsigned int *)t34);
    t20 = (t19 & t18);
    t22 = (t20 & 1U);
    if (t22 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t49) != 0)
        goto LAB158;

LAB159:    t57 = (t50 + 4);
    t23 = *((unsigned int *)t50);
    t24 = *((unsigned int *)t57);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB160;

LAB161:    memcpy(t99, t50, 8);

LAB162:    memset(t104, 0, 8);
    t105 = (t99 + 4);
    t86 = *((unsigned int *)t105);
    t87 = (~(t86));
    t88 = *((unsigned int *)t99);
    t89 = (t88 & t87);
    t91 = (t89 & 1U);
    if (t91 != 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t105) != 0)
        goto LAB176;

LAB177:    t107 = (t104 + 4);
    t92 = *((unsigned int *)t104);
    t93 = (!(t92));
    t94 = *((unsigned int *)t107);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB178;

LAB179:    memcpy(t191, t104, 8);

LAB180:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB209;

LAB210:    if (*((unsigned int *)t220) != 0)
        goto LAB211;

LAB212:    t228 = *((unsigned int *)t21);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t21 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB213;

LAB214:
LAB215:    goto LAB152;

LAB156:    *((unsigned int *)t50) = 1;
    goto LAB159;

LAB158:    t51 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB159;

LAB160:    t62 = (t0 + 2008U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng1)));
    memset(t58, 0, 8);
    t64 = (t63 + 4);
    t72 = (t62 + 4);
    t26 = *((unsigned int *)t63);
    t29 = *((unsigned int *)t62);
    t30 = (t26 ^ t29);
    t31 = *((unsigned int *)t64);
    t37 = *((unsigned int *)t72);
    t38 = (t31 ^ t37);
    t39 = (t30 | t38);
    t40 = *((unsigned int *)t64);
    t41 = *((unsigned int *)t72);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB164;

LAB163:    if (t42 != 0)
        goto LAB165;

LAB166:    memset(t98, 0, 8);
    t90 = (t58 + 4);
    t45 = *((unsigned int *)t90);
    t46 = (~(t45));
    t47 = *((unsigned int *)t58);
    t48 = (t47 & t46);
    t52 = (t48 & 1U);
    if (t52 != 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t90) != 0)
        goto LAB169;

LAB170:    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t98);
    t55 = (t53 & t54);
    *((unsigned int *)t99) = t55;
    t97 = (t50 + 4);
    t100 = (t98 + 4);
    t101 = (t99 + 4);
    t56 = *((unsigned int *)t97);
    t59 = *((unsigned int *)t100);
    t60 = (t56 | t59);
    *((unsigned int *)t101) = t60;
    t61 = *((unsigned int *)t101);
    t65 = (t61 != 0);
    if (t65 == 1)
        goto LAB171;

LAB172:
LAB173:    goto LAB162;

LAB164:    *((unsigned int *)t58) = 1;
    goto LAB166;

LAB165:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB166;

LAB167:    *((unsigned int *)t98) = 1;
    goto LAB170;

LAB169:    t96 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB170;

LAB171:    t66 = *((unsigned int *)t99);
    t67 = *((unsigned int *)t101);
    *((unsigned int *)t99) = (t66 | t67);
    t102 = (t50 + 4);
    t103 = (t98 + 4);
    t68 = *((unsigned int *)t50);
    t69 = (~(t68));
    t70 = *((unsigned int *)t102);
    t71 = (~(t70));
    t74 = *((unsigned int *)t98);
    t75 = (~(t74));
    t76 = *((unsigned int *)t103);
    t77 = (~(t76));
    t82 = (t69 & t71);
    t83 = (t75 & t77);
    t78 = (~(t82));
    t79 = (~(t83));
    t80 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t80 & t78);
    t81 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t81 & t79);
    t84 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t84 & t78);
    t85 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t85 & t79);
    goto LAB173;

LAB174:    *((unsigned int *)t104) = 1;
    goto LAB177;

LAB176:    t106 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB177;

LAB178:    t108 = (t0 + 1368U);
    t109 = *((char **)t108);
    t108 = (t0 + 2008U);
    t110 = *((char **)t108);
    memset(t111, 0, 8);
    if (*((unsigned int *)t109) != *((unsigned int *)t110))
        goto LAB183;

LAB181:    t108 = (t109 + 4);
    t112 = (t110 + 4);
    if (*((unsigned int *)t108) != *((unsigned int *)t112))
        goto LAB183;

LAB182:    *((unsigned int *)t111) = 1;

LAB183:    memset(t113, 0, 8);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t111);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t114) != 0)
        goto LAB186;

LAB187:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB188;

LAB189:    memcpy(t151, t113, 8);

LAB190:    memset(t183, 0, 8);
    t184 = (t151 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t151);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB202;

LAB203:    if (*((unsigned int *)t184) != 0)
        goto LAB204;

LAB205:    t192 = *((unsigned int *)t104);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t104 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB206;

LAB207:
LAB208:    goto LAB180;

LAB184:    *((unsigned int *)t113) = 1;
    goto LAB187;

LAB186:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB187;

LAB188:    t125 = (t0 + 2008U);
    t126 = *((char **)t125);
    t125 = ((char*)((ng1)));
    memset(t127, 0, 8);
    t128 = (t126 + 4);
    t129 = (t125 + 4);
    t130 = *((unsigned int *)t126);
    t131 = *((unsigned int *)t125);
    t132 = (t130 ^ t131);
    t133 = *((unsigned int *)t128);
    t134 = *((unsigned int *)t129);
    t135 = (t133 ^ t134);
    t136 = (t132 | t135);
    t137 = *((unsigned int *)t128);
    t138 = *((unsigned int *)t129);
    t139 = (t137 | t138);
    t140 = (~(t139));
    t141 = (t136 & t140);
    if (t141 != 0)
        goto LAB192;

LAB191:    if (t139 != 0)
        goto LAB193;

LAB194:    memset(t143, 0, 8);
    t144 = (t127 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t127);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t144) != 0)
        goto LAB197;

LAB198:    t152 = *((unsigned int *)t113);
    t153 = *((unsigned int *)t143);
    t154 = (t152 & t153);
    *((unsigned int *)t151) = t154;
    t155 = (t113 + 4);
    t156 = (t143 + 4);
    t157 = (t151 + 4);
    t158 = *((unsigned int *)t155);
    t159 = *((unsigned int *)t156);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = *((unsigned int *)t157);
    t162 = (t161 != 0);
    if (t162 == 1)
        goto LAB199;

LAB200:
LAB201:    goto LAB190;

LAB192:    *((unsigned int *)t127) = 1;
    goto LAB194;

LAB193:    t142 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB194;

LAB195:    *((unsigned int *)t143) = 1;
    goto LAB198;

LAB197:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB198;

LAB199:    t163 = *((unsigned int *)t151);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t151) = (t163 | t164);
    t165 = (t113 + 4);
    t166 = (t143 + 4);
    t167 = *((unsigned int *)t113);
    t168 = (~(t167));
    t169 = *((unsigned int *)t165);
    t170 = (~(t169));
    t171 = *((unsigned int *)t143);
    t172 = (~(t171));
    t173 = *((unsigned int *)t166);
    t174 = (~(t173));
    t175 = (t168 & t170);
    t176 = (t172 & t174);
    t177 = (~(t175));
    t178 = (~(t176));
    t179 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t179 & t177);
    t180 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t180 & t178);
    t181 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t181 & t177);
    t182 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t182 & t178);
    goto LAB201;

LAB202:    *((unsigned int *)t183) = 1;
    goto LAB205;

LAB204:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB205;

LAB206:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t104 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t104);
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
    goto LAB208;

LAB209:    *((unsigned int *)t219) = 1;
    goto LAB212;

LAB211:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB212;

LAB213:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t21 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t21);
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
    goto LAB215;

LAB216:    xsi_set_current_line(81, ng0);

LAB219:    xsi_set_current_line(82, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB218;

LAB221:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB223;

LAB222:    *((unsigned int *)t13) = 1;
    goto LAB223;

LAB225:    *((unsigned int *)t21) = 1;
    goto LAB228;

LAB227:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB228;

LAB229:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = (t0 + 2328U);
    t35 = *((char **)t32);
    memset(t34, 0, 8);
    if (*((unsigned int *)t33) != *((unsigned int *)t35))
        goto LAB234;

LAB232:    t32 = (t33 + 4);
    t36 = (t35 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t36))
        goto LAB234;

LAB233:    *((unsigned int *)t34) = 1;

LAB234:    memset(t50, 0, 8);
    t49 = (t34 + 4);
    t17 = *((unsigned int *)t49);
    t18 = (~(t17));
    t19 = *((unsigned int *)t34);
    t20 = (t19 & t18);
    t22 = (t20 & 1U);
    if (t22 != 0)
        goto LAB235;

LAB236:    if (*((unsigned int *)t49) != 0)
        goto LAB237;

LAB238:    t57 = (t50 + 4);
    t23 = *((unsigned int *)t50);
    t24 = *((unsigned int *)t57);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB239;

LAB240:    memcpy(t99, t50, 8);

LAB241:    memset(t104, 0, 8);
    t105 = (t99 + 4);
    t86 = *((unsigned int *)t105);
    t87 = (~(t86));
    t88 = *((unsigned int *)t99);
    t89 = (t88 & t87);
    t91 = (t89 & 1U);
    if (t91 != 0)
        goto LAB253;

LAB254:    if (*((unsigned int *)t105) != 0)
        goto LAB255;

LAB256:    t107 = (t104 + 4);
    t92 = *((unsigned int *)t104);
    t93 = (!(t92));
    t94 = *((unsigned int *)t107);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB257;

LAB258:    memcpy(t191, t104, 8);

LAB259:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB288;

LAB289:    if (*((unsigned int *)t220) != 0)
        goto LAB290;

LAB291:    t228 = *((unsigned int *)t21);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t21 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB292;

LAB293:
LAB294:    goto LAB231;

LAB235:    *((unsigned int *)t50) = 1;
    goto LAB238;

LAB237:    t51 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB238;

LAB239:    t62 = (t0 + 2328U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng1)));
    memset(t58, 0, 8);
    t64 = (t63 + 4);
    t72 = (t62 + 4);
    t26 = *((unsigned int *)t63);
    t29 = *((unsigned int *)t62);
    t30 = (t26 ^ t29);
    t31 = *((unsigned int *)t64);
    t37 = *((unsigned int *)t72);
    t38 = (t31 ^ t37);
    t39 = (t30 | t38);
    t40 = *((unsigned int *)t64);
    t41 = *((unsigned int *)t72);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB243;

LAB242:    if (t42 != 0)
        goto LAB244;

LAB245:    memset(t98, 0, 8);
    t90 = (t58 + 4);
    t45 = *((unsigned int *)t90);
    t46 = (~(t45));
    t47 = *((unsigned int *)t58);
    t48 = (t47 & t46);
    t52 = (t48 & 1U);
    if (t52 != 0)
        goto LAB246;

LAB247:    if (*((unsigned int *)t90) != 0)
        goto LAB248;

LAB249:    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t98);
    t55 = (t53 & t54);
    *((unsigned int *)t99) = t55;
    t97 = (t50 + 4);
    t100 = (t98 + 4);
    t101 = (t99 + 4);
    t56 = *((unsigned int *)t97);
    t59 = *((unsigned int *)t100);
    t60 = (t56 | t59);
    *((unsigned int *)t101) = t60;
    t61 = *((unsigned int *)t101);
    t65 = (t61 != 0);
    if (t65 == 1)
        goto LAB250;

LAB251:
LAB252:    goto LAB241;

LAB243:    *((unsigned int *)t58) = 1;
    goto LAB245;

LAB244:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB245;

LAB246:    *((unsigned int *)t98) = 1;
    goto LAB249;

LAB248:    t96 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB249;

LAB250:    t66 = *((unsigned int *)t99);
    t67 = *((unsigned int *)t101);
    *((unsigned int *)t99) = (t66 | t67);
    t102 = (t50 + 4);
    t103 = (t98 + 4);
    t68 = *((unsigned int *)t50);
    t69 = (~(t68));
    t70 = *((unsigned int *)t102);
    t71 = (~(t70));
    t74 = *((unsigned int *)t98);
    t75 = (~(t74));
    t76 = *((unsigned int *)t103);
    t77 = (~(t76));
    t82 = (t69 & t71);
    t83 = (t75 & t77);
    t78 = (~(t82));
    t79 = (~(t83));
    t80 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t80 & t78);
    t81 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t81 & t79);
    t84 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t84 & t78);
    t85 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t85 & t79);
    goto LAB252;

LAB253:    *((unsigned int *)t104) = 1;
    goto LAB256;

LAB255:    t106 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB256;

LAB257:    t108 = (t0 + 1368U);
    t109 = *((char **)t108);
    t108 = (t0 + 2328U);
    t110 = *((char **)t108);
    memset(t111, 0, 8);
    if (*((unsigned int *)t109) != *((unsigned int *)t110))
        goto LAB262;

LAB260:    t108 = (t109 + 4);
    t112 = (t110 + 4);
    if (*((unsigned int *)t108) != *((unsigned int *)t112))
        goto LAB262;

LAB261:    *((unsigned int *)t111) = 1;

LAB262:    memset(t113, 0, 8);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t111);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB263;

LAB264:    if (*((unsigned int *)t114) != 0)
        goto LAB265;

LAB266:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB267;

LAB268:    memcpy(t151, t113, 8);

LAB269:    memset(t183, 0, 8);
    t184 = (t151 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t151);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB281;

LAB282:    if (*((unsigned int *)t184) != 0)
        goto LAB283;

LAB284:    t192 = *((unsigned int *)t104);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t104 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB285;

LAB286:
LAB287:    goto LAB259;

LAB263:    *((unsigned int *)t113) = 1;
    goto LAB266;

LAB265:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB266;

LAB267:    t125 = (t0 + 2328U);
    t126 = *((char **)t125);
    t125 = ((char*)((ng1)));
    memset(t127, 0, 8);
    t128 = (t126 + 4);
    t129 = (t125 + 4);
    t130 = *((unsigned int *)t126);
    t131 = *((unsigned int *)t125);
    t132 = (t130 ^ t131);
    t133 = *((unsigned int *)t128);
    t134 = *((unsigned int *)t129);
    t135 = (t133 ^ t134);
    t136 = (t132 | t135);
    t137 = *((unsigned int *)t128);
    t138 = *((unsigned int *)t129);
    t139 = (t137 | t138);
    t140 = (~(t139));
    t141 = (t136 & t140);
    if (t141 != 0)
        goto LAB271;

LAB270:    if (t139 != 0)
        goto LAB272;

LAB273:    memset(t143, 0, 8);
    t144 = (t127 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t127);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB274;

LAB275:    if (*((unsigned int *)t144) != 0)
        goto LAB276;

LAB277:    t152 = *((unsigned int *)t113);
    t153 = *((unsigned int *)t143);
    t154 = (t152 & t153);
    *((unsigned int *)t151) = t154;
    t155 = (t113 + 4);
    t156 = (t143 + 4);
    t157 = (t151 + 4);
    t158 = *((unsigned int *)t155);
    t159 = *((unsigned int *)t156);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = *((unsigned int *)t157);
    t162 = (t161 != 0);
    if (t162 == 1)
        goto LAB278;

LAB279:
LAB280:    goto LAB269;

LAB271:    *((unsigned int *)t127) = 1;
    goto LAB273;

LAB272:    t142 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB273;

LAB274:    *((unsigned int *)t143) = 1;
    goto LAB277;

LAB276:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB277;

LAB278:    t163 = *((unsigned int *)t151);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t151) = (t163 | t164);
    t165 = (t113 + 4);
    t166 = (t143 + 4);
    t167 = *((unsigned int *)t113);
    t168 = (~(t167));
    t169 = *((unsigned int *)t165);
    t170 = (~(t169));
    t171 = *((unsigned int *)t143);
    t172 = (~(t171));
    t173 = *((unsigned int *)t166);
    t174 = (~(t173));
    t175 = (t168 & t170);
    t176 = (t172 & t174);
    t177 = (~(t175));
    t178 = (~(t176));
    t179 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t179 & t177);
    t180 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t180 & t178);
    t181 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t181 & t177);
    t182 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t182 & t178);
    goto LAB280;

LAB281:    *((unsigned int *)t183) = 1;
    goto LAB284;

LAB283:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB284;

LAB285:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t104 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t104);
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
    goto LAB287;

LAB288:    *((unsigned int *)t219) = 1;
    goto LAB291;

LAB290:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB291;

LAB292:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t21 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t21);
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
    goto LAB294;

LAB295:    xsi_set_current_line(88, ng0);

LAB298:    xsi_set_current_line(89, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB297;

}


extern void work_m_00000000004035815115_3092946469_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000004035815115_3092946469", "isim/mips_test_isim_beh.exe.sim/work/m_00000000004035815115_3092946469.didat");
	xsi_register_executes(pe);
}
