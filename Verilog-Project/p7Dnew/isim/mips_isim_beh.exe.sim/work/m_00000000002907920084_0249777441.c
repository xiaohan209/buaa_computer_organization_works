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
static const char *ng0 = "C:/ashdaisdh/p7D/bridge.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {32512U, 0U};
static unsigned int ng3[] = {32523U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {32528U, 0U};
static unsigned int ng6[] = {32539U, 0U};
static int ng7[] = {1, 0};



static void Cont_34_0(char *t0)
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

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 4736);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1073741823U;
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
    xsi_driver_vfirst_trans(t2, 0, 29);
    t16 = (t0 + 4624);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4800);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 4640);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_37_2(char *t0)
{
    char t4[8];
    char t8[8];
    char t12[8];
    char t24[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
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
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t7, 30, t5, 2);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;

LAB9:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t40, t12, 8);

LAB17:    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t5, 30, t2, 2);
    t3 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB35;

LAB34:    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t3))
        goto LAB37;

LAB36:    *((unsigned int *)t8) = 1;

LAB37:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t10) != 0)
        goto LAB41;

LAB42:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB43;

LAB44:    memcpy(t40, t12, 8);

LAB45:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(48, ng0);

LAB62:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB60:
LAB32:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t5, 30, t2, 2);
    t3 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB64;

LAB63:    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t4) < *((unsigned int *)t3))
        goto LAB66;

LAB65:    *((unsigned int *)t8) = 1;

LAB66:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t10) != 0)
        goto LAB70;

LAB71:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB72;

LAB73:    memcpy(t40, t12, 8);

LAB74:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t5, 30, t2, 2);
    t3 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB92;

LAB91:    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB92;

LAB95:    if (*((unsigned int *)t4) < *((unsigned int *)t3))
        goto LAB94;

LAB93:    *((unsigned int *)t8) = 1;

LAB94:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t10) != 0)
        goto LAB98;

LAB99:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB100;

LAB101:    memcpy(t40, t12, 8);

LAB102:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(61, ng0);

LAB119:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB117:
LAB89:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t25 = ((char*)((ng1)));
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t27, 30, t25, 2);
    t26 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t24 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB18:    t30 = (t26 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t24) > *((unsigned int *)t26))
        goto LAB21;

LAB20:    *((unsigned int *)t28) = 1;

LAB21:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB26:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t32) = 1;
    goto LAB26;

LAB25:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB27:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB29;

LAB30:    xsi_set_current_line(38, ng0);

LAB33:    xsi_set_current_line(39, ng0);
    t78 = (t0 + 1368U);
    t79 = *((char **)t78);
    t78 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t78, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t12) = 1;
    goto LAB42;

LAB41:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB43:    t19 = ((char*)((ng1)));
    t20 = (t0 + 1048U);
    t25 = *((char **)t20);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t25, 30, t19, 2);
    t20 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB47;

LAB46:    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t24) > *((unsigned int *)t20))
        goto LAB49;

LAB48:    *((unsigned int *)t28) = 1;

LAB49:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t30) != 0)
        goto LAB53;

LAB54:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB45;

LAB47:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t32) = 1;
    goto LAB54;

LAB53:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB54;

LAB55:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB57;

LAB58:    xsi_set_current_line(43, ng0);

LAB61:    xsi_set_current_line(44, ng0);
    t55 = (t0 + 1368U);
    t72 = *((char **)t55);
    t55 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t55, t72, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB60;

LAB64:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB68:    *((unsigned int *)t12) = 1;
    goto LAB71;

LAB70:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB71;

LAB72:    t19 = ((char*)((ng1)));
    t20 = (t0 + 1048U);
    t25 = *((char **)t20);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t25, 30, t19, 2);
    t20 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB76;

LAB75:    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t24) > *((unsigned int *)t20))
        goto LAB78;

LAB77:    *((unsigned int *)t28) = 1;

LAB78:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t30) != 0)
        goto LAB82;

LAB83:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB74;

LAB76:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB78;

LAB80:    *((unsigned int *)t32) = 1;
    goto LAB83;

LAB82:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB83;

LAB84:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB86;

LAB87:    xsi_set_current_line(53, ng0);

LAB90:    xsi_set_current_line(54, ng0);
    t55 = (t0 + 1528U);
    t72 = *((char **)t55);
    t55 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t55, t72, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB89;

LAB92:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB94;

LAB96:    *((unsigned int *)t12) = 1;
    goto LAB99;

LAB98:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB99;

LAB100:    t19 = ((char*)((ng1)));
    t20 = (t0 + 1048U);
    t25 = *((char **)t20);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t25, 30, t19, 2);
    t20 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB104;

LAB103:    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB104;

LAB107:    if (*((unsigned int *)t24) > *((unsigned int *)t20))
        goto LAB106;

LAB105:    *((unsigned int *)t28) = 1;

LAB106:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t30) != 0)
        goto LAB110;

LAB111:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB112;

LAB113:
LAB114:    goto LAB102;

LAB104:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB106;

LAB108:    *((unsigned int *)t32) = 1;
    goto LAB111;

LAB110:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB111;

LAB112:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB114;

LAB115:    xsi_set_current_line(57, ng0);

LAB118:    xsi_set_current_line(58, ng0);
    t55 = (t0 + 1688U);
    t72 = *((char **)t55);
    t55 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t55, t72, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB117;

}


extern void work_m_00000000002907920084_0249777441_init()
{
	static char *pe[] = {(void *)Cont_34_0,(void *)Cont_35_1,(void *)Always_37_2};
	xsi_register_didat("work_m_00000000002907920084_0249777441", "isim/mips_isim_beh.exe.sim/work/m_00000000002907920084_0249777441.didat");
	xsi_register_executes(pe);
}
