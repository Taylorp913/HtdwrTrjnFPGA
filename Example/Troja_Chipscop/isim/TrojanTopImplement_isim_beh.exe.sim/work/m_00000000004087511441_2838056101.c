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
static const char *ng0 = "C:/Users/Taylor/Documents/GitHub/HtdwrTrjnFPGA/Example/Troja_Chipscop/TrojanTopImplement _old.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {0, 0, 0, 0};
static unsigned int ng4[] = {4294967295U, 0U, 0U, 0U};
static int ng5[] = {17, 0};
static int ng6[] = {7, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static int ng9[] = {4, 0};
static int ng10[] = {5, 0};
static int ng11[] = {6, 0};
static int ng12[] = {0, 0, 0, 0, 0, 0};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {43690U, 0U};



static void Always_107_0(char *t0)
{
    char t13[8];
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 11696);
    *((int *)t2) = 1;
    t3 = (t0 + 6944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4392);
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
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(110, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(113, ng0);
    t19 = (t0 + 1912U);
    t20 = *((char **)t19);
    t19 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 1, 0LL);
    goto LAB15;

}

static void Always_118_1(char *t0)
{
    char t13[8];
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 11712);
    *((int *)t2) = 1;
    t3 = (t0 + 7192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4392);
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
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(120, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(123, ng0);
    t19 = (t0 + 2072U);
    t20 = *((char **)t19);
    t19 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 1, 0LL);
    goto LAB15;

}

static void Always_128_2(char *t0)
{
    char t13[8];
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 11728);
    *((int *)t2) = 1;
    t3 = (t0 + 7440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4392);
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
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(130, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(133, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 64, 0LL);
    goto LAB15;

}

static void Always_145_3(char *t0)
{
    char t13[8];
    char t19[8];
    char t29[8];
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
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
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 11744);
    *((int *)t2) = 1;
    t3 = (t0 + 7688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4392);
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
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4072);
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
        goto LAB23;

LAB21:    if (*((unsigned int *)t5) == 0)
        goto LAB20;

LAB22:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB23:    t12 = (t0 + 4232);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t27 = (t21 + 4);
    t14 = *((unsigned int *)t27);
    t15 = (~(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t27) == 0)
        goto LAB24;

LAB26:    t28 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t28) = 1;

LAB27:    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t19);
    t24 = (t22 & t23);
    *((unsigned int *)t29) = t24;
    t30 = (t13 + 4);
    t31 = (t19 + 4);
    t32 = (t29 + 4);
    t25 = *((unsigned int *)t30);
    t26 = *((unsigned int *)t31);
    t33 = (t25 | t26);
    *((unsigned int *)t32) = t33;
    t34 = *((unsigned int *)t32);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB28;

LAB29:
LAB30:    t56 = (t29 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t29);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB33:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(147, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(150, ng0);
    t20 = (t0 + 1912U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t20) == 0)
        goto LAB16;

LAB18:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB19:    t28 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t28, t19, 0, 0, 1, 0LL);
    goto LAB15;

LAB16:    *((unsigned int *)t19) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t19) = 1;
    goto LAB27;

LAB28:    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    *((unsigned int *)t29) = (t36 | t37);
    t38 = (t13 + 4);
    t39 = (t19 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t19);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t52 & t50);
    t53 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t53 & t51);
    t54 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t54 & t50);
    t55 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t55 & t51);
    goto LAB30;

LAB31:    xsi_set_current_line(153, ng0);
    t62 = ((char*)((ng2)));
    t63 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t63, t62, 0, 0, 1, 0LL);
    goto LAB33;

}

static void Always_161_4(char *t0)
{
    char t13[8];
    char t19[8];
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
    char *t20;
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

LAB0:    t1 = (t0 + 7904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 11760);
    *((int *)t2) = 1;
    t3 = (t0 + 7936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(161, ng0);

LAB5:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4392);
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
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t13) = 1;

LAB23:    t21 = (t13 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t29 = (t26 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB26:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(163, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(166, ng0);
    t20 = (t0 + 1912U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t20) == 0)
        goto LAB16;

LAB18:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB19:    t28 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t28, t19, 0, 0, 1, 0LL);
    goto LAB15;

LAB16:    *((unsigned int *)t19) = 1;
    goto LAB19;

LAB22:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(169, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 1, 0LL);
    goto LAB26;

}

static void Always_178_5(char *t0)
{
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 8152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 11776);
    *((int *)t2) = 1;
    t3 = (t0 + 8184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(178, ng0);

LAB5:    xsi_set_current_line(179, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(180, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(183, ng0);
    t11 = (t0 + 3912);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB15;

LAB12:    if (t27 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t15) = 1;

LAB15:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 5, t5, 32);
    t11 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 5, 0LL);

LAB18:    goto LAB11;

LAB14:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(184, ng0);
    t37 = ((char*)((ng2)));
    t38 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 5, 0LL);
    goto LAB18;

}

static void Always_194_6(char *t0)
{
    char t13[8];
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 8400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 11792);
    *((int *)t2) = 1;
    t3 = (t0 + 8432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(194, ng0);

LAB5:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
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
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(196, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(199, ng0);
    t28 = (t0 + 2232U);
    t29 = *((char **)t28);
    t28 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 64, 0LL);
    goto LAB15;

}

static void Always_208_7(char *t0)
{
    char t13[8];
    char t31[8];
    char t42[8];
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 8648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 11808);
    *((int *)t2) = 1;
    t3 = (t0 + 8680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(208, ng0);

LAB5:    xsi_set_current_line(209, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
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
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB19;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB19:    t22 = (t0 + 4872);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    t33 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = *((unsigned int *)t30);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t33);
    t34 = (t26 ^ t27);
    t35 = (t25 | t34);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t33);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB23;

LAB20:    if (t38 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t31) = 1;

LAB23:    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t31);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t13 + 4);
    t47 = (t31 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB24;

LAB25:
LAB26:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB29:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(210, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(213, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB15;

LAB18:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB19;

LAB22:    t41 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB23;

LAB24:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t13 + 4);
    t57 = (t31 + 4);
    t58 = *((unsigned int *)t13);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t31);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB26;

LAB27:    xsi_set_current_line(216, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 1, 0LL);
    goto LAB29;

}

static void Always_225_8(char *t0)
{
    char t16[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 8896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 11824);
    *((int *)t2) = 1;
    t3 = (t0 + 8928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(225, ng0);

LAB5:    xsi_set_current_line(226, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(226, ng0);

LAB9:    xsi_set_current_line(227, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(232, ng0);
    t11 = (t0 + 4712);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 472);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t13 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t15);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB16;

LAB13:    if (t27 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t16) = 1;

LAB16:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 16, t5, 32);
    t11 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 16, 0LL);

LAB19:    goto LAB12;

LAB15:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(232, ng0);

LAB20:    xsi_set_current_line(233, ng0);
    t37 = ((char*)((ng2)));
    t38 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 16, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 3, t5, 32);
    t11 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 3, 0LL);
    goto LAB19;

}

static void Always_245_9(char *t0)
{
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 9144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 11840);
    *((int *)t2) = 1;
    t3 = (t0 + 9176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(245, ng0);

LAB5:    xsi_set_current_line(246, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(249, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(247, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(250, ng0);
    t11 = (t0 + 4712);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB15;

LAB12:    if (t27 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t15) = 1;

LAB15:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:    goto LAB11;

LAB14:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(251, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 1, 0LL);
    goto LAB18;

}

static void Always_258_10(char *t0)
{
    char t15[8];
    char t42[8];
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 11856);
    *((int *)t2) = 1;
    t3 = (t0 + 9424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(258, ng0);

LAB5:    xsi_set_current_line(259, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(260, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(263, ng0);
    t11 = (t0 + 4712);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB15;

LAB12:    if (t27 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t15) = 1;

LAB15:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB18:    goto LAB11;

LAB14:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(264, ng0);
    t37 = (t0 + 4872);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);

LAB19:    t40 = ((char*)((ng2)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t40, 32);
    if (t41 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng1)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng11)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng6)));
    t41 = xsi_vlog_unsigned_case_compare(t39, 3, t2, 32);
    if (t41 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB18;

LAB20:    xsi_set_current_line(265, ng0);
    t43 = (t0 + 4552);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t42, 0, 8);
    t46 = (t42 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t42) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t52 & 255U);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 255U);
    t54 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t54, t42, 0, 0, 8, 0LL);
    goto LAB36;

LAB22:    xsi_set_current_line(266, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 8);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 8);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t13 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 8, 0LL);
    goto LAB36;

LAB24:    xsi_set_current_line(267, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 16);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 16);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t13 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 8, 0LL);
    goto LAB36;

LAB26:    xsi_set_current_line(268, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 24);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 24);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t13 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 8, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(269, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 8);
    t13 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t14 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 8, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(270, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 8);
    t13 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 8);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 8);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t14 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 8, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(271, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 8);
    t13 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 16);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 16);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t14 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 8, 0LL);
    goto LAB36;

LAB34:    xsi_set_current_line(272, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 8);
    t13 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 24);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 24);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t14 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 8, 0LL);
    goto LAB36;

}

static void Always_283_11(char *t0)
{
    char t26[8];
    char t35[8];
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
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
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

LAB0:    t1 = (t0 + 9640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(283, ng0);
    t2 = (t0 + 11872);
    *((int *)t2) = 1;
    t3 = (t0 + 9672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(283, ng0);

LAB5:    xsi_set_current_line(284, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(287, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(285, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(288, ng0);
    t11 = (t0 + 5512);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(292, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB14:    goto LAB11;

LAB12:    xsi_set_current_line(290, ng0);
    t20 = (t0 + 5192);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 5992);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 0);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t36 = *((unsigned int *)t22);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    *((unsigned int *)t35) = t38;
    t39 = (t22 + 4);
    t40 = (t26 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB15;

LAB16:
LAB17:    t49 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t49, t35, 0, 0, 1, 0LL);
    goto LAB14;

LAB15:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    goto LAB17;

}

static void Always_302_12(char *t0)
{
    char t13[8];
    char t23[16];
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
    char *t19;
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
    char *t31;

LAB0:    t1 = (t0 + 9888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(302, ng0);
    t2 = (t0 + 11888);
    *((int *)t2) = 1;
    t3 = (t0 + 9920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(302, ng0);

LAB5:    xsi_set_current_line(303, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(306, ng0);
    t2 = (t0 + 3432);
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
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(304, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(307, ng0);
    t19 = (t0 + 3752);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    xsi_vlog_unsigned_equal(t23, 64, t21, 64, t22, 64);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:    goto LAB15;

LAB16:    xsi_set_current_line(308, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB18;

}

static void Always_318_13(char *t0)
{
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
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 10136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 11904);
    *((int *)t2) = 1;
    t3 = (t0 + 10168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(318, ng0);

LAB5:    xsi_set_current_line(319, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(322, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5512);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(320, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5512);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(323, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5512);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(325, ng0);
    t11 = (t0 + 5512);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 5512);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_330_14(char *t0)
{
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

LAB0:    t1 = (t0 + 10384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(330, ng0);
    t2 = (t0 + 11920);
    *((int *)t2) = 1;
    t3 = (t0 + 10416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(330, ng0);

LAB5:    xsi_set_current_line(331, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(334, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5672);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(332, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5672);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_340_15(char *t0)
{
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

LAB0:    t1 = (t0 + 10632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 11936);
    *((int *)t2) = 1;
    t3 = (t0 + 10664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(340, ng0);

LAB5:    xsi_set_current_line(341, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(344, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(342, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(345, ng0);
    t11 = (t0 + 2392U);
    t12 = *((char **)t11);
    t11 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 64, 0LL);
    goto LAB11;

}

static void Always_350_16(char *t0)
{
    char t20[24];
    char t21[24];
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
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 10880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(350, ng0);
    t2 = (t0 + 11952);
    *((int *)t2) = 1;
    t3 = (t0 + 10912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(350, ng0);

LAB5:    xsi_set_current_line(351, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(352, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5992);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 80, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(355, ng0);
    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t20, 80, 80, 2U, t4, 64, t2, 16);
    t3 = (t0 + 5992);
    xsi_vlogvar_wait_assign_value(t3, t20, 0, 0, 80, 0LL);

LAB14:    goto LAB11;

LAB12:    xsi_set_current_line(356, ng0);
    t22 = (t0 + 5992);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_get_part_select_value(t21, 79, t24, 79, 1);
    t25 = ((char*)((ng13)));
    xsi_vlogtype_concat(t20, 80, 80, 2U, t25, 1, t21, 79);
    t26 = (t0 + 5992);
    xsi_vlogvar_wait_assign_value(t26, t20, 0, 0, 80, 0LL);
    goto LAB14;

}

static void Always_364_17(char *t0)
{
    char t13[8];
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 11128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(364, ng0);
    t2 = (t0 + 11968);
    *((int *)t2) = 1;
    t3 = (t0 + 11160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(364, ng0);

LAB5:    xsi_set_current_line(365, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(368, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(371, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 12, t5, 32);
    t11 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 12, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(366, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 12, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(369, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 12, 0LL);
    goto LAB15;

}

static void Always_375_18(char *t0)
{
    char t13[8];
    char t28[8];
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 11376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(375, ng0);
    t2 = (t0 + 11984);
    *((int *)t2) = 1;
    t3 = (t0 + 11408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(375, ng0);

LAB5:    xsi_set_current_line(376, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(382, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(377, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(380, ng0);
    t29 = (t0 + 5192);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t32) == 0)
        goto LAB16;

LAB18:    t38 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t38) = 1;

LAB19:    t39 = (t28 + 4);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (~(t41));
    *((unsigned int *)t28) = t42;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB21;

LAB20:    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 1U);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & 1U);
    t49 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t49, t28, 0, 0, 1, 0LL);
    goto LAB15;

LAB16:    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB21:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t28) = (t43 | t44);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t45 | t46);
    goto LAB20;

}


extern void work_m_00000000004087511441_2838056101_init()
{
	static char *pe[] = {(void *)Always_107_0,(void *)Always_118_1,(void *)Always_128_2,(void *)Always_145_3,(void *)Always_161_4,(void *)Always_178_5,(void *)Always_194_6,(void *)Always_208_7,(void *)Always_225_8,(void *)Always_245_9,(void *)Always_258_10,(void *)Always_283_11,(void *)Always_302_12,(void *)Always_318_13,(void *)Always_330_14,(void *)Always_340_15,(void *)Always_350_16,(void *)Always_364_17,(void *)Always_375_18};
	xsi_register_didat("work_m_00000000004087511441_2838056101", "isim/TrojanTopImplement_isim_beh.exe.sim/work/m_00000000004087511441_2838056101.didat");
	xsi_register_executes(pe);
}
