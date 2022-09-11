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
static const char *ng0 = "C:/ashdaisdh/p5/F.v";
static int ng1[] = {1, 0};
static int ng2[] = {31, 0};



static void Always_59_0(char *t0)
{
    char t7[8];
    char t9[8];
    char t23[8];
    char t27[8];
    char t35[8];
    char t67[8];
    char t81[8];
    char t85[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB8;

LAB6:    t4 = (t5 + 4);
    t8 = (t6 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t8))
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB8:    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t10) != 0)
        goto LAB11;

LAB12:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB13;

LAB14:    memcpy(t35, t9, 8);

LAB15:    memset(t67, 0, 8);
    t68 = (t35 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t35);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t68) != 0)
        goto LAB30;

LAB31:    t75 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB32;

LAB33:    memcpy(t93, t67, 8);

LAB34:    t125 = (t93 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB53;

LAB51:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB53;

LAB52:    *((unsigned int *)t7) = 1;

LAB53:    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t6) != 0)
        goto LAB56;

LAB57:    t10 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB58;

LAB59:    memcpy(t35, t9, 8);

LAB60:    memset(t67, 0, 8);
    t49 = (t35 + 4);
    t69 = *((unsigned int *)t49);
    t70 = (~(t69));
    t71 = *((unsigned int *)t35);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t49) != 0)
        goto LAB75;

LAB76:    t68 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB77;

LAB78:    memcpy(t93, t67, 8);

LAB79:    t107 = (t93 + 4);
    t126 = *((unsigned int *)t107);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(67, ng0);

LAB96:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB94:
LAB49:    goto LAB2;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB12;

LAB11:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB17;

LAB16:    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t22) < *((unsigned int *)t21))
        goto LAB19;

LAB18:    *((unsigned int *)t23) = 1;

LAB19:    memset(t27, 0, 8);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t28) != 0)
        goto LAB23;

LAB24:    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t9 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t26 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t27) = 1;
    goto LAB24;

LAB23:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB24;

LAB25:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t9 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t9);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB27;

LAB28:    *((unsigned int *)t67) = 1;
    goto LAB31;

LAB30:    t74 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB31;

LAB32:    t79 = (t0 + 1528U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng2)));
    memset(t81, 0, 8);
    t82 = (t80 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB36;

LAB35:    t83 = (t79 + 4);
    if (*((unsigned int *)t83) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t80) > *((unsigned int *)t79))
        goto LAB38;

LAB37:    *((unsigned int *)t81) = 1;

LAB38:    memset(t85, 0, 8);
    t86 = (t81 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t81);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t86) != 0)
        goto LAB42;

LAB43:    t94 = *((unsigned int *)t67);
    t95 = *((unsigned int *)t85);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t67 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t84 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t85) = 1;
    goto LAB43;

LAB42:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB43;

LAB44:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t67 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t67);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t85);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB46;

LAB47:    xsi_set_current_line(61, ng0);

LAB50:    xsi_set_current_line(62, ng0);
    t131 = (t0 + 1368U);
    t132 = *((char **)t131);
    t131 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t131, t132, 0, 0, 32, 0LL);
    goto LAB49;

LAB54:    *((unsigned int *)t9) = 1;
    goto LAB57;

LAB56:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB58:    t16 = (t0 + 1848U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t21 = (t17 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB62;

LAB61:    t22 = (t16 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t17) < *((unsigned int *)t16))
        goto LAB64;

LAB63:    *((unsigned int *)t23) = 1;

LAB64:    memset(t27, 0, 8);
    t25 = (t23 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t25) != 0)
        goto LAB68;

LAB69:    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t28 = (t9 + 4);
    t34 = (t27 + 4);
    t39 = (t35 + 4);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t39);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB60;

LAB62:    t24 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t27) = 1;
    goto LAB69;

LAB68:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB69;

LAB70:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t35) = (t47 | t48);
    t40 = (t9 + 4);
    t41 = (t27 + 4);
    t51 = *((unsigned int *)t9);
    t52 = (~(t51));
    t53 = *((unsigned int *)t40);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t41);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t63 & t61);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB72;

LAB73:    *((unsigned int *)t67) = 1;
    goto LAB76;

LAB75:    t50 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB76;

LAB77:    t74 = (t0 + 1848U);
    t75 = *((char **)t74);
    t74 = ((char*)((ng2)));
    memset(t81, 0, 8);
    t79 = (t75 + 4);
    if (*((unsigned int *)t79) != 0)
        goto LAB81;

LAB80:    t80 = (t74 + 4);
    if (*((unsigned int *)t80) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t75) > *((unsigned int *)t74))
        goto LAB83;

LAB82:    *((unsigned int *)t81) = 1;

LAB83:    memset(t85, 0, 8);
    t83 = (t81 + 4);
    t87 = *((unsigned int *)t83);
    t88 = (~(t87));
    t89 = *((unsigned int *)t81);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t83) != 0)
        goto LAB87;

LAB88:    t94 = *((unsigned int *)t67);
    t95 = *((unsigned int *)t85);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t86 = (t67 + 4);
    t92 = (t85 + 4);
    t97 = (t93 + 4);
    t100 = *((unsigned int *)t86);
    t101 = *((unsigned int *)t92);
    t102 = (t100 | t101);
    *((unsigned int *)t97) = t102;
    t103 = *((unsigned int *)t97);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB79;

LAB81:    t82 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB83;

LAB85:    *((unsigned int *)t85) = 1;
    goto LAB88;

LAB87:    t84 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB88;

LAB89:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t97);
    *((unsigned int *)t93) = (t105 | t106);
    t98 = (t67 + 4);
    t99 = (t85 + 4);
    t109 = *((unsigned int *)t67);
    t110 = (~(t109));
    t111 = *((unsigned int *)t98);
    t112 = (~(t111));
    t113 = *((unsigned int *)t85);
    t114 = (~(t113));
    t115 = *((unsigned int *)t99);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t121 & t119);
    t122 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB91;

LAB92:    xsi_set_current_line(64, ng0);

LAB95:    xsi_set_current_line(65, ng0);
    t108 = (t0 + 1688U);
    t125 = *((char **)t108);
    t108 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t108, t125, 0, 0, 32, 0LL);
    goto LAB94;

}


extern void work_m_00000000001845889732_3744071037_init()
{
	static char *pe[] = {(void *)Always_59_0};
	xsi_register_didat("work_m_00000000001845889732_3744071037", "isim/datapath_isim_beh.exe.sim/work/m_00000000001845889732_3744071037.didat");
	xsi_register_executes(pe);
}
