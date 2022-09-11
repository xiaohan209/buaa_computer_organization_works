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
static const char *ng0 = "C:/ashdaisdh/p7Dold/controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {5, 0};



static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng0);

LAB2:    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_54_1(char *t0)
{
    char t13[8];
    char t17[8];
    char t31[8];
    char t38[8];
    char t66[8];
    char t74[8];
    char t114[8];
    char t116[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t115;
    char *t117;
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

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5496);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
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

LAB7:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB14;

LAB15:    memcpy(t74, t13, 8);

LAB16:    t106 = (t74 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t74);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2008U);
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
    t18 = *((unsigned int *)t5);
    t19 = (t16 | t18);
    t20 = (~(t19));
    t21 = (t15 & t20);
    if (t21 != 0)
        goto LAB45;

LAB42:    if (t19 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t13) = 1;

LAB45:    memset(t17, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t12) != 0)
        goto LAB48;

LAB49:    t24 = (t17 + 4);
    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB50;

LAB51:    memcpy(t66, t17, 8);

LAB52:    t80 = (t66 + 4);
    t94 = *((unsigned int *)t80);
    t95 = (~(t94));
    t96 = *((unsigned int *)t66);
    t97 = (t96 & t95);
    t100 = (t97 != 0);
    if (t100 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB69;

LAB68:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB70;

LAB71:    memset(t17, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t12) != 0)
        goto LAB75;

LAB76:    t24 = (t17 + 4);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t24);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB77;

LAB78:    memcpy(t227, t17, 8);

LAB79:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB143;

LAB144:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2328U);
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
    t18 = *((unsigned int *)t5);
    t19 = (t16 | t18);
    t20 = (~(t19));
    t21 = (t15 & t20);
    if (t21 != 0)
        goto LAB150;

LAB147:    if (t19 != 0)
        goto LAB149;

LAB148:    *((unsigned int *)t13) = 1;

LAB150:    memset(t17, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t12) != 0)
        goto LAB153;

LAB154:    t24 = (t17 + 4);
    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB155;

LAB156:    memcpy(t66, t17, 8);

LAB157:    t80 = (t66 + 4);
    t94 = *((unsigned int *)t80);
    t95 = (~(t94));
    t96 = *((unsigned int *)t66);
    t97 = (t96 & t95);
    t100 = (t97 != 0);
    if (t100 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB174;

LAB173:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB174;

LAB177:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB175;

LAB176:    memset(t17, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t12) != 0)
        goto LAB180;

LAB181:    t24 = (t17 + 4);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t24);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB182;

LAB183:    memcpy(t227, t17, 8);

LAB184:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB248;

LAB249:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB253;

LAB252:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB253;

LAB256:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB254;

LAB255:    memset(t17, 0, 8);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB257;

LAB258:    if (*((unsigned int *)t12) != 0)
        goto LAB259;

LAB260:    t24 = (t17 + 4);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t24);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB261;

LAB262:    memcpy(t227, t17, 8);

LAB263:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB327;

LAB328:    xsi_set_current_line(104, ng0);

LAB331:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB329:
LAB250:
LAB171:
LAB145:
LAB66:
LAB40:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB20:    t24 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB21;

LAB22:    memcpy(t38, t17, 8);

LAB23:    memset(t66, 0, 8);
    t67 = (t38 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t38);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) != 0)
        goto LAB33;

LAB34:    t75 = *((unsigned int *)t13);
    t76 = *((unsigned int *)t66);
    t77 = (t75 & t76);
    *((unsigned int *)t74) = t77;
    t78 = (t13 + 4);
    t79 = (t66 + 4);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t78);
    t82 = *((unsigned int *)t79);
    t83 = (t81 | t82);
    *((unsigned int *)t80) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB21:    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t29 = (t30 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t29) != 0)
        goto LAB26;

LAB27:    t39 = *((unsigned int *)t17);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = (t17 + 4);
    t43 = (t31 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB24:    *((unsigned int *)t31) = 1;
    goto LAB27;

LAB26:    t37 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB27;

LAB28:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t17 + 4);
    t53 = (t31 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t17);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t31);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t64 & t62);
    t65 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t65 & t63);
    goto LAB30;

LAB31:    *((unsigned int *)t66) = 1;
    goto LAB34;

LAB33:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB34;

LAB35:    t86 = *((unsigned int *)t74);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t74) = (t86 | t87);
    t88 = (t13 + 4);
    t89 = (t66 + 4);
    t90 = *((unsigned int *)t13);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (~(t92));
    t94 = *((unsigned int *)t66);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (~(t96));
    t98 = (t91 & t93);
    t99 = (t95 & t97);
    t100 = (~(t98));
    t101 = (~(t99));
    t102 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t102 & t100);
    t103 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t103 & t101);
    t104 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t104 & t100);
    t105 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t105 & t101);
    goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);

LAB41:    xsi_set_current_line(63, ng0);
    t112 = ((char*)((ng2)));
    t113 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t113, t112, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB40;

LAB44:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t17) = 1;
    goto LAB49;

LAB48:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB49;

LAB50:    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t37 = (t30 + 4);
    t42 = (t29 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t29);
    t39 = (t35 ^ t36);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t42);
    t45 = (t40 ^ t41);
    t46 = (t39 | t45);
    t47 = *((unsigned int *)t37);
    t48 = *((unsigned int *)t42);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB56;

LAB53:    if (t49 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t31) = 1;

LAB56:    memset(t38, 0, 8);
    t44 = (t31 + 4);
    t54 = *((unsigned int *)t44);
    t55 = (~(t54));
    t56 = *((unsigned int *)t31);
    t58 = (t56 & t55);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t44) != 0)
        goto LAB59;

LAB60:    t60 = *((unsigned int *)t17);
    t62 = *((unsigned int *)t38);
    t63 = (t60 & t62);
    *((unsigned int *)t66) = t63;
    t53 = (t17 + 4);
    t67 = (t38 + 4);
    t73 = (t66 + 4);
    t64 = *((unsigned int *)t53);
    t65 = *((unsigned int *)t67);
    t68 = (t64 | t65);
    *((unsigned int *)t73) = t68;
    t69 = *((unsigned int *)t73);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t43 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t38) = 1;
    goto LAB60;

LAB59:    t52 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB60;

LAB61:    t71 = *((unsigned int *)t66);
    t72 = *((unsigned int *)t73);
    *((unsigned int *)t66) = (t71 | t72);
    t78 = (t17 + 4);
    t79 = (t38 + 4);
    t75 = *((unsigned int *)t17);
    t76 = (~(t75));
    t77 = *((unsigned int *)t78);
    t81 = (~(t77));
    t82 = *((unsigned int *)t38);
    t83 = (~(t82));
    t84 = *((unsigned int *)t79);
    t85 = (~(t84));
    t57 = (t76 & t81);
    t61 = (t83 & t85);
    t86 = (~(t57));
    t87 = (~(t61));
    t90 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t90 & t86);
    t91 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t91 & t87);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t86);
    t93 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t93 & t87);
    goto LAB63;

LAB64:    xsi_set_current_line(69, ng0);

LAB67:    xsi_set_current_line(70, ng0);
    t88 = ((char*)((ng2)));
    t89 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t89, t88, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB66;

LAB69:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB71;

LAB70:    *((unsigned int *)t13) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t17) = 1;
    goto LAB76;

LAB75:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB76;

LAB77:    t29 = (t0 + 1688U);
    t30 = *((char **)t29);
    t29 = (t0 + 2168U);
    t37 = *((char **)t29);
    memset(t31, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t37))
        goto LAB82;

LAB80:    t29 = (t30 + 4);
    t42 = (t37 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t42))
        goto LAB82;

LAB81:    *((unsigned int *)t31) = 1;

LAB82:    memset(t38, 0, 8);
    t43 = (t31 + 4);
    t18 = *((unsigned int *)t43);
    t19 = (~(t18));
    t20 = *((unsigned int *)t31);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t43) != 0)
        goto LAB85;

LAB86:    t52 = (t38 + 4);
    t25 = *((unsigned int *)t38);
    t26 = *((unsigned int *)t52);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB87;

LAB88:    memcpy(t114, t38, 8);

LAB89:    memset(t116, 0, 8);
    t117 = (t114 + 4);
    t90 = *((unsigned int *)t117);
    t91 = (~(t90));
    t92 = *((unsigned int *)t114);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t117) != 0)
        goto LAB103;

LAB104:    t119 = (t116 + 4);
    t95 = *((unsigned int *)t116);
    t96 = (!(t95));
    t97 = *((unsigned int *)t119);
    t100 = (t96 || t97);
    if (t100 > 0)
        goto LAB105;

LAB106:    memcpy(t191, t116, 8);

LAB107:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t220) != 0)
        goto LAB138;

LAB139:    t228 = *((unsigned int *)t17);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t17 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB140;

LAB141:
LAB142:    goto LAB79;

LAB83:    *((unsigned int *)t38) = 1;
    goto LAB86;

LAB85:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB86;

LAB87:    t53 = (t0 + 2168U);
    t67 = *((char **)t53);
    t53 = ((char*)((ng1)));
    memset(t66, 0, 8);
    t73 = (t67 + 4);
    t78 = (t53 + 4);
    t28 = *((unsigned int *)t67);
    t32 = *((unsigned int *)t53);
    t33 = (t28 ^ t32);
    t34 = *((unsigned int *)t73);
    t35 = *((unsigned int *)t78);
    t36 = (t34 ^ t35);
    t39 = (t33 | t36);
    t40 = *((unsigned int *)t73);
    t41 = *((unsigned int *)t78);
    t45 = (t40 | t41);
    t46 = (~(t45));
    t47 = (t39 & t46);
    if (t47 != 0)
        goto LAB91;

LAB90:    if (t45 != 0)
        goto LAB92;

LAB93:    memset(t74, 0, 8);
    t80 = (t66 + 4);
    t48 = *((unsigned int *)t80);
    t49 = (~(t48));
    t50 = *((unsigned int *)t66);
    t51 = (t50 & t49);
    t54 = (t51 & 1U);
    if (t54 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t80) != 0)
        goto LAB96;

LAB97:    t55 = *((unsigned int *)t38);
    t56 = *((unsigned int *)t74);
    t58 = (t55 & t56);
    *((unsigned int *)t114) = t58;
    t89 = (t38 + 4);
    t106 = (t74 + 4);
    t112 = (t114 + 4);
    t59 = *((unsigned int *)t89);
    t60 = *((unsigned int *)t106);
    t62 = (t59 | t60);
    *((unsigned int *)t112) = t62;
    t63 = *((unsigned int *)t112);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB98;

LAB99:
LAB100:    goto LAB89;

LAB91:    *((unsigned int *)t66) = 1;
    goto LAB93;

LAB92:    t79 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t74) = 1;
    goto LAB97;

LAB96:    t88 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB97;

LAB98:    t65 = *((unsigned int *)t114);
    t68 = *((unsigned int *)t112);
    *((unsigned int *)t114) = (t65 | t68);
    t113 = (t38 + 4);
    t115 = (t74 + 4);
    t69 = *((unsigned int *)t38);
    t70 = (~(t69));
    t71 = *((unsigned int *)t113);
    t72 = (~(t71));
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t115);
    t81 = (~(t77));
    t57 = (t70 & t72);
    t61 = (t76 & t81);
    t82 = (~(t57));
    t83 = (~(t61));
    t84 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t84 & t82);
    t85 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t85 & t83);
    t86 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t86 & t82);
    t87 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t87 & t83);
    goto LAB100;

LAB101:    *((unsigned int *)t116) = 1;
    goto LAB104;

LAB103:    t118 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB104;

LAB105:    t120 = (t0 + 1848U);
    t121 = *((char **)t120);
    t120 = (t0 + 2168U);
    t122 = *((char **)t120);
    memset(t123, 0, 8);
    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB110;

LAB108:    t120 = (t121 + 4);
    t124 = (t122 + 4);
    if (*((unsigned int *)t120) != *((unsigned int *)t124))
        goto LAB110;

LAB109:    *((unsigned int *)t123) = 1;

LAB110:    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t101 = *((unsigned int *)t126);
    t102 = (~(t101));
    t103 = *((unsigned int *)t123);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t126) != 0)
        goto LAB113;

LAB114:    t128 = (t125 + 4);
    t107 = *((unsigned int *)t125);
    t108 = *((unsigned int *)t128);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB115;

LAB116:    memcpy(t153, t125, 8);

LAB117:    memset(t183, 0, 8);
    t184 = (t153 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t153);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t184) != 0)
        goto LAB131;

LAB132:    t192 = *((unsigned int *)t116);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t116 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB107;

LAB111:    *((unsigned int *)t125) = 1;
    goto LAB114;

LAB113:    t127 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB114;

LAB115:    t129 = (t0 + 2168U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng1)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t129 + 4);
    t110 = *((unsigned int *)t130);
    t111 = *((unsigned int *)t129);
    t134 = (t110 ^ t111);
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
        goto LAB119;

LAB118:    if (t141 != 0)
        goto LAB120;

LAB121:    memset(t145, 0, 8);
    t146 = (t131 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t131);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t146) != 0)
        goto LAB124;

LAB125:    t154 = *((unsigned int *)t125);
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
        goto LAB126;

LAB127:
LAB128:    goto LAB117;

LAB119:    *((unsigned int *)t131) = 1;
    goto LAB121;

LAB120:    t144 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB121;

LAB122:    *((unsigned int *)t145) = 1;
    goto LAB125;

LAB124:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB125;

LAB126:    t165 = *((unsigned int *)t153);
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
    t98 = (t170 & t172);
    t99 = (t174 & t176);
    t177 = (~(t98));
    t178 = (~(t99));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    t181 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t181 & t177);
    t182 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t182 & t178);
    goto LAB128;

LAB129:    *((unsigned int *)t183) = 1;
    goto LAB132;

LAB131:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB132;

LAB133:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t116 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t116);
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
    goto LAB135;

LAB136:    *((unsigned int *)t219) = 1;
    goto LAB139;

LAB138:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB139;

LAB140:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t17 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t17);
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
    goto LAB142;

LAB143:    xsi_set_current_line(76, ng0);

LAB146:    xsi_set_current_line(77, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB145;

LAB149:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB150;

LAB151:    *((unsigned int *)t17) = 1;
    goto LAB154;

LAB153:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB154;

LAB155:    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t37 = (t30 + 4);
    t42 = (t29 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t29);
    t39 = (t35 ^ t36);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t42);
    t45 = (t40 ^ t41);
    t46 = (t39 | t45);
    t47 = *((unsigned int *)t37);
    t48 = *((unsigned int *)t42);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB161;

LAB158:    if (t49 != 0)
        goto LAB160;

LAB159:    *((unsigned int *)t31) = 1;

LAB161:    memset(t38, 0, 8);
    t44 = (t31 + 4);
    t54 = *((unsigned int *)t44);
    t55 = (~(t54));
    t56 = *((unsigned int *)t31);
    t58 = (t56 & t55);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t44) != 0)
        goto LAB164;

LAB165:    t60 = *((unsigned int *)t17);
    t62 = *((unsigned int *)t38);
    t63 = (t60 & t62);
    *((unsigned int *)t66) = t63;
    t53 = (t17 + 4);
    t67 = (t38 + 4);
    t73 = (t66 + 4);
    t64 = *((unsigned int *)t53);
    t65 = *((unsigned int *)t67);
    t68 = (t64 | t65);
    *((unsigned int *)t73) = t68;
    t69 = *((unsigned int *)t73);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB166;

LAB167:
LAB168:    goto LAB157;

LAB160:    t43 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB161;

LAB162:    *((unsigned int *)t38) = 1;
    goto LAB165;

LAB164:    t52 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB165;

LAB166:    t71 = *((unsigned int *)t66);
    t72 = *((unsigned int *)t73);
    *((unsigned int *)t66) = (t71 | t72);
    t78 = (t17 + 4);
    t79 = (t38 + 4);
    t75 = *((unsigned int *)t17);
    t76 = (~(t75));
    t77 = *((unsigned int *)t78);
    t81 = (~(t77));
    t82 = *((unsigned int *)t38);
    t83 = (~(t82));
    t84 = *((unsigned int *)t79);
    t85 = (~(t84));
    t57 = (t76 & t81);
    t61 = (t83 & t85);
    t86 = (~(t57));
    t87 = (~(t61));
    t90 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t90 & t86);
    t91 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t91 & t87);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t86);
    t93 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t93 & t87);
    goto LAB168;

LAB169:    xsi_set_current_line(83, ng0);

LAB172:    xsi_set_current_line(84, ng0);
    t88 = ((char*)((ng2)));
    t89 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t89, t88, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB171;

LAB174:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB176;

LAB175:    *((unsigned int *)t13) = 1;
    goto LAB176;

LAB178:    *((unsigned int *)t17) = 1;
    goto LAB181;

LAB180:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB181;

LAB182:    t29 = (t0 + 1688U);
    t30 = *((char **)t29);
    t29 = (t0 + 2488U);
    t37 = *((char **)t29);
    memset(t31, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t37))
        goto LAB187;

LAB185:    t29 = (t30 + 4);
    t42 = (t37 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t42))
        goto LAB187;

LAB186:    *((unsigned int *)t31) = 1;

LAB187:    memset(t38, 0, 8);
    t43 = (t31 + 4);
    t18 = *((unsigned int *)t43);
    t19 = (~(t18));
    t20 = *((unsigned int *)t31);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t43) != 0)
        goto LAB190;

LAB191:    t52 = (t38 + 4);
    t25 = *((unsigned int *)t38);
    t26 = *((unsigned int *)t52);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB192;

LAB193:    memcpy(t114, t38, 8);

LAB194:    memset(t116, 0, 8);
    t117 = (t114 + 4);
    t90 = *((unsigned int *)t117);
    t91 = (~(t90));
    t92 = *((unsigned int *)t114);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t117) != 0)
        goto LAB208;

LAB209:    t119 = (t116 + 4);
    t95 = *((unsigned int *)t116);
    t96 = (!(t95));
    t97 = *((unsigned int *)t119);
    t100 = (t96 || t97);
    if (t100 > 0)
        goto LAB210;

LAB211:    memcpy(t191, t116, 8);

LAB212:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t220) != 0)
        goto LAB243;

LAB244:    t228 = *((unsigned int *)t17);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t17 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB245;

LAB246:
LAB247:    goto LAB184;

LAB188:    *((unsigned int *)t38) = 1;
    goto LAB191;

LAB190:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB191;

LAB192:    t53 = (t0 + 2488U);
    t67 = *((char **)t53);
    t53 = ((char*)((ng1)));
    memset(t66, 0, 8);
    t73 = (t67 + 4);
    t78 = (t53 + 4);
    t28 = *((unsigned int *)t67);
    t32 = *((unsigned int *)t53);
    t33 = (t28 ^ t32);
    t34 = *((unsigned int *)t73);
    t35 = *((unsigned int *)t78);
    t36 = (t34 ^ t35);
    t39 = (t33 | t36);
    t40 = *((unsigned int *)t73);
    t41 = *((unsigned int *)t78);
    t45 = (t40 | t41);
    t46 = (~(t45));
    t47 = (t39 & t46);
    if (t47 != 0)
        goto LAB196;

LAB195:    if (t45 != 0)
        goto LAB197;

LAB198:    memset(t74, 0, 8);
    t80 = (t66 + 4);
    t48 = *((unsigned int *)t80);
    t49 = (~(t48));
    t50 = *((unsigned int *)t66);
    t51 = (t50 & t49);
    t54 = (t51 & 1U);
    if (t54 != 0)
        goto LAB199;

LAB200:    if (*((unsigned int *)t80) != 0)
        goto LAB201;

LAB202:    t55 = *((unsigned int *)t38);
    t56 = *((unsigned int *)t74);
    t58 = (t55 & t56);
    *((unsigned int *)t114) = t58;
    t89 = (t38 + 4);
    t106 = (t74 + 4);
    t112 = (t114 + 4);
    t59 = *((unsigned int *)t89);
    t60 = *((unsigned int *)t106);
    t62 = (t59 | t60);
    *((unsigned int *)t112) = t62;
    t63 = *((unsigned int *)t112);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB203;

LAB204:
LAB205:    goto LAB194;

LAB196:    *((unsigned int *)t66) = 1;
    goto LAB198;

LAB197:    t79 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB198;

LAB199:    *((unsigned int *)t74) = 1;
    goto LAB202;

LAB201:    t88 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB202;

LAB203:    t65 = *((unsigned int *)t114);
    t68 = *((unsigned int *)t112);
    *((unsigned int *)t114) = (t65 | t68);
    t113 = (t38 + 4);
    t115 = (t74 + 4);
    t69 = *((unsigned int *)t38);
    t70 = (~(t69));
    t71 = *((unsigned int *)t113);
    t72 = (~(t71));
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t115);
    t81 = (~(t77));
    t57 = (t70 & t72);
    t61 = (t76 & t81);
    t82 = (~(t57));
    t83 = (~(t61));
    t84 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t84 & t82);
    t85 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t85 & t83);
    t86 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t86 & t82);
    t87 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t87 & t83);
    goto LAB205;

LAB206:    *((unsigned int *)t116) = 1;
    goto LAB209;

LAB208:    t118 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB209;

LAB210:    t120 = (t0 + 1848U);
    t121 = *((char **)t120);
    t120 = (t0 + 2488U);
    t122 = *((char **)t120);
    memset(t123, 0, 8);
    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB215;

LAB213:    t120 = (t121 + 4);
    t124 = (t122 + 4);
    if (*((unsigned int *)t120) != *((unsigned int *)t124))
        goto LAB215;

LAB214:    *((unsigned int *)t123) = 1;

LAB215:    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t101 = *((unsigned int *)t126);
    t102 = (~(t101));
    t103 = *((unsigned int *)t123);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB216;

LAB217:    if (*((unsigned int *)t126) != 0)
        goto LAB218;

LAB219:    t128 = (t125 + 4);
    t107 = *((unsigned int *)t125);
    t108 = *((unsigned int *)t128);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB220;

LAB221:    memcpy(t153, t125, 8);

LAB222:    memset(t183, 0, 8);
    t184 = (t153 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t153);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t184) != 0)
        goto LAB236;

LAB237:    t192 = *((unsigned int *)t116);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t116 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB238;

LAB239:
LAB240:    goto LAB212;

LAB216:    *((unsigned int *)t125) = 1;
    goto LAB219;

LAB218:    t127 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB219;

LAB220:    t129 = (t0 + 2488U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng1)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t129 + 4);
    t110 = *((unsigned int *)t130);
    t111 = *((unsigned int *)t129);
    t134 = (t110 ^ t111);
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
        goto LAB224;

LAB223:    if (t141 != 0)
        goto LAB225;

LAB226:    memset(t145, 0, 8);
    t146 = (t131 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t131);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t146) != 0)
        goto LAB229;

LAB230:    t154 = *((unsigned int *)t125);
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
        goto LAB231;

LAB232:
LAB233:    goto LAB222;

LAB224:    *((unsigned int *)t131) = 1;
    goto LAB226;

LAB225:    t144 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB226;

LAB227:    *((unsigned int *)t145) = 1;
    goto LAB230;

LAB229:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB230;

LAB231:    t165 = *((unsigned int *)t153);
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
    t98 = (t170 & t172);
    t99 = (t174 & t176);
    t177 = (~(t98));
    t178 = (~(t99));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    t181 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t181 & t177);
    t182 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t182 & t178);
    goto LAB233;

LAB234:    *((unsigned int *)t183) = 1;
    goto LAB237;

LAB236:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB237;

LAB238:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t116 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t116);
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
    goto LAB240;

LAB241:    *((unsigned int *)t219) = 1;
    goto LAB244;

LAB243:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB244;

LAB245:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t17 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t17);
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
    goto LAB247;

LAB248:    xsi_set_current_line(90, ng0);

LAB251:    xsi_set_current_line(91, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB250;

LAB253:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB255;

LAB254:    *((unsigned int *)t13) = 1;
    goto LAB255;

LAB257:    *((unsigned int *)t17) = 1;
    goto LAB260;

LAB259:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB260;

LAB261:    t29 = (t0 + 1688U);
    t30 = *((char **)t29);
    t29 = (t0 + 2808U);
    t37 = *((char **)t29);
    memset(t31, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t37))
        goto LAB266;

LAB264:    t29 = (t30 + 4);
    t42 = (t37 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t42))
        goto LAB266;

LAB265:    *((unsigned int *)t31) = 1;

LAB266:    memset(t38, 0, 8);
    t43 = (t31 + 4);
    t18 = *((unsigned int *)t43);
    t19 = (~(t18));
    t20 = *((unsigned int *)t31);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t43) != 0)
        goto LAB269;

LAB270:    t52 = (t38 + 4);
    t25 = *((unsigned int *)t38);
    t26 = *((unsigned int *)t52);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB271;

LAB272:    memcpy(t114, t38, 8);

LAB273:    memset(t116, 0, 8);
    t117 = (t114 + 4);
    t90 = *((unsigned int *)t117);
    t91 = (~(t90));
    t92 = *((unsigned int *)t114);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB285;

LAB286:    if (*((unsigned int *)t117) != 0)
        goto LAB287;

LAB288:    t119 = (t116 + 4);
    t95 = *((unsigned int *)t116);
    t96 = (!(t95));
    t97 = *((unsigned int *)t119);
    t100 = (t96 || t97);
    if (t100 > 0)
        goto LAB289;

LAB290:    memcpy(t191, t116, 8);

LAB291:    memset(t219, 0, 8);
    t220 = (t191 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t191);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB320;

LAB321:    if (*((unsigned int *)t220) != 0)
        goto LAB322;

LAB323:    t228 = *((unsigned int *)t17);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t17 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB324;

LAB325:
LAB326:    goto LAB263;

LAB267:    *((unsigned int *)t38) = 1;
    goto LAB270;

LAB269:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB270;

LAB271:    t53 = (t0 + 2808U);
    t67 = *((char **)t53);
    t53 = ((char*)((ng1)));
    memset(t66, 0, 8);
    t73 = (t67 + 4);
    t78 = (t53 + 4);
    t28 = *((unsigned int *)t67);
    t32 = *((unsigned int *)t53);
    t33 = (t28 ^ t32);
    t34 = *((unsigned int *)t73);
    t35 = *((unsigned int *)t78);
    t36 = (t34 ^ t35);
    t39 = (t33 | t36);
    t40 = *((unsigned int *)t73);
    t41 = *((unsigned int *)t78);
    t45 = (t40 | t41);
    t46 = (~(t45));
    t47 = (t39 & t46);
    if (t47 != 0)
        goto LAB275;

LAB274:    if (t45 != 0)
        goto LAB276;

LAB277:    memset(t74, 0, 8);
    t80 = (t66 + 4);
    t48 = *((unsigned int *)t80);
    t49 = (~(t48));
    t50 = *((unsigned int *)t66);
    t51 = (t50 & t49);
    t54 = (t51 & 1U);
    if (t54 != 0)
        goto LAB278;

LAB279:    if (*((unsigned int *)t80) != 0)
        goto LAB280;

LAB281:    t55 = *((unsigned int *)t38);
    t56 = *((unsigned int *)t74);
    t58 = (t55 & t56);
    *((unsigned int *)t114) = t58;
    t89 = (t38 + 4);
    t106 = (t74 + 4);
    t112 = (t114 + 4);
    t59 = *((unsigned int *)t89);
    t60 = *((unsigned int *)t106);
    t62 = (t59 | t60);
    *((unsigned int *)t112) = t62;
    t63 = *((unsigned int *)t112);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB282;

LAB283:
LAB284:    goto LAB273;

LAB275:    *((unsigned int *)t66) = 1;
    goto LAB277;

LAB276:    t79 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB277;

LAB278:    *((unsigned int *)t74) = 1;
    goto LAB281;

LAB280:    t88 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB281;

LAB282:    t65 = *((unsigned int *)t114);
    t68 = *((unsigned int *)t112);
    *((unsigned int *)t114) = (t65 | t68);
    t113 = (t38 + 4);
    t115 = (t74 + 4);
    t69 = *((unsigned int *)t38);
    t70 = (~(t69));
    t71 = *((unsigned int *)t113);
    t72 = (~(t71));
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t115);
    t81 = (~(t77));
    t57 = (t70 & t72);
    t61 = (t76 & t81);
    t82 = (~(t57));
    t83 = (~(t61));
    t84 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t84 & t82);
    t85 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t85 & t83);
    t86 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t86 & t82);
    t87 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t87 & t83);
    goto LAB284;

LAB285:    *((unsigned int *)t116) = 1;
    goto LAB288;

LAB287:    t118 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB288;

LAB289:    t120 = (t0 + 1848U);
    t121 = *((char **)t120);
    t120 = (t0 + 2808U);
    t122 = *((char **)t120);
    memset(t123, 0, 8);
    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB294;

LAB292:    t120 = (t121 + 4);
    t124 = (t122 + 4);
    if (*((unsigned int *)t120) != *((unsigned int *)t124))
        goto LAB294;

LAB293:    *((unsigned int *)t123) = 1;

LAB294:    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t101 = *((unsigned int *)t126);
    t102 = (~(t101));
    t103 = *((unsigned int *)t123);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB295;

LAB296:    if (*((unsigned int *)t126) != 0)
        goto LAB297;

LAB298:    t128 = (t125 + 4);
    t107 = *((unsigned int *)t125);
    t108 = *((unsigned int *)t128);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB299;

LAB300:    memcpy(t153, t125, 8);

LAB301:    memset(t183, 0, 8);
    t184 = (t153 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t153);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB313;

LAB314:    if (*((unsigned int *)t184) != 0)
        goto LAB315;

LAB316:    t192 = *((unsigned int *)t116);
    t193 = *((unsigned int *)t183);
    t194 = (t192 | t193);
    *((unsigned int *)t191) = t194;
    t195 = (t116 + 4);
    t196 = (t183 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB317;

LAB318:
LAB319:    goto LAB291;

LAB295:    *((unsigned int *)t125) = 1;
    goto LAB298;

LAB297:    t127 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB298;

LAB299:    t129 = (t0 + 2808U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng1)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t129 + 4);
    t110 = *((unsigned int *)t130);
    t111 = *((unsigned int *)t129);
    t134 = (t110 ^ t111);
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
        goto LAB303;

LAB302:    if (t141 != 0)
        goto LAB304;

LAB305:    memset(t145, 0, 8);
    t146 = (t131 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t131);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB306;

LAB307:    if (*((unsigned int *)t146) != 0)
        goto LAB308;

LAB309:    t154 = *((unsigned int *)t125);
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
        goto LAB310;

LAB311:
LAB312:    goto LAB301;

LAB303:    *((unsigned int *)t131) = 1;
    goto LAB305;

LAB304:    t144 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB305;

LAB306:    *((unsigned int *)t145) = 1;
    goto LAB309;

LAB308:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB309;

LAB310:    t165 = *((unsigned int *)t153);
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
    t98 = (t170 & t172);
    t99 = (t174 & t176);
    t177 = (~(t98));
    t178 = (~(t99));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    t181 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t181 & t177);
    t182 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t182 & t178);
    goto LAB312;

LAB313:    *((unsigned int *)t183) = 1;
    goto LAB316;

LAB315:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB316;

LAB317:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t116 + 4);
    t206 = (t183 + 4);
    t207 = *((unsigned int *)t205);
    t208 = (~(t207));
    t209 = *((unsigned int *)t116);
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
    goto LAB319;

LAB320:    *((unsigned int *)t219) = 1;
    goto LAB323;

LAB322:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB323;

LAB324:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t17 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t17);
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
    goto LAB326;

LAB327:    xsi_set_current_line(97, ng0);

LAB330:    xsi_set_current_line(98, ng0);
    t265 = ((char*)((ng2)));
    t266 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t266, t265, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB329;

}


extern void work_m_00000000001856881599_3092946469_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000001856881599_3092946469", "isim/tb_isim_beh.exe.sim/work/m_00000000001856881599_3092946469.didat");
	xsi_register_executes(pe);
}
