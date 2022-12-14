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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001433195518_4027410654_init();
    work_m_00000000000944331242_2700942075_init();
    work_m_00000000001807127505_2885957937_init();
    work_m_00000000002958285444_4046562011_init();
    work_m_00000000001022091058_2482856314_init();
    work_m_00000000001410290359_1545735058_init();
    work_m_00000000000346835466_3396484815_init();
    work_m_00000000000803720302_4221183058_init();
    work_m_00000000003103439282_1621229167_init();
    work_m_00000000002490064526_1095592158_init();
    work_m_00000000002100422087_3306708044_init();
    work_m_00000000001627452356_1520674260_init();
    work_m_00000000002428295681_2200468805_init();
    work_m_00000000000572880401_4133369262_init();
    work_m_00000000002862589816_0742349510_init();
    work_m_00000000000060342834_3744071037_init();
    work_m_00000000000643610269_0886308060_init();
    work_m_00000000000924106195_0677194054_init();
    work_m_00000000002938702089_4169514396_init();
    work_m_00000000000177177971_2589504913_init();
    work_m_00000000002146466622_2821639659_init();
    work_m_00000000004059358370_4140825114_init();
    work_m_00000000001020133804_2924402094_init();
    work_m_00000000000344493569_2616621562_init();
    work_m_00000000003117159079_0099042534_init();
    work_m_00000000000281036172_2727240708_init();
    work_m_00000000001022091058_2772510191_init();
    work_m_00000000004069309862_3092946469_init();
    work_m_00000000002097782095_3027548060_init();
    work_m_00000000001481321991_3877310806_init();
    work_m_00000000002047498008_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
