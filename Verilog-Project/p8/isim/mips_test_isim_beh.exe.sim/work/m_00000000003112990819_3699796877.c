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
static const char *ng0 = "C:/ashdaisdh/p8/onoff.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {32556U, 0U};
static unsigned int ng3[] = {32560U, 0U};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t6[8];
    char t17[8];
    char t44[8];
    char t45[8];
    char t48[8];
    char t50[8];
    char t52[8];
    char t58[8];
    char t59[8];
    char t60[8];
    char t61[8];
    char t72[8];
    char t99[8];
    char t100[8];
    char t103[8];
    char t105[8];
    char t107[8];
    char *t1;
    char *t2;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t46;
    char *t47;
    char *t49;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
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
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t101;
    char *t102;
    char *t104;
    char *t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 1073741823U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1073741823U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t6, 30, t2, 2);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB7;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t17) = 1;

LAB7:    memset(t4, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t33) != 0)
        goto LAB10;

LAB11:    t40 = (t4 + 4);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t40);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t40) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t58, 8);

LAB20:    t113 = (t0 + 4048);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    memcpy(t117, t3, 8);
    xsi_driver_vfirst_trans(t113, 0, 31);
    t118 = (t0 + 3968);
    *((int *)t118) = 1;

LAB1:    return;
LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t39 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t46 = (t0 + 1368U);
    t47 = *((char **)t46);
    xsi_vlogtype_concat(t45, 8, 8, 1U, t47, 8);
    t46 = (t0 + 1528U);
    t49 = *((char **)t46);
    xsi_vlogtype_concat(t48, 8, 8, 1U, t49, 8);
    t46 = (t0 + 1688U);
    t51 = *((char **)t46);
    xsi_vlogtype_concat(t50, 8, 8, 1U, t51, 8);
    t46 = (t0 + 1848U);
    t53 = *((char **)t46);
    xsi_vlogtype_concat(t52, 8, 8, 1U, t53, 8);
    xsi_vlogtype_concat(t44, 32, 32, 4U, t52, 8, t50, 8, t48, 8, t45, 8);
    goto LAB13;

LAB14:    t46 = ((char*)((ng1)));
    t62 = (t0 + 1048U);
    t63 = *((char **)t62);
    memset(t61, 0, 8);
    t62 = (t61 + 4);
    t64 = (t63 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (t65 >> 0);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 0);
    *((unsigned int *)t62) = t68;
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 1073741823U);
    t70 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t70 & 1073741823U);
    xsi_vlogtype_concat(t60, 32, 32, 2U, t61, 30, t46, 2);
    t71 = ((char*)((ng3)));
    memset(t72, 0, 8);
    t73 = (t60 + 4);
    t74 = (t71 + 4);
    t75 = *((unsigned int *)t60);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = *((unsigned int *)t73);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = (t77 | t80);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t74);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB24;

LAB21:    if (t84 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t72) = 1;

LAB24:    memset(t59, 0, 8);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t72);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t88) != 0)
        goto LAB27;

LAB28:    t95 = (t59 + 4);
    t96 = *((unsigned int *)t59);
    t97 = *((unsigned int *)t95);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB29;

LAB30:    t109 = *((unsigned int *)t59);
    t110 = (~(t109));
    t111 = *((unsigned int *)t95);
    t112 = (t110 || t111);
    if (t112 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t95) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t59) > 0)
        goto LAB35;

LAB36:    memcpy(t58, t101, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t44, 32, t58, 32);
    goto LAB20;

LAB18:    memcpy(t3, t44, 8);
    goto LAB20;

LAB23:    t87 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t59) = 1;
    goto LAB28;

LAB27:    t94 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB28;

LAB29:    t101 = (t0 + 2008U);
    t102 = *((char **)t101);
    xsi_vlogtype_concat(t100, 8, 8, 1U, t102, 8);
    t101 = (t0 + 2168U);
    t104 = *((char **)t101);
    xsi_vlogtype_concat(t103, 8, 8, 1U, t104, 8);
    t101 = (t0 + 2328U);
    t106 = *((char **)t101);
    xsi_vlogtype_concat(t105, 8, 8, 1U, t106, 8);
    t101 = (t0 + 2488U);
    t108 = *((char **)t101);
    xsi_vlogtype_concat(t107, 8, 8, 1U, t108, 8);
    xsi_vlogtype_concat(t99, 32, 32, 4U, t107, 8, t105, 8, t103, 8, t100, 8);
    goto LAB30;

LAB31:    t101 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t58, 32, t99, 32, t101, 32);
    goto LAB37;

LAB35:    memcpy(t58, t99, 8);
    goto LAB37;

}


extern void work_m_00000000003112990819_3699796877_init()
{
	static char *pe[] = {(void *)Cont_35_0};
	xsi_register_didat("work_m_00000000003112990819_3699796877", "isim/mips_test_isim_beh.exe.sim/work/m_00000000003112990819_3699796877.didat");
	xsi_register_executes(pe);
}
