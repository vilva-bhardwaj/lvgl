/**
 * @file test_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "test_screen_gen.h"
#include "../helloworld.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * test_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t s_Setting_data;
    static lv_style_t s_Frame_171;
    static lv_style_t s_Frame_153;
    static lv_style_t s_Sensors;
    static lv_style_t s_Frame_135;
    static lv_style_t s_Frame_109;
    static lv_style_t s_Frame_91;
    static lv_style_t s_Name;
    static lv_style_t s_Frame_94;
    static lv_style_t s_Liquid;
    static lv_style_t s_Frame_97;
    static lv_style_t s_Probe;
    static lv_style_t s_Frame_110;
    static lv_style_t s_Frame_93;
    static lv_style_t s_Results;
    static lv_style_t s_Frame_95;
    static lv_style_t s_1528_mV;
    static lv_style_t s_Frame_98;
    static lv_style_t s_0;
    static lv_style_t s_Frame_168;
    static lv_style_t s_SMPL;
    static lv_style_t s_Frame_135_1;
    static lv_style_t s_Frame_109_1;
    static lv_style_t s_Frame_91_1;
    static lv_style_t s_Parameter;
    static lv_style_t s_Frame_94_1;
    static lv_style_t s_K;
    static lv_style_t s_Frame_98_1;
    static lv_style_t s_Na;
    static lv_style_t s_Frame_97_1;
    static lv_style_t s_Ca;
    static lv_style_t s_Frame_110_1;
    static lv_style_t s_Frame_93_1;
    static lv_style_t s_Results_1;
    static lv_style_t s_Frame_95_1;
    static lv_style_t s_0_mV;
    static lv_style_t s_Frame_99;
    static lv_style_t s_0_mV_1;
    static lv_style_t s_Frame_98_2;
    static lv_style_t s_0_mV_2;
    static lv_style_t s_Frame_169;
    static lv_style_t s_Result;
    static lv_style_t s_Frame_135_2;
    static lv_style_t s_Frame_109_2;
    static lv_style_t s_Frame_91_2;
    static lv_style_t s_Parameter_1;
    static lv_style_t s_Frame_94_2;
    static lv_style_t s_K_1;
    static lv_style_t s_Frame_98_3;
    static lv_style_t s_Na_1;
    static lv_style_t s_Frame_97_2;
    static lv_style_t s_Ca_1;
    static lv_style_t s_Frame_110_2;
    static lv_style_t s_Frame_93_2;
    static lv_style_t s_Results_2;
    static lv_style_t s_Frame_95_2;
    static lv_style_t s_0_mV_3;
    static lv_style_t s_Frame_99_1;
    static lv_style_t s_0_mV_4;
    static lv_style_t s_Frame_98_4;
    static lv_style_t s_0_mV_5;
    static lv_style_t s_Frame_34;
    static lv_style_t s_Frame_85;
    static lv_style_t s_Icons;
    static lv_style_t s_Icon;
    static lv_style_t s_System_diagnostic;
    static lv_style_t s_Frame_167;
    static lv_style_t s_Buttons;
    static lv_style_t s_Re_try_Calibration;
    static lv_style_t s_Buttons_1;
    static lv_style_t s_Re_try_Calibration_1;
    static lv_style_t s_Buttons_2;
    static lv_style_t s_Re_try_Calibration_2;
    static lv_style_t s_Buttons_3;
    static lv_style_t s_Re_try_Calibration_3;
    static lv_style_t s_Buttons_4;
    static lv_style_t s_Re_try_Calibration_4;
    static lv_style_t s_Frame_170;
    static lv_style_t s_Frame_155;
    static lv_style_t s_Diagnosis;
    static lv_style_t s_Frame_134;
    static lv_style_t s_Frame_109_3;
    static lv_style_t s_Frame_91_3;
    static lv_style_t s_Parameter_2;
    static lv_style_t s_Frame_94_3;
    static lv_style_t s_K_2;
    static lv_style_t s_Frame_97_3;
    static lv_style_t s_Na_2;
    static lv_style_t s_Frame_100;
    static lv_style_t s_Ca_2;
    static lv_style_t s_Frame_103;
    static lv_style_t s_pH;
    static lv_style_t s_Frame_106;
    static lv_style_t s_Cl;
    static lv_style_t s_Frame_110_3;
    static lv_style_t s_Frame_93_3;
    static lv_style_t s_Results_3;
    static lv_style_t s_Frame_95_3;
    static lv_style_t s_542_mV;
    static lv_style_t s_Frame_98_5;
    static lv_style_t s_346_mV;
    static lv_style_t s_Frame_101;
    static lv_style_t s_2_mV;
    static lv_style_t s_Frame_104;
    static lv_style_t s_1_mV;
    static lv_style_t s_Frame_107;
    static lv_style_t s_2_mV_1;
    static lv_style_t s_Frame_163;
    static lv_style_t s_Frame_162;
    static lv_style_t s_Frame_161;
    static lv_style_t s_Cal_1;
    static lv_style_t s_Frame_160;
    static lv_style_t s_Refresh_Values;
    static lv_style_t s_Icons_1;
    static lv_style_t s_Icon_1;
    static lv_style_t s_Frame_136;
    static lv_style_t s_Frame_109_4;
    static lv_style_t s_Frame_91_4;
    static lv_style_t s_Parameter_3;
    static lv_style_t s_Frame_94_4;
    static lv_style_t s_K_3;
    static lv_style_t s_Frame_97_4;
    static lv_style_t s_Na_3;
    static lv_style_t s_Frame_100_1;
    static lv_style_t s_Ca_3;
    static lv_style_t s_Frame_110_4;
    static lv_style_t s_Frame_93_4;
    static lv_style_t s_Results_4;
    static lv_style_t s_Frame_95_4;
    static lv_style_t s_621_mV;
    static lv_style_t s_Frame_98_6;
    static lv_style_t s_357_mV;
    static lv_style_t s_Frame_101_1;
    static lv_style_t s_2_mV_2;
    static lv_style_t s_4_140_1_25_7_4_100_mmol_L;
    static lv_style_t s_Frame_166;
    static lv_style_t s_Frame_165;
    static lv_style_t s_Frame_164;
    static lv_style_t s_Cal_2;
    static lv_style_t s_Frame_160_1;
    static lv_style_t s_Refresh_Values_1;
    static lv_style_t s_Icons_2;
    static lv_style_t s_Icon_2;
    static lv_style_t s_Frame_136_1;
    static lv_style_t s_Frame_109_5;
    static lv_style_t s_Frame_91_5;
    static lv_style_t s_Parameter_4;
    static lv_style_t s_Frame_94_5;
    static lv_style_t s_K_4;
    static lv_style_t s_Frame_97_5;
    static lv_style_t s_Na_4;
    static lv_style_t s_Frame_100_2;
    static lv_style_t s_Ca_4;
    static lv_style_t s_Frame_110_5;
    static lv_style_t s_Frame_93_5;
    static lv_style_t s_Results_5;
    static lv_style_t s_Frame_95_5;
    static lv_style_t s_542_mV_1;
    static lv_style_t s_Frame_98_7;
    static lv_style_t s_346_mV_1;
    static lv_style_t s_Frame_101_2;
    static lv_style_t s_2_mV_3;
    static lv_style_t s_8_110_2_5_7_70_mmol_L;
    static lv_style_t s_Frame_173;
    static lv_style_t s_Results_6;
    static lv_style_t s_Frame_172;
    static lv_style_t s_Frame_133;
    static lv_style_t s_Status;
    static lv_style_t s_18;
    static lv_style_t s_Frame_134_1;
    static lv_style_t s_System_is_in_idle_mode;
    static lv_style_t s_4;
    static lv_style_t s_Frame_171_1;
    static lv_style_t s_Frame_153_1;
    static lv_style_t s_Sensors_1;
    static lv_style_t s_Frame_135_3;
    static lv_style_t s_Frame_109_6;
    static lv_style_t s_Frame_91_6;
    static lv_style_t s_Name_1;
    static lv_style_t s_Frame_94_6;
    static lv_style_t s_Liquid_1;
    static lv_style_t s_Frame_97_6;
    static lv_style_t s_Probe_1;
    static lv_style_t s_Frame_110_6;
    static lv_style_t s_Frame_93_6;
    static lv_style_t s_Results_7;
    static lv_style_t s_Frame_95_6;
    static lv_style_t s_1528_mV_1;
    static lv_style_t s_Frame_98_8;
    static lv_style_t s_0_1;
    static lv_style_t s_Frame_168_1;
    static lv_style_t s_SMPL_1;
    static lv_style_t s_Frame_135_4;
    static lv_style_t s_Frame_109_7;
    static lv_style_t s_Frame_91_7;
    static lv_style_t s_Parameter_5;
    static lv_style_t s_Frame_94_7;
    static lv_style_t s_K_5;
    static lv_style_t s_Frame_98_9;
    static lv_style_t s_Na_5;
    static lv_style_t s_Frame_97_7;
    static lv_style_t s_Ca_5;
    static lv_style_t s_Frame_110_7;
    static lv_style_t s_Frame_93_7;
    static lv_style_t s_Results_8;
    static lv_style_t s_Frame_95_7;
    static lv_style_t s_0_mV_6;
    static lv_style_t s_Frame_99_2;
    static lv_style_t s_0_mV_7;
    static lv_style_t s_Frame_98_10;
    static lv_style_t s_0_mV_8;
    static lv_style_t s_Frame_169_1;
    static lv_style_t s_Result_1;
    static lv_style_t s_Frame_135_5;
    static lv_style_t s_Frame_109_8;
    static lv_style_t s_Frame_91_8;
    static lv_style_t s_Parameter_6;
    static lv_style_t s_Frame_94_8;
    static lv_style_t s_K_6;
    static lv_style_t s_Frame_98_11;
    static lv_style_t s_Na_6;
    static lv_style_t s_Frame_97_8;
    static lv_style_t s_Ca_6;
    static lv_style_t s_Frame_110_8;
    static lv_style_t s_Frame_93_8;
    static lv_style_t s_Results_9;
    static lv_style_t s_Frame_95_8;
    static lv_style_t s_0_mV_9;
    static lv_style_t s_Frame_99_3;
    static lv_style_t s_0_mV_10;
    static lv_style_t s_Frame_98_12;
    static lv_style_t s_0_mV_11;
    static lv_style_t s_Frame_34_1;
    static lv_style_t s_Frame_85_1;
    static lv_style_t s_Icons_3;
    static lv_style_t s_Icon_3;
    static lv_style_t s_System_diagnostic_1;
    static lv_style_t s_Frame_167_1;
    static lv_style_t s_Buttons_5;
    static lv_style_t s_Re_try_Calibration_5;
    static lv_style_t s_Buttons_6;
    static lv_style_t s_Re_try_Calibration_6;
    static lv_style_t s_Buttons_7;
    static lv_style_t s_Re_try_Calibration_7;
    static lv_style_t s_Buttons_8;
    static lv_style_t s_Re_try_Calibration_8;
    static lv_style_t s_Buttons_9;
    static lv_style_t s_Re_try_Calibration_9;
    static lv_style_t s_Frame_170_1;
    static lv_style_t s_Frame_155_1;
    static lv_style_t s_Diagnosis_1;
    static lv_style_t s_Frame_134_2;
    static lv_style_t s_Frame_109_9;
    static lv_style_t s_Frame_91_9;
    static lv_style_t s_Parameter_7;
    static lv_style_t s_Frame_94_9;
    static lv_style_t s_K_7;
    static lv_style_t s_Frame_97_9;
    static lv_style_t s_Na_7;
    static lv_style_t s_Frame_100_3;
    static lv_style_t s_Ca_7;
    static lv_style_t s_Frame_103_1;
    static lv_style_t s_pH_1;
    static lv_style_t s_Frame_106_1;
    static lv_style_t s_Cl_1;
    static lv_style_t s_Frame_110_9;
    static lv_style_t s_Frame_93_9;
    static lv_style_t s_Results_10;
    static lv_style_t s_Frame_95_9;
    static lv_style_t s_542_mV_2;
    static lv_style_t s_Frame_98_13;
    static lv_style_t s_346_mV_2;
    static lv_style_t s_Frame_101_3;
    static lv_style_t s_2_mV_4;
    static lv_style_t s_Frame_104_1;
    static lv_style_t s_1_mV_1;
    static lv_style_t s_Frame_107_1;
    static lv_style_t s_2_mV_5;
    static lv_style_t s_Frame_163_1;
    static lv_style_t s_Frame_162_1;
    static lv_style_t s_Frame_161_1;
    static lv_style_t s_Cal_1_1;
    static lv_style_t s_Frame_160_2;
    static lv_style_t s_Refresh_Values_2;
    static lv_style_t s_Icons_4;
    static lv_style_t s_Icon_4;
    static lv_style_t s_Frame_136_2;
    static lv_style_t s_Frame_109_10;
    static lv_style_t s_Frame_91_10;
    static lv_style_t s_Parameter_8;
    static lv_style_t s_Frame_94_10;
    static lv_style_t s_K_8;
    static lv_style_t s_Frame_97_10;
    static lv_style_t s_Na_8;
    static lv_style_t s_Frame_100_4;
    static lv_style_t s_Ca_8;
    static lv_style_t s_Frame_110_10;
    static lv_style_t s_Frame_93_10;
    static lv_style_t s_Results_11;
    static lv_style_t s_Frame_95_10;
    static lv_style_t s_621_mV_1;
    static lv_style_t s_Frame_98_14;
    static lv_style_t s_357_mV_1;
    static lv_style_t s_Frame_101_4;
    static lv_style_t s_2_mV_6;
    static lv_style_t s_4_140_1_25_7_4_100_mmol_L_1;
    static lv_style_t s_Frame_166_1;
    static lv_style_t s_Frame_165_1;
    static lv_style_t s_Frame_164_1;
    static lv_style_t s_Cal_2_1;
    static lv_style_t s_Frame_160_3;
    static lv_style_t s_Refresh_Values_3;
    static lv_style_t s_Icons_5;
    static lv_style_t s_Icon_5;
    static lv_style_t s_Frame_136_3;
    static lv_style_t s_Frame_109_11;
    static lv_style_t s_Frame_91_11;
    static lv_style_t s_Parameter_9;
    static lv_style_t s_Frame_94_11;
    static lv_style_t s_K_9;
    static lv_style_t s_Frame_97_11;
    static lv_style_t s_Na_9;
    static lv_style_t s_Frame_100_5;
    static lv_style_t s_Ca_9;
    static lv_style_t s_Frame_110_11;
    static lv_style_t s_Frame_93_11;
    static lv_style_t s_Results_12;
    static lv_style_t s_Frame_95_11;
    static lv_style_t s_542_mV_3;
    static lv_style_t s_Frame_98_15;
    static lv_style_t s_346_mV_3;
    static lv_style_t s_Frame_101_5;
    static lv_style_t s_2_mV_7;
    static lv_style_t s_8_110_2_5_7_70_mmol_L_1;
    static lv_style_t s_Frame_173_1;
    static lv_style_t s_Results_13;
    static lv_style_t s_Frame_172_1;
    static lv_style_t s_Frame_133_1;
    static lv_style_t s_Status_1;
    static lv_style_t s_18_1;
    static lv_style_t s_Frame_134_3;
    static lv_style_t s_System_is_in_idle_mode_1;
    static lv_style_t s_4_1;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&s_Setting_data);
        lv_style_set_bg_color(&s_Setting_data, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Setting_data, 800);
        lv_style_set_height(&s_Setting_data, 480);

        lv_style_init(&s_Frame_171);
        lv_style_set_width(&s_Frame_171, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_171, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_171, 0);
        lv_style_set_pad_ver(&s_Frame_171, 0);
        lv_style_set_pad_column(&s_Frame_171, 16);
        lv_style_set_pad_row(&s_Frame_171, 16);

        lv_style_init(&s_Frame_153);
        lv_style_set_width(&s_Frame_153, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_153, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_153, 0);
        lv_style_set_pad_ver(&s_Frame_153, 0);
        lv_style_set_pad_row(&s_Frame_153, 8);
        lv_style_set_pad_column(&s_Frame_153, 8);

        lv_style_init(&s_Sensors);
        lv_style_set_text_color(&s_Sensors, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_135);
        lv_style_set_border_color(&s_Frame_135, lv_color_hex(0xdedede));
        lv_style_set_border_opa(&s_Frame_135, 255);
        lv_style_set_border_width(&s_Frame_135, 1);
        lv_style_set_width(&s_Frame_135, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_135, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_135, 4);
        lv_style_set_pad_hor(&s_Frame_135, 0);
        lv_style_set_pad_ver(&s_Frame_135, 0);

        lv_style_init(&s_Frame_109);
        lv_style_set_width(&s_Frame_109, 80);
        lv_style_set_height(&s_Frame_109, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_109, 0);
        lv_style_set_pad_ver(&s_Frame_109, 0);
        lv_style_set_pad_row(&s_Frame_109, 1);
        lv_style_set_pad_column(&s_Frame_109, 1);

        lv_style_init(&s_Frame_91);
        lv_style_set_bg_color(&s_Frame_91, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_91, 80);
        lv_style_set_height(&s_Frame_91, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_91, 0);
        lv_style_set_shadow_color(&s_Frame_91, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_91, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_91, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_91, 1);
        lv_style_set_pad_hor(&s_Frame_91, 8);
        lv_style_set_pad_ver(&s_Frame_91, 3);
        lv_style_set_pad_column(&s_Frame_91, 10);
        lv_style_set_pad_row(&s_Frame_91, 10);

        lv_style_init(&s_Name);
        lv_style_set_text_color(&s_Name, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_94);
        lv_style_set_bg_color(&s_Frame_94, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_94, 80);
        lv_style_set_height(&s_Frame_94, 28);
        lv_style_set_shadow_width(&s_Frame_94, 0);
        lv_style_set_shadow_color(&s_Frame_94, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_94, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_94, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_94, 1);
        lv_style_set_pad_hor(&s_Frame_94, 8);
        lv_style_set_pad_ver(&s_Frame_94, 4);
        lv_style_set_pad_column(&s_Frame_94, 10);
        lv_style_set_pad_row(&s_Frame_94, 10);

        lv_style_init(&s_Liquid);
        lv_style_set_text_color(&s_Liquid, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_97);
        lv_style_set_bg_color(&s_Frame_97, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_97, 80);
        lv_style_set_height(&s_Frame_97, 28);
        lv_style_set_pad_hor(&s_Frame_97, 8);
        lv_style_set_pad_ver(&s_Frame_97, 4);
        lv_style_set_pad_column(&s_Frame_97, 10);
        lv_style_set_pad_row(&s_Frame_97, 10);

        lv_style_init(&s_Probe);
        lv_style_set_text_color(&s_Probe, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_110);
        lv_style_set_width(&s_Frame_110, 110);
        lv_style_set_height(&s_Frame_110, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_110, 0);
        lv_style_set_pad_ver(&s_Frame_110, 0);
        lv_style_set_pad_row(&s_Frame_110, 1);
        lv_style_set_pad_column(&s_Frame_110, 1);

        lv_style_init(&s_Frame_93);
        lv_style_set_bg_color(&s_Frame_93, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_93, 110);
        lv_style_set_height(&s_Frame_93, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_93, 0);
        lv_style_set_shadow_color(&s_Frame_93, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_93, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_93, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_93, 1);
        lv_style_set_pad_hor(&s_Frame_93, 8);
        lv_style_set_pad_ver(&s_Frame_93, 3);
        lv_style_set_pad_column(&s_Frame_93, 10);
        lv_style_set_pad_row(&s_Frame_93, 10);

        lv_style_init(&s_Results);
        lv_style_set_text_color(&s_Results, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_95);
        lv_style_set_bg_color(&s_Frame_95, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_95, 110);
        lv_style_set_height(&s_Frame_95, 28);
        lv_style_set_shadow_width(&s_Frame_95, 0);
        lv_style_set_shadow_color(&s_Frame_95, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_95, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_95, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_95, 1);
        lv_style_set_pad_hor(&s_Frame_95, 8);
        lv_style_set_pad_ver(&s_Frame_95, 4);
        lv_style_set_pad_column(&s_Frame_95, 10);
        lv_style_set_pad_row(&s_Frame_95, 10);

        lv_style_init(&s_1528_mV);
        lv_style_set_text_color(&s_1528_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98);
        lv_style_set_bg_color(&s_Frame_98, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98, 110);
        lv_style_set_height(&s_Frame_98, 28);
        lv_style_set_pad_hor(&s_Frame_98, 8);
        lv_style_set_pad_ver(&s_Frame_98, 4);
        lv_style_set_pad_column(&s_Frame_98, 10);
        lv_style_set_pad_row(&s_Frame_98, 10);

        lv_style_init(&s_0);
        lv_style_set_text_color(&s_0, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_168);
        lv_style_set_width(&s_Frame_168, 190);
        lv_style_set_height(&s_Frame_168, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_168, 0);
        lv_style_set_pad_ver(&s_Frame_168, 0);
        lv_style_set_pad_row(&s_Frame_168, 8);
        lv_style_set_pad_column(&s_Frame_168, 8);

        lv_style_init(&s_SMPL);
        lv_style_set_text_color(&s_SMPL, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_135_1);
        lv_style_set_border_color(&s_Frame_135_1, lv_color_hex(0xdedede));
        lv_style_set_border_opa(&s_Frame_135_1, 255);
        lv_style_set_border_width(&s_Frame_135_1, 1);
        lv_style_set_width(&s_Frame_135_1, 190);
        lv_style_set_height(&s_Frame_135_1, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_135_1, 4);
        lv_style_set_pad_hor(&s_Frame_135_1, 0);
        lv_style_set_pad_ver(&s_Frame_135_1, 0);

        lv_style_init(&s_Frame_109_1);
        lv_style_set_width(&s_Frame_109_1, 80);
        lv_style_set_height(&s_Frame_109_1, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_109_1, 0);
        lv_style_set_pad_ver(&s_Frame_109_1, 0);
        lv_style_set_pad_row(&s_Frame_109_1, 1);
        lv_style_set_pad_column(&s_Frame_109_1, 1);

        lv_style_init(&s_Frame_91_1);
        lv_style_set_bg_color(&s_Frame_91_1, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_91_1, 80);
        lv_style_set_height(&s_Frame_91_1, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_91_1, 0);
        lv_style_set_shadow_color(&s_Frame_91_1, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_91_1, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_91_1, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_91_1, 1);
        lv_style_set_pad_hor(&s_Frame_91_1, 8);
        lv_style_set_pad_ver(&s_Frame_91_1, 3);
        lv_style_set_pad_column(&s_Frame_91_1, 10);
        lv_style_set_pad_row(&s_Frame_91_1, 10);

        lv_style_init(&s_Parameter);
        lv_style_set_text_color(&s_Parameter, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_94_1);
        lv_style_set_bg_color(&s_Frame_94_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_94_1, 80);
        lv_style_set_height(&s_Frame_94_1, 28);
        lv_style_set_shadow_width(&s_Frame_94_1, 0);
        lv_style_set_shadow_color(&s_Frame_94_1, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_94_1, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_94_1, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_94_1, 1);
        lv_style_set_pad_hor(&s_Frame_94_1, 8);
        lv_style_set_pad_ver(&s_Frame_94_1, 4);
        lv_style_set_pad_column(&s_Frame_94_1, 10);
        lv_style_set_pad_row(&s_Frame_94_1, 10);

        lv_style_init(&s_K);
        lv_style_set_text_color(&s_K, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_1);
        lv_style_set_bg_color(&s_Frame_98_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_1, 80);
        lv_style_set_height(&s_Frame_98_1, 28);
        lv_style_set_shadow_width(&s_Frame_98_1, 0);
        lv_style_set_shadow_color(&s_Frame_98_1, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_98_1, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_98_1, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_98_1, 1);
        lv_style_set_pad_hor(&s_Frame_98_1, 8);
        lv_style_set_pad_ver(&s_Frame_98_1, 4);
        lv_style_set_pad_column(&s_Frame_98_1, 10);
        lv_style_set_pad_row(&s_Frame_98_1, 10);

        lv_style_init(&s_Na);
        lv_style_set_text_color(&s_Na, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_97_1);
        lv_style_set_bg_color(&s_Frame_97_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_97_1, 80);
        lv_style_set_height(&s_Frame_97_1, 28);
        lv_style_set_pad_hor(&s_Frame_97_1, 8);
        lv_style_set_pad_ver(&s_Frame_97_1, 4);
        lv_style_set_pad_column(&s_Frame_97_1, 10);
        lv_style_set_pad_row(&s_Frame_97_1, 10);

        lv_style_init(&s_Ca);
        lv_style_set_text_color(&s_Ca, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_110_1);
        lv_style_set_width(&s_Frame_110_1, 110);
        lv_style_set_height(&s_Frame_110_1, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_110_1, 0);
        lv_style_set_pad_ver(&s_Frame_110_1, 0);
        lv_style_set_pad_row(&s_Frame_110_1, 1);
        lv_style_set_pad_column(&s_Frame_110_1, 1);

        lv_style_init(&s_Frame_93_1);
        lv_style_set_bg_color(&s_Frame_93_1, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_93_1, 110);
        lv_style_set_height(&s_Frame_93_1, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_93_1, 0);
        lv_style_set_shadow_color(&s_Frame_93_1, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_93_1, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_93_1, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_93_1, 1);
        lv_style_set_pad_hor(&s_Frame_93_1, 8);
        lv_style_set_pad_ver(&s_Frame_93_1, 3);
        lv_style_set_pad_column(&s_Frame_93_1, 10);
        lv_style_set_pad_row(&s_Frame_93_1, 10);

        lv_style_init(&s_Results_1);
        lv_style_set_text_color(&s_Results_1, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_95_1);
        lv_style_set_bg_color(&s_Frame_95_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_95_1, 110);
        lv_style_set_height(&s_Frame_95_1, 28);
        lv_style_set_shadow_width(&s_Frame_95_1, 0);
        lv_style_set_shadow_color(&s_Frame_95_1, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_95_1, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_95_1, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_95_1, 1);
        lv_style_set_pad_hor(&s_Frame_95_1, 8);
        lv_style_set_pad_ver(&s_Frame_95_1, 4);
        lv_style_set_pad_column(&s_Frame_95_1, 10);
        lv_style_set_pad_row(&s_Frame_95_1, 10);

        lv_style_init(&s_0_mV);
        lv_style_set_text_color(&s_0_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_99);
        lv_style_set_bg_color(&s_Frame_99, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_99, 110);
        lv_style_set_height(&s_Frame_99, 28);
        lv_style_set_shadow_width(&s_Frame_99, 0);
        lv_style_set_shadow_color(&s_Frame_99, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_99, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_99, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_99, 1);
        lv_style_set_pad_hor(&s_Frame_99, 8);
        lv_style_set_pad_ver(&s_Frame_99, 4);
        lv_style_set_pad_column(&s_Frame_99, 10);
        lv_style_set_pad_row(&s_Frame_99, 10);

        lv_style_init(&s_0_mV_1);
        lv_style_set_text_color(&s_0_mV_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_2);
        lv_style_set_bg_color(&s_Frame_98_2, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_2, 110);
        lv_style_set_height(&s_Frame_98_2, 28);
        lv_style_set_pad_hor(&s_Frame_98_2, 8);
        lv_style_set_pad_ver(&s_Frame_98_2, 4);
        lv_style_set_pad_column(&s_Frame_98_2, 10);
        lv_style_set_pad_row(&s_Frame_98_2, 10);

        lv_style_init(&s_0_mV_2);
        lv_style_set_text_color(&s_0_mV_2, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_169);
        lv_style_set_width(&s_Frame_169, 190);
        lv_style_set_height(&s_Frame_169, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_169, 0);
        lv_style_set_pad_ver(&s_Frame_169, 0);
        lv_style_set_pad_row(&s_Frame_169, 8);
        lv_style_set_pad_column(&s_Frame_169, 8);

        lv_style_init(&s_Result);
        lv_style_set_text_color(&s_Result, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_135_2);
        lv_style_set_border_color(&s_Frame_135_2, lv_color_hex(0xdedede));
        lv_style_set_border_opa(&s_Frame_135_2, 255);
        lv_style_set_border_width(&s_Frame_135_2, 1);
        lv_style_set_width(&s_Frame_135_2, 190);
        lv_style_set_height(&s_Frame_135_2, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_135_2, 4);
        lv_style_set_pad_hor(&s_Frame_135_2, 0);
        lv_style_set_pad_ver(&s_Frame_135_2, 0);

        lv_style_init(&s_Frame_109_2);
        lv_style_set_width(&s_Frame_109_2, 80);
        lv_style_set_height(&s_Frame_109_2, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_109_2, 0);
        lv_style_set_pad_ver(&s_Frame_109_2, 0);
        lv_style_set_pad_row(&s_Frame_109_2, 1);
        lv_style_set_pad_column(&s_Frame_109_2, 1);

        lv_style_init(&s_Frame_91_2);
        lv_style_set_bg_color(&s_Frame_91_2, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_91_2, 80);
        lv_style_set_height(&s_Frame_91_2, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_91_2, 0);
        lv_style_set_shadow_color(&s_Frame_91_2, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_91_2, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_91_2, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_91_2, 1);
        lv_style_set_pad_hor(&s_Frame_91_2, 8);
        lv_style_set_pad_ver(&s_Frame_91_2, 3);
        lv_style_set_pad_column(&s_Frame_91_2, 10);
        lv_style_set_pad_row(&s_Frame_91_2, 10);

        lv_style_init(&s_Parameter_1);
        lv_style_set_text_color(&s_Parameter_1, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_94_2);
        lv_style_set_bg_color(&s_Frame_94_2, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_94_2, 80);
        lv_style_set_height(&s_Frame_94_2, 28);
        lv_style_set_shadow_width(&s_Frame_94_2, 0);
        lv_style_set_shadow_color(&s_Frame_94_2, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_94_2, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_94_2, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_94_2, 1);
        lv_style_set_pad_hor(&s_Frame_94_2, 8);
        lv_style_set_pad_ver(&s_Frame_94_2, 4);
        lv_style_set_pad_column(&s_Frame_94_2, 10);
        lv_style_set_pad_row(&s_Frame_94_2, 10);

        lv_style_init(&s_K_1);
        lv_style_set_text_color(&s_K_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_3);
        lv_style_set_bg_color(&s_Frame_98_3, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_3, 80);
        lv_style_set_height(&s_Frame_98_3, 28);
        lv_style_set_shadow_width(&s_Frame_98_3, 0);
        lv_style_set_shadow_color(&s_Frame_98_3, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_98_3, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_98_3, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_98_3, 1);
        lv_style_set_pad_hor(&s_Frame_98_3, 8);
        lv_style_set_pad_ver(&s_Frame_98_3, 4);
        lv_style_set_pad_column(&s_Frame_98_3, 10);
        lv_style_set_pad_row(&s_Frame_98_3, 10);

        lv_style_init(&s_Na_1);
        lv_style_set_text_color(&s_Na_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_97_2);
        lv_style_set_bg_color(&s_Frame_97_2, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_97_2, 80);
        lv_style_set_height(&s_Frame_97_2, 28);
        lv_style_set_pad_hor(&s_Frame_97_2, 8);
        lv_style_set_pad_ver(&s_Frame_97_2, 4);
        lv_style_set_pad_column(&s_Frame_97_2, 10);
        lv_style_set_pad_row(&s_Frame_97_2, 10);

        lv_style_init(&s_Ca_1);
        lv_style_set_text_color(&s_Ca_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_110_2);
        lv_style_set_width(&s_Frame_110_2, 110);
        lv_style_set_height(&s_Frame_110_2, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_110_2, 0);
        lv_style_set_pad_ver(&s_Frame_110_2, 0);
        lv_style_set_pad_row(&s_Frame_110_2, 1);
        lv_style_set_pad_column(&s_Frame_110_2, 1);

        lv_style_init(&s_Frame_93_2);
        lv_style_set_bg_color(&s_Frame_93_2, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_93_2, 110);
        lv_style_set_height(&s_Frame_93_2, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_93_2, 0);
        lv_style_set_shadow_color(&s_Frame_93_2, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_93_2, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_93_2, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_93_2, 1);
        lv_style_set_pad_hor(&s_Frame_93_2, 8);
        lv_style_set_pad_ver(&s_Frame_93_2, 3);
        lv_style_set_pad_column(&s_Frame_93_2, 10);
        lv_style_set_pad_row(&s_Frame_93_2, 10);

        lv_style_init(&s_Results_2);
        lv_style_set_text_color(&s_Results_2, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_95_2);
        lv_style_set_bg_color(&s_Frame_95_2, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_95_2, 110);
        lv_style_set_height(&s_Frame_95_2, 28);
        lv_style_set_shadow_width(&s_Frame_95_2, 0);
        lv_style_set_shadow_color(&s_Frame_95_2, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_95_2, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_95_2, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_95_2, 1);
        lv_style_set_pad_hor(&s_Frame_95_2, 8);
        lv_style_set_pad_ver(&s_Frame_95_2, 4);
        lv_style_set_pad_column(&s_Frame_95_2, 10);
        lv_style_set_pad_row(&s_Frame_95_2, 10);

        lv_style_init(&s_0_mV_3);
        lv_style_set_text_color(&s_0_mV_3, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_99_1);
        lv_style_set_bg_color(&s_Frame_99_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_99_1, 110);
        lv_style_set_height(&s_Frame_99_1, 28);
        lv_style_set_shadow_width(&s_Frame_99_1, 0);
        lv_style_set_shadow_color(&s_Frame_99_1, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_99_1, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_99_1, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_99_1, 1);
        lv_style_set_pad_hor(&s_Frame_99_1, 8);
        lv_style_set_pad_ver(&s_Frame_99_1, 4);
        lv_style_set_pad_column(&s_Frame_99_1, 10);
        lv_style_set_pad_row(&s_Frame_99_1, 10);

        lv_style_init(&s_0_mV_4);
        lv_style_set_text_color(&s_0_mV_4, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_4);
        lv_style_set_bg_color(&s_Frame_98_4, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_4, 110);
        lv_style_set_height(&s_Frame_98_4, 28);
        lv_style_set_pad_hor(&s_Frame_98_4, 8);
        lv_style_set_pad_ver(&s_Frame_98_4, 4);
        lv_style_set_pad_column(&s_Frame_98_4, 10);
        lv_style_set_pad_row(&s_Frame_98_4, 10);

        lv_style_init(&s_0_mV_5);
        lv_style_set_text_color(&s_0_mV_5, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_34);
        lv_style_set_bg_color(&s_Frame_34, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_34, 800);
        lv_style_set_height(&s_Frame_34, 46);
        lv_style_set_shadow_width(&s_Frame_34, 0);
        lv_style_set_shadow_color(&s_Frame_34, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_34, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_34, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_34, 1);

        lv_style_init(&s_Frame_85);

        lv_style_init(&s_Icons);
        lv_style_set_width(&s_Icons, 20);
        lv_style_set_height(&s_Icons, 20);

        lv_style_init(&s_Icon);
        lv_style_set_border_color(&s_Icon, lv_color_hex(0x1d1d1d));
        lv_style_set_border_opa(&s_Icon, 255);
        lv_style_set_border_width(&s_Icon, 2);
        lv_style_set_width(&s_Icon, 6);
        lv_style_set_height(&s_Icon, 12);

        lv_style_init(&s_System_diagnostic);
        lv_style_set_text_color(&s_System_diagnostic, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_167);
        lv_style_set_bg_color(&s_Frame_167, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_167, 800);
        lv_style_set_height(&s_Frame_167, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_167, 0);
        lv_style_set_shadow_color(&s_Frame_167, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_167, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_167, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_167, -1);
        lv_style_set_pad_hor(&s_Frame_167, 24);
        lv_style_set_pad_ver(&s_Frame_167, 16);
        lv_style_set_pad_column(&s_Frame_167, 8);
        lv_style_set_pad_row(&s_Frame_167, 8);

        lv_style_init(&s_Buttons);
        lv_style_set_bg_color(&s_Buttons, lv_color_hex(0x188733));
        lv_style_set_border_color(&s_Buttons, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Buttons, 255);
        lv_style_set_border_width(&s_Buttons, 1);
        lv_style_set_width(&s_Buttons, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Buttons, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Buttons, 4);
        lv_style_set_shadow_width(&s_Buttons, 12);
        lv_style_set_shadow_color(&s_Buttons, lv_color_hex(0x2c582e));
        lv_style_set_shadow_opa(&s_Buttons, 255);
        //lv_style_set_shadow_offset_x(&s_Buttons, 0);
        //lv_style_set_shadow_offset_y(&s_Buttons, 2);
        lv_style_set_pad_hor(&s_Buttons, 12);
        lv_style_set_pad_ver(&s_Buttons, 8);
        lv_style_set_pad_column(&s_Buttons, 10);
        lv_style_set_pad_row(&s_Buttons, 10);

        lv_style_init(&s_Re_try_Calibration);
        lv_style_set_text_color(&s_Re_try_Calibration, lv_color_hex(0x188733));

        lv_style_init(&s_Buttons_1);
        lv_style_set_bg_color(&s_Buttons_1, lv_color_hex(0x188733));
        lv_style_set_border_color(&s_Buttons_1, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Buttons_1, 255);
        lv_style_set_border_width(&s_Buttons_1, 1);
        lv_style_set_width(&s_Buttons_1, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Buttons_1, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Buttons_1, 4);
        lv_style_set_shadow_width(&s_Buttons_1, 12);
        lv_style_set_shadow_color(&s_Buttons_1, lv_color_hex(0x2c582e));
        lv_style_set_shadow_opa(&s_Buttons_1, 255);
        //lv_style_set_shadow_offset_x(&s_Buttons_1, 0);
        //lv_style_set_shadow_offset_y(&s_Buttons_1, 2);
        lv_style_set_pad_hor(&s_Buttons_1, 12);
        lv_style_set_pad_ver(&s_Buttons_1, 8);
        lv_style_set_pad_column(&s_Buttons_1, 10);
        lv_style_set_pad_row(&s_Buttons_1, 10);

        lv_style_init(&s_Re_try_Calibration_1);
        lv_style_set_text_color(&s_Re_try_Calibration_1, lv_color_hex(0x188733));

        lv_style_init(&s_Buttons_2);
        lv_style_set_bg_color(&s_Buttons_2, lv_color_hex(0x188733));
        lv_style_set_border_color(&s_Buttons_2, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Buttons_2, 255);
        lv_style_set_border_width(&s_Buttons_2, 1);
        lv_style_set_width(&s_Buttons_2, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Buttons_2, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Buttons_2, 4);
        lv_style_set_shadow_width(&s_Buttons_2, 12);
        lv_style_set_shadow_color(&s_Buttons_2, lv_color_hex(0x2c582e));
        lv_style_set_shadow_opa(&s_Buttons_2, 255);
        //lv_style_set_shadow_offset_x(&s_Buttons_2, 0);
        //lv_style_set_shadow_offset_y(&s_Buttons_2, 2);
        lv_style_set_pad_hor(&s_Buttons_2, 12);
        lv_style_set_pad_ver(&s_Buttons_2, 8);
        lv_style_set_pad_column(&s_Buttons_2, 10);
        lv_style_set_pad_row(&s_Buttons_2, 10);

        lv_style_init(&s_Re_try_Calibration_2);
        lv_style_set_text_color(&s_Re_try_Calibration_2, lv_color_hex(0x188733));

        lv_style_init(&s_Buttons_3);
        lv_style_set_bg_color(&s_Buttons_3, lv_color_hex(0x188733));
        lv_style_set_border_color(&s_Buttons_3, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Buttons_3, 255);
        lv_style_set_border_width(&s_Buttons_3, 1);
        lv_style_set_width(&s_Buttons_3, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Buttons_3, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Buttons_3, 4);
        lv_style_set_shadow_width(&s_Buttons_3, 12);
        lv_style_set_shadow_color(&s_Buttons_3, lv_color_hex(0x2c582e));
        lv_style_set_shadow_opa(&s_Buttons_3, 255);
        //lv_style_set_shadow_offset_x(&s_Buttons_3, 0);
        //lv_style_set_shadow_offset_y(&s_Buttons_3, 2);
        lv_style_set_pad_hor(&s_Buttons_3, 12);
        lv_style_set_pad_ver(&s_Buttons_3, 8);
        lv_style_set_pad_column(&s_Buttons_3, 10);
        lv_style_set_pad_row(&s_Buttons_3, 10);

        lv_style_init(&s_Re_try_Calibration_3);
        lv_style_set_text_color(&s_Re_try_Calibration_3, lv_color_hex(0x188733));

        lv_style_init(&s_Buttons_4);
        lv_style_set_bg_color(&s_Buttons_4, lv_color_hex(0x188733));
        lv_style_set_border_color(&s_Buttons_4, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Buttons_4, 255);
        lv_style_set_border_width(&s_Buttons_4, 1);
        lv_style_set_width(&s_Buttons_4, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Buttons_4, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Buttons_4, 4);
        lv_style_set_shadow_width(&s_Buttons_4, 12);
        lv_style_set_shadow_color(&s_Buttons_4, lv_color_hex(0x2c582e));
        lv_style_set_shadow_opa(&s_Buttons_4, 255);
        //lv_style_set_shadow_offset_x(&s_Buttons_4, 0);
        //lv_style_set_shadow_offset_y(&s_Buttons_4, 2);
        lv_style_set_pad_hor(&s_Buttons_4, 12);
        lv_style_set_pad_ver(&s_Buttons_4, 8);
        lv_style_set_pad_column(&s_Buttons_4, 10);
        lv_style_set_pad_row(&s_Buttons_4, 10);

        lv_style_init(&s_Re_try_Calibration_4);
        lv_style_set_text_color(&s_Re_try_Calibration_4, lv_color_hex(0x188733));

        lv_style_init(&s_Frame_170);
        lv_style_set_width(&s_Frame_170, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_170, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_170, 0);
        lv_style_set_pad_ver(&s_Frame_170, 0);
        lv_style_set_pad_column(&s_Frame_170, 16);
        lv_style_set_pad_row(&s_Frame_170, 16);

        lv_style_init(&s_Frame_155);
        lv_style_set_width(&s_Frame_155, 190);
        lv_style_set_height(&s_Frame_155, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_155, 0);
        lv_style_set_pad_ver(&s_Frame_155, 0);
        lv_style_set_pad_row(&s_Frame_155, 8);
        lv_style_set_pad_column(&s_Frame_155, 8);

        lv_style_init(&s_Diagnosis);
        lv_style_set_text_color(&s_Diagnosis, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_134);
        lv_style_set_border_color(&s_Frame_134, lv_color_hex(0xdedede));
        lv_style_set_border_opa(&s_Frame_134, 255);
        lv_style_set_border_width(&s_Frame_134, 1);
        lv_style_set_width(&s_Frame_134, 190);
        lv_style_set_height(&s_Frame_134, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_134, 4);
        lv_style_set_pad_hor(&s_Frame_134, 0);
        lv_style_set_pad_ver(&s_Frame_134, 0);

        lv_style_init(&s_Frame_109_3);
        lv_style_set_width(&s_Frame_109_3, 80);
        lv_style_set_height(&s_Frame_109_3, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_109_3, 0);
        lv_style_set_pad_ver(&s_Frame_109_3, 0);
        lv_style_set_pad_row(&s_Frame_109_3, 1);
        lv_style_set_pad_column(&s_Frame_109_3, 1);

        lv_style_init(&s_Frame_91_3);
        lv_style_set_bg_color(&s_Frame_91_3, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_91_3, 80);
        lv_style_set_height(&s_Frame_91_3, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_91_3, 0);
        lv_style_set_shadow_color(&s_Frame_91_3, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_91_3, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_91_3, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_91_3, 1);
        lv_style_set_pad_hor(&s_Frame_91_3, 8);
        lv_style_set_pad_ver(&s_Frame_91_3, 3);
        lv_style_set_pad_column(&s_Frame_91_3, 10);
        lv_style_set_pad_row(&s_Frame_91_3, 10);

        lv_style_init(&s_Parameter_2);
        lv_style_set_text_color(&s_Parameter_2, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_94_3);
        lv_style_set_bg_color(&s_Frame_94_3, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_94_3, 80);
        lv_style_set_height(&s_Frame_94_3, 28);
        lv_style_set_shadow_width(&s_Frame_94_3, 0);
        lv_style_set_shadow_color(&s_Frame_94_3, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_94_3, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_94_3, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_94_3, 1);
        lv_style_set_pad_hor(&s_Frame_94_3, 8);
        lv_style_set_pad_ver(&s_Frame_94_3, 4);
        lv_style_set_pad_column(&s_Frame_94_3, 10);
        lv_style_set_pad_row(&s_Frame_94_3, 10);

        lv_style_init(&s_K_2);
        lv_style_set_text_color(&s_K_2, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_97_3);
        lv_style_set_bg_color(&s_Frame_97_3, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_97_3, 80);
        lv_style_set_height(&s_Frame_97_3, 28);
        lv_style_set_shadow_width(&s_Frame_97_3, 0);
        lv_style_set_shadow_color(&s_Frame_97_3, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_97_3, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_97_3, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_97_3, 1);
        lv_style_set_pad_hor(&s_Frame_97_3, 8);
        lv_style_set_pad_ver(&s_Frame_97_3, 4);
        lv_style_set_pad_column(&s_Frame_97_3, 10);
        lv_style_set_pad_row(&s_Frame_97_3, 10);

        lv_style_init(&s_Na_2);
        lv_style_set_text_color(&s_Na_2, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_100);
        lv_style_set_bg_color(&s_Frame_100, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_100, 80);
        lv_style_set_height(&s_Frame_100, 28);
        lv_style_set_shadow_width(&s_Frame_100, 0);
        lv_style_set_shadow_color(&s_Frame_100, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_100, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_100, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_100, 1);
        lv_style_set_pad_hor(&s_Frame_100, 8);
        lv_style_set_pad_ver(&s_Frame_100, 4);
        lv_style_set_pad_column(&s_Frame_100, 10);
        lv_style_set_pad_row(&s_Frame_100, 10);

        lv_style_init(&s_Ca_2);
        lv_style_set_text_color(&s_Ca_2, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_103);
        lv_style_set_bg_color(&s_Frame_103, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_103, 80);
        lv_style_set_height(&s_Frame_103, 28);
        lv_style_set_shadow_width(&s_Frame_103, 0);
        lv_style_set_shadow_color(&s_Frame_103, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_103, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_103, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_103, 1);
        lv_style_set_pad_hor(&s_Frame_103, 8);
        lv_style_set_pad_ver(&s_Frame_103, 4);
        lv_style_set_pad_column(&s_Frame_103, 10);
        lv_style_set_pad_row(&s_Frame_103, 10);

        lv_style_init(&s_pH);
        lv_style_set_text_color(&s_pH, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_106);
        lv_style_set_bg_color(&s_Frame_106, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_106, 80);
        lv_style_set_height(&s_Frame_106, 28);
        lv_style_set_pad_hor(&s_Frame_106, 8);
        lv_style_set_pad_ver(&s_Frame_106, 4);
        lv_style_set_pad_column(&s_Frame_106, 10);
        lv_style_set_pad_row(&s_Frame_106, 10);

        lv_style_init(&s_Cl);
        lv_style_set_text_color(&s_Cl, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_110_3);
        lv_style_set_width(&s_Frame_110_3, 110);
        lv_style_set_height(&s_Frame_110_3, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_110_3, 0);
        lv_style_set_pad_ver(&s_Frame_110_3, 0);
        lv_style_set_pad_row(&s_Frame_110_3, 1);
        lv_style_set_pad_column(&s_Frame_110_3, 1);

        lv_style_init(&s_Frame_93_3);
        lv_style_set_bg_color(&s_Frame_93_3, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_93_3, 110);
        lv_style_set_height(&s_Frame_93_3, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_93_3, 0);
        lv_style_set_shadow_color(&s_Frame_93_3, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_93_3, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_93_3, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_93_3, 1);
        lv_style_set_pad_hor(&s_Frame_93_3, 8);
        lv_style_set_pad_ver(&s_Frame_93_3, 3);
        lv_style_set_pad_column(&s_Frame_93_3, 10);
        lv_style_set_pad_row(&s_Frame_93_3, 10);

        lv_style_init(&s_Results_3);
        lv_style_set_text_color(&s_Results_3, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_95_3);
        lv_style_set_bg_color(&s_Frame_95_3, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_95_3, 110);
        lv_style_set_height(&s_Frame_95_3, 28);
        lv_style_set_shadow_width(&s_Frame_95_3, 0);
        lv_style_set_shadow_color(&s_Frame_95_3, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_95_3, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_95_3, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_95_3, 1);
        lv_style_set_pad_hor(&s_Frame_95_3, 8);
        lv_style_set_pad_ver(&s_Frame_95_3, 4);
        lv_style_set_pad_column(&s_Frame_95_3, 10);
        lv_style_set_pad_row(&s_Frame_95_3, 10);

        lv_style_init(&s_542_mV);
        lv_style_set_text_color(&s_542_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_5);
        lv_style_set_bg_color(&s_Frame_98_5, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_5, 110);
        lv_style_set_height(&s_Frame_98_5, 28);
        lv_style_set_shadow_width(&s_Frame_98_5, 0);
        lv_style_set_shadow_color(&s_Frame_98_5, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_98_5, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_98_5, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_98_5, 1);
        lv_style_set_pad_hor(&s_Frame_98_5, 8);
        lv_style_set_pad_ver(&s_Frame_98_5, 4);
        lv_style_set_pad_column(&s_Frame_98_5, 10);
        lv_style_set_pad_row(&s_Frame_98_5, 10);

        lv_style_init(&s_346_mV);
        lv_style_set_text_color(&s_346_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_101);
        lv_style_set_bg_color(&s_Frame_101, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_101, 110);
        lv_style_set_height(&s_Frame_101, 28);
        lv_style_set_shadow_width(&s_Frame_101, 0);
        lv_style_set_shadow_color(&s_Frame_101, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_101, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_101, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_101, 1);
        lv_style_set_pad_hor(&s_Frame_101, 8);
        lv_style_set_pad_ver(&s_Frame_101, 4);
        lv_style_set_pad_column(&s_Frame_101, 10);
        lv_style_set_pad_row(&s_Frame_101, 10);

        lv_style_init(&s_2_mV);
        lv_style_set_text_color(&s_2_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_104);
        lv_style_set_bg_color(&s_Frame_104, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_104, 110);
        lv_style_set_height(&s_Frame_104, 28);
        lv_style_set_shadow_width(&s_Frame_104, 0);
        lv_style_set_shadow_color(&s_Frame_104, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_104, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_104, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_104, 1);
        lv_style_set_pad_hor(&s_Frame_104, 8);
        lv_style_set_pad_ver(&s_Frame_104, 4);
        lv_style_set_pad_column(&s_Frame_104, 10);
        lv_style_set_pad_row(&s_Frame_104, 10);

        lv_style_init(&s_1_mV);
        lv_style_set_text_color(&s_1_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_107);
        lv_style_set_bg_color(&s_Frame_107, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_107, 110);
        lv_style_set_height(&s_Frame_107, 28);
        lv_style_set_pad_hor(&s_Frame_107, 8);
        lv_style_set_pad_ver(&s_Frame_107, 4);
        lv_style_set_pad_column(&s_Frame_107, 10);
        lv_style_set_pad_row(&s_Frame_107, 10);

        lv_style_init(&s_2_mV_1);
        lv_style_set_text_color(&s_2_mV_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_163);
        lv_style_set_width(&s_Frame_163, 190);
        lv_style_set_height(&s_Frame_163, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_163, 0);
        lv_style_set_pad_ver(&s_Frame_163, 0);
        lv_style_set_pad_row(&s_Frame_163, 4);
        lv_style_set_pad_column(&s_Frame_163, 4);

        lv_style_init(&s_Frame_162);
        lv_style_set_width(&s_Frame_162, 190);
        lv_style_set_height(&s_Frame_162, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_162, 0);
        lv_style_set_pad_ver(&s_Frame_162, 0);
        lv_style_set_pad_row(&s_Frame_162, 8);
        lv_style_set_pad_column(&s_Frame_162, 8);

        lv_style_init(&s_Frame_161);
        lv_style_set_width(&s_Frame_161, 190);
        lv_style_set_height(&s_Frame_161, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_161, 0);
        lv_style_set_pad_ver(&s_Frame_161, 0);
        lv_style_set_pad_column(&s_Frame_161, 29);
        lv_style_set_pad_row(&s_Frame_161, 29);

        lv_style_init(&s_Cal_1);
        lv_style_set_text_color(&s_Cal_1, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_160);
        lv_style_set_width(&s_Frame_160, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_160, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_160, 0);
        lv_style_set_pad_ver(&s_Frame_160, 0);
        lv_style_set_pad_column(&s_Frame_160, 4);
        lv_style_set_pad_row(&s_Frame_160, 4);

        lv_style_init(&s_Refresh_Values);
        lv_style_set_text_color(&s_Refresh_Values, lv_color_hex(0x188733));

        lv_style_init(&s_Icons_1);
        lv_style_set_width(&s_Icons_1, 16);
        lv_style_set_height(&s_Icons_1, 16);

        lv_style_init(&s_Icon_1);
        lv_style_set_border_color(&s_Icon_1, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Icon_1, 255);
        lv_style_set_border_width(&s_Icon_1, 1);
        lv_style_set_width(&s_Icon_1, 11);
        lv_style_set_height(&s_Icon_1, 11);

        lv_style_init(&s_Frame_136);
        lv_style_set_border_color(&s_Frame_136, lv_color_hex(0xdedede));
        lv_style_set_border_opa(&s_Frame_136, 255);
        lv_style_set_border_width(&s_Frame_136, 1);
        lv_style_set_width(&s_Frame_136, 190);
        lv_style_set_height(&s_Frame_136, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_136, 4);
        lv_style_set_pad_hor(&s_Frame_136, 0);
        lv_style_set_pad_ver(&s_Frame_136, 0);

        lv_style_init(&s_Frame_109_4);
        lv_style_set_width(&s_Frame_109_4, 80);
        lv_style_set_height(&s_Frame_109_4, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_109_4, 0);
        lv_style_set_pad_ver(&s_Frame_109_4, 0);
        lv_style_set_pad_row(&s_Frame_109_4, 1);
        lv_style_set_pad_column(&s_Frame_109_4, 1);

        lv_style_init(&s_Frame_91_4);
        lv_style_set_bg_color(&s_Frame_91_4, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_91_4, 80);
        lv_style_set_height(&s_Frame_91_4, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_91_4, 0);
        lv_style_set_shadow_color(&s_Frame_91_4, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_91_4, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_91_4, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_91_4, 1);
        lv_style_set_pad_hor(&s_Frame_91_4, 8);
        lv_style_set_pad_ver(&s_Frame_91_4, 3);
        lv_style_set_pad_column(&s_Frame_91_4, 10);
        lv_style_set_pad_row(&s_Frame_91_4, 10);

        lv_style_init(&s_Parameter_3);
        lv_style_set_text_color(&s_Parameter_3, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_94_4);
        lv_style_set_bg_color(&s_Frame_94_4, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_94_4, 80);
        lv_style_set_height(&s_Frame_94_4, 28);
        lv_style_set_shadow_width(&s_Frame_94_4, 0);
        lv_style_set_shadow_color(&s_Frame_94_4, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_94_4, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_94_4, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_94_4, 1);
        lv_style_set_pad_hor(&s_Frame_94_4, 8);
        lv_style_set_pad_ver(&s_Frame_94_4, 4);
        lv_style_set_pad_column(&s_Frame_94_4, 10);
        lv_style_set_pad_row(&s_Frame_94_4, 10);

        lv_style_init(&s_K_3);
        lv_style_set_text_color(&s_K_3, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_97_4);
        lv_style_set_bg_color(&s_Frame_97_4, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_97_4, 80);
        lv_style_set_height(&s_Frame_97_4, 28);
        lv_style_set_shadow_width(&s_Frame_97_4, 0);
        lv_style_set_shadow_color(&s_Frame_97_4, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_97_4, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_97_4, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_97_4, 1);
        lv_style_set_pad_hor(&s_Frame_97_4, 8);
        lv_style_set_pad_ver(&s_Frame_97_4, 4);
        lv_style_set_pad_column(&s_Frame_97_4, 10);
        lv_style_set_pad_row(&s_Frame_97_4, 10);

        lv_style_init(&s_Na_3);
        lv_style_set_text_color(&s_Na_3, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_100_1);
        lv_style_set_bg_color(&s_Frame_100_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_100_1, 80);
        lv_style_set_height(&s_Frame_100_1, 28);
        lv_style_set_pad_hor(&s_Frame_100_1, 8);
        lv_style_set_pad_ver(&s_Frame_100_1, 4);
        lv_style_set_pad_column(&s_Frame_100_1, 10);
        lv_style_set_pad_row(&s_Frame_100_1, 10);

        lv_style_init(&s_Ca_3);
        lv_style_set_text_color(&s_Ca_3, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_110_4);
        lv_style_set_width(&s_Frame_110_4, 110);
        lv_style_set_height(&s_Frame_110_4, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_110_4, 0);
        lv_style_set_pad_ver(&s_Frame_110_4, 0);
        lv_style_set_pad_row(&s_Frame_110_4, 1);
        lv_style_set_pad_column(&s_Frame_110_4, 1);

        lv_style_init(&s_Frame_93_4);
        lv_style_set_bg_color(&s_Frame_93_4, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_93_4, 110);
        lv_style_set_height(&s_Frame_93_4, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_93_4, 0);
        lv_style_set_shadow_color(&s_Frame_93_4, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_93_4, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_93_4, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_93_4, 1);
        lv_style_set_pad_hor(&s_Frame_93_4, 8);
        lv_style_set_pad_ver(&s_Frame_93_4, 3);
        lv_style_set_pad_column(&s_Frame_93_4, 10);
        lv_style_set_pad_row(&s_Frame_93_4, 10);

        lv_style_init(&s_Results_4);
        lv_style_set_text_color(&s_Results_4, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_95_4);
        lv_style_set_bg_color(&s_Frame_95_4, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_95_4, 110);
        lv_style_set_height(&s_Frame_95_4, 28);
        lv_style_set_shadow_width(&s_Frame_95_4, 0);
        lv_style_set_shadow_color(&s_Frame_95_4, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_95_4, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_95_4, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_95_4, 1);
        lv_style_set_pad_hor(&s_Frame_95_4, 8);
        lv_style_set_pad_ver(&s_Frame_95_4, 4);
        lv_style_set_pad_column(&s_Frame_95_4, 10);
        lv_style_set_pad_row(&s_Frame_95_4, 10);

        lv_style_init(&s_621_mV);
        lv_style_set_text_color(&s_621_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_6);
        lv_style_set_bg_color(&s_Frame_98_6, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_6, 110);
        lv_style_set_height(&s_Frame_98_6, 28);
        lv_style_set_shadow_width(&s_Frame_98_6, 0);
        lv_style_set_shadow_color(&s_Frame_98_6, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_98_6, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_98_6, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_98_6, 1);
        lv_style_set_pad_hor(&s_Frame_98_6, 8);
        lv_style_set_pad_ver(&s_Frame_98_6, 4);
        lv_style_set_pad_column(&s_Frame_98_6, 10);
        lv_style_set_pad_row(&s_Frame_98_6, 10);

        lv_style_init(&s_357_mV);
        lv_style_set_text_color(&s_357_mV, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_101_1);
        lv_style_set_bg_color(&s_Frame_101_1, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_101_1, 110);
        lv_style_set_height(&s_Frame_101_1, 28);
        lv_style_set_pad_hor(&s_Frame_101_1, 8);
        lv_style_set_pad_ver(&s_Frame_101_1, 4);
        lv_style_set_pad_column(&s_Frame_101_1, 10);
        lv_style_set_pad_row(&s_Frame_101_1, 10);

        lv_style_init(&s_2_mV_2);
        lv_style_set_text_color(&s_2_mV_2, lv_color_hex(0x565656));

        lv_style_init(&s_4_140_1_25_7_4_100_mmol_L);
        lv_style_set_text_color(&s_4_140_1_25_7_4_100_mmol_L, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_166);
        lv_style_set_width(&s_Frame_166, 190);
        lv_style_set_height(&s_Frame_166, 165);
        lv_style_set_pad_hor(&s_Frame_166, 0);
        lv_style_set_pad_ver(&s_Frame_166, 0);
        lv_style_set_pad_row(&s_Frame_166, 4);
        lv_style_set_pad_column(&s_Frame_166, 4);

        lv_style_init(&s_Frame_165);
        lv_style_set_width(&s_Frame_165, 190);
        lv_style_set_height(&s_Frame_165, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_165, 0);
        lv_style_set_pad_ver(&s_Frame_165, 0);
        lv_style_set_pad_row(&s_Frame_165, 8);
        lv_style_set_pad_column(&s_Frame_165, 8);

        lv_style_init(&s_Frame_164);
        lv_style_set_width(&s_Frame_164, 190);
        lv_style_set_height(&s_Frame_164, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_164, 0);
        lv_style_set_pad_ver(&s_Frame_164, 0);
        lv_style_set_pad_column(&s_Frame_164, 33);
        lv_style_set_pad_row(&s_Frame_164, 33);

        lv_style_init(&s_Cal_2);
        lv_style_set_text_color(&s_Cal_2, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_160_1);
        lv_style_set_width(&s_Frame_160_1, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_160_1, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_160_1, 0);
        lv_style_set_pad_ver(&s_Frame_160_1, 0);
        lv_style_set_pad_column(&s_Frame_160_1, 4);
        lv_style_set_pad_row(&s_Frame_160_1, 4);

        lv_style_init(&s_Refresh_Values_1);
        lv_style_set_text_color(&s_Refresh_Values_1, lv_color_hex(0x188733));

        lv_style_init(&s_Icons_2);
        lv_style_set_width(&s_Icons_2, 16);
        lv_style_set_height(&s_Icons_2, 16);

        lv_style_init(&s_Icon_2);
        lv_style_set_border_color(&s_Icon_2, lv_color_hex(0x188733));
        lv_style_set_border_opa(&s_Icon_2, 255);
        lv_style_set_border_width(&s_Icon_2, 1);
        lv_style_set_width(&s_Icon_2, 11);
        lv_style_set_height(&s_Icon_2, 11);

        lv_style_init(&s_Frame_136_1);
        lv_style_set_border_color(&s_Frame_136_1, lv_color_hex(0xdedede));
        lv_style_set_border_opa(&s_Frame_136_1, 255);
        lv_style_set_border_width(&s_Frame_136_1, 1);
        lv_style_set_width(&s_Frame_136_1, 190);
        lv_style_set_height(&s_Frame_136_1, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_136_1, 4);
        lv_style_set_pad_hor(&s_Frame_136_1, 0);
        lv_style_set_pad_ver(&s_Frame_136_1, 0);

        lv_style_init(&s_Frame_109_5);
        lv_style_set_width(&s_Frame_109_5, 80);
        lv_style_set_height(&s_Frame_109_5, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_109_5, 0);
        lv_style_set_pad_ver(&s_Frame_109_5, 0);
        lv_style_set_pad_row(&s_Frame_109_5, 1);
        lv_style_set_pad_column(&s_Frame_109_5, 1);

        lv_style_init(&s_Frame_91_5);
        lv_style_set_bg_color(&s_Frame_91_5, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_91_5, 80);
        lv_style_set_height(&s_Frame_91_5, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_91_5, 0);
        lv_style_set_shadow_color(&s_Frame_91_5, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_91_5, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_91_5, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_91_5, 1);
        lv_style_set_pad_hor(&s_Frame_91_5, 8);
        lv_style_set_pad_ver(&s_Frame_91_5, 3);
        lv_style_set_pad_column(&s_Frame_91_5, 10);
        lv_style_set_pad_row(&s_Frame_91_5, 10);

        lv_style_init(&s_Parameter_4);
        lv_style_set_text_color(&s_Parameter_4, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_94_5);
        lv_style_set_bg_color(&s_Frame_94_5, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_94_5, 80);
        lv_style_set_height(&s_Frame_94_5, 28);
        lv_style_set_shadow_width(&s_Frame_94_5, 0);
        lv_style_set_shadow_color(&s_Frame_94_5, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_94_5, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_94_5, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_94_5, 1);
        lv_style_set_pad_hor(&s_Frame_94_5, 8);
        lv_style_set_pad_ver(&s_Frame_94_5, 4);
        lv_style_set_pad_column(&s_Frame_94_5, 10);
        lv_style_set_pad_row(&s_Frame_94_5, 10);

        lv_style_init(&s_K_4);
        lv_style_set_text_color(&s_K_4, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_97_5);
        lv_style_set_bg_color(&s_Frame_97_5, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_97_5, 80);
        lv_style_set_height(&s_Frame_97_5, 28);
        lv_style_set_shadow_width(&s_Frame_97_5, 0);
        lv_style_set_shadow_color(&s_Frame_97_5, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_97_5, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_97_5, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_97_5, 1);
        lv_style_set_pad_hor(&s_Frame_97_5, 8);
        lv_style_set_pad_ver(&s_Frame_97_5, 4);
        lv_style_set_pad_column(&s_Frame_97_5, 10);
        lv_style_set_pad_row(&s_Frame_97_5, 10);

        lv_style_init(&s_Na_4);
        lv_style_set_text_color(&s_Na_4, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_100_2);
        lv_style_set_bg_color(&s_Frame_100_2, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_100_2, 80);
        lv_style_set_height(&s_Frame_100_2, 28);
        lv_style_set_pad_hor(&s_Frame_100_2, 8);
        lv_style_set_pad_ver(&s_Frame_100_2, 4);
        lv_style_set_pad_column(&s_Frame_100_2, 10);
        lv_style_set_pad_row(&s_Frame_100_2, 10);

        lv_style_init(&s_Ca_4);
        lv_style_set_text_color(&s_Ca_4, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_110_5);
        lv_style_set_width(&s_Frame_110_5, 110);
        lv_style_set_height(&s_Frame_110_5, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_110_5, 0);
        lv_style_set_pad_ver(&s_Frame_110_5, 0);
        lv_style_set_pad_row(&s_Frame_110_5, 1);
        lv_style_set_pad_column(&s_Frame_110_5, 1);

        lv_style_init(&s_Frame_93_5);
        lv_style_set_bg_color(&s_Frame_93_5, lv_color_hex(0xf2f2f2));
        lv_style_set_width(&s_Frame_93_5, 110);
        lv_style_set_height(&s_Frame_93_5, LV_SIZE_CONTENT);
        lv_style_set_shadow_width(&s_Frame_93_5, 0);
        lv_style_set_shadow_color(&s_Frame_93_5, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_93_5, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_93_5, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_93_5, 1);
        lv_style_set_pad_hor(&s_Frame_93_5, 8);
        lv_style_set_pad_ver(&s_Frame_93_5, 3);
        lv_style_set_pad_column(&s_Frame_93_5, 10);
        lv_style_set_pad_row(&s_Frame_93_5, 10);

        lv_style_init(&s_Results_5);
        lv_style_set_text_color(&s_Results_5, lv_color_hex(0x000000));

        lv_style_init(&s_Frame_95_5);
        lv_style_set_bg_color(&s_Frame_95_5, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_95_5, 110);
        lv_style_set_height(&s_Frame_95_5, 28);
        lv_style_set_shadow_width(&s_Frame_95_5, 0);
        lv_style_set_shadow_color(&s_Frame_95_5, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_95_5, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_95_5, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_95_5, 1);
        lv_style_set_pad_hor(&s_Frame_95_5, 8);
        lv_style_set_pad_ver(&s_Frame_95_5, 4);
        lv_style_set_pad_column(&s_Frame_95_5, 10);
        lv_style_set_pad_row(&s_Frame_95_5, 10);

        lv_style_init(&s_542_mV_1);
        lv_style_set_text_color(&s_542_mV_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_98_7);
        lv_style_set_bg_color(&s_Frame_98_7, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_98_7, 110);
        lv_style_set_height(&s_Frame_98_7, 28);
        lv_style_set_shadow_width(&s_Frame_98_7, 0);
        lv_style_set_shadow_color(&s_Frame_98_7, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&s_Frame_98_7, 26);
        //lv_style_set_shadow_offset_x(&s_Frame_98_7, 0);
        //lv_style_set_shadow_offset_y(&s_Frame_98_7, 1);
        lv_style_set_pad_hor(&s_Frame_98_7, 8);
        lv_style_set_pad_ver(&s_Frame_98_7, 4);
        lv_style_set_pad_column(&s_Frame_98_7, 10);
        lv_style_set_pad_row(&s_Frame_98_7, 10);

        lv_style_init(&s_346_mV_1);
        lv_style_set_text_color(&s_346_mV_1, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_101_2);
        lv_style_set_bg_color(&s_Frame_101_2, lv_color_hex(0xffffff));
        lv_style_set_width(&s_Frame_101_2, 110);
        lv_style_set_height(&s_Frame_101_2, 28);
        lv_style_set_pad_hor(&s_Frame_101_2, 8);
        lv_style_set_pad_ver(&s_Frame_101_2, 4);
        lv_style_set_pad_column(&s_Frame_101_2, 10);
        lv_style_set_pad_row(&s_Frame_101_2, 10);

        lv_style_init(&s_2_mV_3);
        lv_style_set_text_color(&s_2_mV_3, lv_color_hex(0x565656));

        lv_style_init(&s_8_110_2_5_7_70_mmol_L);
        lv_style_set_text_color(&s_8_110_2_5_7_70_mmol_L, lv_color_hex(0x565656));

        lv_style_init(&s_Frame_173);
        lv_style_set_width(&s_Frame_173, 134);
        lv_style_set_height(&s_Frame_173, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_173, 0);
        lv_style_set_pad_ver(&s_Frame_173, 0);
        lv_style_set_pad_row(&s_Frame_173, 8);
        lv_style_set_pad_column(&s_Frame_173, 8);

        lv_style_init(&s_Results_6);
        lv_style_set_text_color(&s_Results_6, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_172);
        lv_style_set_bg_color(&s_Frame_172, lv_color_hex(0xeef0ff));
        lv_style_set_width(&s_Frame_172, 134);
        lv_style_set_height(&s_Frame_172, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_Frame_172, 8);
        lv_style_set_pad_all(&s_Frame_172, 12);
        lv_style_set_pad_row(&s_Frame_172, 16);
        lv_style_set_pad_column(&s_Frame_172, 16);

        lv_style_init(&s_Frame_133);
        lv_style_set_width(&s_Frame_133, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_133, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_133, 0);
        lv_style_set_pad_ver(&s_Frame_133, 0);
        lv_style_set_pad_row(&s_Frame_133, 2);
        lv_style_set_pad_column(&s_Frame_133, 2);

        lv_style_init(&s_Status);
        lv_style_set_text_color(&s_Status, lv_color_hex(0x565656));

        lv_style_init(&s_18);
        lv_style_set_text_color(&s_18, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_134_1);
        lv_style_set_width(&s_Frame_134_1, LV_SIZE_CONTENT);
        lv_style_set_height(&s_Frame_134_1, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_Frame_134_1, 0);
        lv_style_set_pad_ver(&s_Frame_134_1, 0);
        lv_style_set_pad_row(&s_Frame_134_1, 2);
        lv_style_set_pad_column(&s_Frame_134_1, 2);

        lv_style_init(&s_System_is_in_idle_mode);
        lv_style_set_text_color(&s_System_is_in_idle_mode, lv_color_hex(0x565656));

        lv_style_init(&s_4);
        lv_style_set_text_color(&s_4, lv_color_hex(0x1d1d1d));

        lv_style_init(&s_Frame_171_1);

        lv_style_init(&s_Frame_153_1);

        lv_style_init(&s_Sensors_1);
//        lv_style_set_text_font(&s_Sensors_1, poppins);

        lv_style_init(&s_Frame_135_3);

        lv_style_init(&s_Frame_109_6);

        lv_style_init(&s_Frame_91_6);

        lv_style_init(&s_Name_1);
//        lv_style_set_text_font(&s_Name_1, poppins);

        lv_style_init(&s_Frame_94_6);

        lv_style_init(&s_Liquid_1);
//        lv_style_set_text_font(&s_Liquid_1, poppins);

        lv_style_init(&s_Frame_97_6);

        lv_style_init(&s_Probe_1);
//        lv_style_set_text_font(&s_Probe_1, poppins);

        lv_style_init(&s_Frame_110_6);

        lv_style_init(&s_Frame_93_6);

        lv_style_init(&s_Results_7);
//        lv_style_set_text_font(&s_Results_7, poppins);

        lv_style_init(&s_Frame_95_6);

        lv_style_init(&s_1528_mV_1);
//        lv_style_set_text_font(&s_1528_mV_1, poppins);

        lv_style_init(&s_Frame_98_8);

        lv_style_init(&s_0_1);
//        lv_style_set_text_font(&s_0_1, poppins);

        lv_style_init(&s_Frame_168_1);

        lv_style_init(&s_SMPL_1);
//        lv_style_set_text_font(&s_SMPL_1, poppins);

        lv_style_init(&s_Frame_135_4);

        lv_style_init(&s_Frame_109_7);

        lv_style_init(&s_Frame_91_7);

        lv_style_init(&s_Parameter_5);
//        lv_style_set_text_font(&s_Parameter_5, poppins);

        lv_style_init(&s_Frame_94_7);

        lv_style_init(&s_K_5);
//        lv_style_set_text_font(&s_K_5, poppins);

        lv_style_init(&s_Frame_98_9);

        lv_style_init(&s_Na_5);
//        lv_style_set_text_font(&s_Na_5, poppins);

        lv_style_init(&s_Frame_97_7);

        lv_style_init(&s_Ca_5);
//        lv_style_set_text_font(&s_Ca_5, poppins);

        lv_style_init(&s_Frame_110_7);

        lv_style_init(&s_Frame_93_7);

        lv_style_init(&s_Results_8);
//        lv_style_set_text_font(&s_Results_8, poppins);

        lv_style_init(&s_Frame_95_7);

        lv_style_init(&s_0_mV_6);
//        lv_style_set_text_font(&s_0_mV_6, poppins);

        lv_style_init(&s_Frame_99_2);

        lv_style_init(&s_0_mV_7);
//        lv_style_set_text_font(&s_0_mV_7, poppins);

        lv_style_init(&s_Frame_98_10);

        lv_style_init(&s_0_mV_8);
//        lv_style_set_text_font(&s_0_mV_8, poppins);

        lv_style_init(&s_Frame_169_1);

        lv_style_init(&s_Result_1);
//        lv_style_set_text_font(&s_Result_1, poppins);

        lv_style_init(&s_Frame_135_5);

        lv_style_init(&s_Frame_109_8);

        lv_style_init(&s_Frame_91_8);

        lv_style_init(&s_Parameter_6);
//        lv_style_set_text_font(&s_Parameter_6, poppins);

        lv_style_init(&s_Frame_94_8);

        lv_style_init(&s_K_6);
//        lv_style_set_text_font(&s_K_6, poppins);

        lv_style_init(&s_Frame_98_11);

        lv_style_init(&s_Na_6);
//        lv_style_set_text_font(&s_Na_6, poppins);

        lv_style_init(&s_Frame_97_8);

        lv_style_init(&s_Ca_6);
//        lv_style_set_text_font(&s_Ca_6, poppins);

        lv_style_init(&s_Frame_110_8);

        lv_style_init(&s_Frame_93_8);

        lv_style_init(&s_Results_9);
//        lv_style_set_text_font(&s_Results_9, poppins);

        lv_style_init(&s_Frame_95_8);

        lv_style_init(&s_0_mV_9);
//        lv_style_set_text_font(&s_0_mV_9, poppins);

        lv_style_init(&s_Frame_99_3);

        lv_style_init(&s_0_mV_10);
//        lv_style_set_text_font(&s_0_mV_10, poppins);

        lv_style_init(&s_Frame_98_12);

        lv_style_init(&s_0_mV_11);
//        lv_style_set_text_font(&s_0_mV_11, poppins);

        lv_style_init(&s_Frame_34_1);

        lv_style_init(&s_Frame_85_1);

        lv_style_init(&s_Icons_3);

        lv_style_init(&s_Icon_3);

        lv_style_init(&s_System_diagnostic_1);
//        lv_style_set_text_font(&s_System_diagnostic_1, poppins);

        lv_style_init(&s_Frame_167_1);

        lv_style_init(&s_Buttons_5);

        lv_style_init(&s_Re_try_Calibration_5);
//        lv_style_set_text_font(&s_Re_try_Calibration_5, poppins);

        lv_style_init(&s_Buttons_6);

        lv_style_init(&s_Re_try_Calibration_6);
//        lv_style_set_text_font(&s_Re_try_Calibration_6, poppins);

        lv_style_init(&s_Buttons_7);

        lv_style_init(&s_Re_try_Calibration_7);
//        lv_style_set_text_font(&s_Re_try_Calibration_7, poppins);

        lv_style_init(&s_Buttons_8);

        lv_style_init(&s_Re_try_Calibration_8);
//        lv_style_set_text_font(&s_Re_try_Calibration_8, poppins);

        lv_style_init(&s_Buttons_9);

        lv_style_init(&s_Re_try_Calibration_9);
//        lv_style_set_text_font(&s_Re_try_Calibration_9, poppins);

        lv_style_init(&s_Frame_170_1);

        lv_style_init(&s_Frame_155_1);

        lv_style_init(&s_Diagnosis_1);
//        lv_style_set_text_font(&s_Diagnosis_1, poppins);

        lv_style_init(&s_Frame_134_2);

        lv_style_init(&s_Frame_109_9);

        lv_style_init(&s_Frame_91_9);

        lv_style_init(&s_Parameter_7);
//        lv_style_set_text_font(&s_Parameter_7, poppins);

        lv_style_init(&s_Frame_94_9);

        lv_style_init(&s_K_7);
//        lv_style_set_text_font(&s_K_7, poppins);

        lv_style_init(&s_Frame_97_9);

        lv_style_init(&s_Na_7);
//        lv_style_set_text_font(&s_Na_7, poppins);

        lv_style_init(&s_Frame_100_3);

        lv_style_init(&s_Ca_7);
//        lv_style_set_text_font(&s_Ca_7, poppins);

        lv_style_init(&s_Frame_103_1);

        lv_style_init(&s_pH_1);
//        lv_style_set_text_font(&s_pH_1, poppins);

        lv_style_init(&s_Frame_106_1);

        lv_style_init(&s_Cl_1);
//        lv_style_set_text_font(&s_Cl_1, poppins);

        lv_style_init(&s_Frame_110_9);

        lv_style_init(&s_Frame_93_9);

        lv_style_init(&s_Results_10);
//        lv_style_set_text_font(&s_Results_10, poppins);

        lv_style_init(&s_Frame_95_9);

        lv_style_init(&s_542_mV_2);
//        lv_style_set_text_font(&s_542_mV_2, poppins);

        lv_style_init(&s_Frame_98_13);

        lv_style_init(&s_346_mV_2);
//        lv_style_set_text_font(&s_346_mV_2, poppins);

        lv_style_init(&s_Frame_101_3);

        lv_style_init(&s_2_mV_4);
//        lv_style_set_text_font(&s_2_mV_4, poppins);

        lv_style_init(&s_Frame_104_1);

        lv_style_init(&s_1_mV_1);
//        lv_style_set_text_font(&s_1_mV_1, poppins);

        lv_style_init(&s_Frame_107_1);

        lv_style_init(&s_2_mV_5);
//        lv_style_set_text_font(&s_2_mV_5, poppins);

        lv_style_init(&s_Frame_163_1);

        lv_style_init(&s_Frame_162_1);

        lv_style_init(&s_Frame_161_1);

        lv_style_init(&s_Cal_1_1);
//        lv_style_set_text_font(&s_Cal_1_1, poppins);

        lv_style_init(&s_Frame_160_2);

        lv_style_init(&s_Refresh_Values_2);
//        lv_style_set_text_font(&s_Refresh_Values_2, poppins);

        lv_style_init(&s_Icons_4);

        lv_style_init(&s_Icon_4);

        lv_style_init(&s_Frame_136_2);

        lv_style_init(&s_Frame_109_10);

        lv_style_init(&s_Frame_91_10);

        lv_style_init(&s_Parameter_8);
//        lv_style_set_text_font(&s_Parameter_8, poppins);

        lv_style_init(&s_Frame_94_10);

        lv_style_init(&s_K_8);
//        lv_style_set_text_font(&s_K_8, poppins);

        lv_style_init(&s_Frame_97_10);

        lv_style_init(&s_Na_8);
//        lv_style_set_text_font(&s_Na_8, poppins);

        lv_style_init(&s_Frame_100_4);

        lv_style_init(&s_Ca_8);
//        lv_style_set_text_font(&s_Ca_8, poppins);

        lv_style_init(&s_Frame_110_10);

        lv_style_init(&s_Frame_93_10);

        lv_style_init(&s_Results_11);
//        lv_style_set_text_font(&s_Results_11, poppins);

        lv_style_init(&s_Frame_95_10);

        lv_style_init(&s_621_mV_1);
//        lv_style_set_text_font(&s_621_mV_1, poppins);

        lv_style_init(&s_Frame_98_14);

        lv_style_init(&s_357_mV_1);
//        lv_style_set_text_font(&s_357_mV_1, poppins);

        lv_style_init(&s_Frame_101_4);

        lv_style_init(&s_2_mV_6);
//        lv_style_set_text_font(&s_2_mV_6, poppins);

        lv_style_init(&s_4_140_1_25_7_4_100_mmol_L_1);
//        lv_style_set_text_font(&s_4_140_1_25_7_4_100_mmol_L_1, poppins);

        lv_style_init(&s_Frame_166_1);

        lv_style_init(&s_Frame_165_1);

        lv_style_init(&s_Frame_164_1);

        lv_style_init(&s_Cal_2_1);
//        lv_style_set_text_font(&s_Cal_2_1, poppins);

        lv_style_init(&s_Frame_160_3);

        lv_style_init(&s_Refresh_Values_3);
//        lv_style_set_text_font(&s_Refresh_Values_3, poppins);

        lv_style_init(&s_Icons_5);

        lv_style_init(&s_Icon_5);

        lv_style_init(&s_Frame_136_3);

        lv_style_init(&s_Frame_109_11);

        lv_style_init(&s_Frame_91_11);

        lv_style_init(&s_Parameter_9);
//        lv_style_set_text_font(&s_Parameter_9, poppins);

        lv_style_init(&s_Frame_94_11);

        lv_style_init(&s_K_9);
//        lv_style_set_text_font(&s_K_9, poppins);

        lv_style_init(&s_Frame_97_11);

        lv_style_init(&s_Na_9);
//        lv_style_set_text_font(&s_Na_9, poppins);

        lv_style_init(&s_Frame_100_5);

        lv_style_init(&s_Ca_9);
//        lv_style_set_text_font(&s_Ca_9, poppins);

        lv_style_init(&s_Frame_110_11);

        lv_style_init(&s_Frame_93_11);

        lv_style_init(&s_Results_12);
//        lv_style_set_text_font(&s_Results_12, poppins);

        lv_style_init(&s_Frame_95_11);

        lv_style_init(&s_542_mV_3);
//        lv_style_set_text_font(&s_542_mV_3, poppins);

        lv_style_init(&s_Frame_98_15);

        lv_style_init(&s_346_mV_3);
//        lv_style_set_text_font(&s_346_mV_3, poppins);

        lv_style_init(&s_Frame_101_5);

        lv_style_init(&s_2_mV_7);
//        lv_style_set_text_font(&s_2_mV_7, poppins);

        lv_style_init(&s_8_110_2_5_7_70_mmol_L_1);
//        lv_style_set_text_font(&s_8_110_2_5_7_70_mmol_L_1, poppins);

        lv_style_init(&s_Frame_173_1);

        lv_style_init(&s_Results_13);
//        lv_style_set_text_font(&s_Results_13, poppins);

        lv_style_init(&s_Frame_172_1);

        lv_style_init(&s_Frame_133_1);

        lv_style_init(&s_Status_1);
//        lv_style_set_text_font(&s_Status_1, poppins);

        lv_style_init(&s_18_1);
//        lv_style_set_text_font(&s_18_1, poppins);

        lv_style_init(&s_Frame_134_3);

        lv_style_init(&s_System_is_in_idle_mode_1);
//        lv_style_set_text_font(&s_System_is_in_idle_mode_1, poppins);

        lv_style_init(&s_4_1);
//        lv_style_set_text_font(&s_4_1, poppins);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    //lv_obj_set_name_static(lv_obj_0, "test_screen_#");

    lv_obj_t * o_Setting_data = lv_canvas_create(lv_obj_0);
    // lv_obj_set_name(o_Setting_data, "o_Setting_data");
    lv_obj_set_x(o_Setting_data, 0);
    lv_obj_set_y(o_Setting_data, 0);
    lv_obj_set_width(o_Setting_data, 800);
    lv_obj_set_height(o_Setting_data, 480);
    lv_obj_add_style(o_Setting_data, &s_Setting_data, 0);
    lv_obj_t * o_Frame_171 = lv_canvas_create(o_Setting_data);
    // lv_obj_set_name(o_Frame_171, "o_Frame_171");
    lv_obj_set_x(o_Frame_171, 24);
    lv_obj_set_y(o_Frame_171, 292);
    lv_obj_set_width(o_Frame_171, 602);
    lv_obj_set_height(o_Frame_171, 140);
    lv_obj_add_style(o_Frame_171, &s_Frame_171, 0);
    lv_obj_t * o_Frame_153 = lv_canvas_create(o_Frame_171);
    // lv_obj_set_name(o_Frame_153, "o_Frame_153");
    lv_obj_set_x(o_Frame_153, 0);
    lv_obj_set_y(o_Frame_153, 0);
    lv_obj_set_width(o_Frame_153, 190);
    lv_obj_set_height(o_Frame_153, 111);
    lv_obj_add_style(o_Frame_153, &s_Frame_153, 0);
    lv_obj_t * o_Sensors = lv_label_create(o_Frame_153);
    // lv_obj_set_name(o_Sensors, "o_Sensors");
    lv_obj_set_x(o_Sensors, 0);
    lv_obj_set_y(o_Sensors, 0);
    lv_obj_set_width(o_Sensors, 190);
    lv_obj_set_height(o_Sensors, 21);
    lv_label_set_text(o_Sensors, "Sensors");
    lv_obj_add_style(o_Sensors, &s_Sensors, 0);
    
    lv_obj_t * o_Frame_135 = lv_canvas_create(o_Frame_153);
    // lv_obj_set_name(o_Frame_135, "o_Frame_135");
    lv_obj_set_x(o_Frame_135, 0);
    lv_obj_set_y(o_Frame_135, 29);
    lv_obj_set_width(o_Frame_135, 190);
    lv_obj_set_height(o_Frame_135, 82);
    lv_obj_add_style(o_Frame_135, &s_Frame_135, 0);
    lv_obj_t * o_Frame_109 = lv_canvas_create(o_Frame_135);
    // lv_obj_set_name(o_Frame_109, "o_Frame_109");
    lv_obj_set_x(o_Frame_109, 0);
    lv_obj_set_y(o_Frame_109, 0);
    lv_obj_set_width(o_Frame_109, 80);
    lv_obj_set_height(o_Frame_109, 82);
    lv_obj_add_style(o_Frame_109, &s_Frame_109, 0);
    lv_obj_t * o_Frame_91 = lv_canvas_create(o_Frame_109);
    // lv_obj_set_name(o_Frame_91, "o_Frame_91");
    lv_obj_set_x(o_Frame_91, 0);
    lv_obj_set_y(o_Frame_91, 0);
    lv_obj_set_width(o_Frame_91, 80);
    lv_obj_set_height(o_Frame_91, 24);
    lv_obj_add_style(o_Frame_91, &s_Frame_91, 0);
    lv_obj_t * o_Name = lv_label_create(o_Frame_91);
    // lv_obj_set_name(o_Name, "o_Name");
    lv_obj_set_x(o_Name, 8);
    lv_obj_set_y(o_Name, 3);
    lv_obj_set_width(o_Name, 37);
    lv_obj_set_height(o_Name, 18);
    lv_label_set_text(o_Name, "Name");
    lv_obj_add_style(o_Name, &s_Name, 0);
    
    lv_obj_t * o_Frame_94 = lv_canvas_create(o_Frame_109);
    // lv_obj_set_name(o_Frame_94, "o_Frame_94");
    lv_obj_set_x(o_Frame_94, 0);
    lv_obj_set_y(o_Frame_94, 25);
    lv_obj_set_width(o_Frame_94, 80);
    lv_obj_set_height(o_Frame_94, 28);
    lv_obj_add_style(o_Frame_94, &s_Frame_94, 0);
    lv_obj_t * o_Liquid = lv_label_create(o_Frame_94);
    // lv_obj_set_name(o_Liquid, "o_Liquid");
    lv_obj_set_x(o_Liquid, 8);
    lv_obj_set_y(o_Liquid, 4);
    lv_obj_set_width(o_Liquid, 35);
    lv_obj_set_height(o_Liquid, 18);
    lv_label_set_text(o_Liquid, "Liquid");
    lv_obj_add_style(o_Liquid, &s_Liquid, 0);
    
    lv_obj_t * o_Frame_97 = lv_canvas_create(o_Frame_109);
    // lv_obj_set_name(o_Frame_97, "o_Frame_97");
    lv_obj_set_x(o_Frame_97, 0);
    lv_obj_set_y(o_Frame_97, 54);
    lv_obj_set_width(o_Frame_97, 80);
    lv_obj_set_height(o_Frame_97, 28);
    lv_obj_add_style(o_Frame_97, &s_Frame_97, 0);
    lv_obj_t * o_Probe = lv_label_create(o_Frame_97);
    // lv_obj_set_name(o_Probe, "o_Probe");
    lv_obj_set_x(o_Probe, 8);
    lv_obj_set_y(o_Probe, 4);
    lv_obj_set_width(o_Probe, 35);
    lv_obj_set_height(o_Probe, 18);
    lv_label_set_text(o_Probe, "Probe");
    lv_obj_add_style(o_Probe, &s_Probe, 0);
    
    lv_obj_t * o_Frame_110 = lv_canvas_create(o_Frame_135);
    // lv_obj_set_name(o_Frame_110, "o_Frame_110");
    lv_obj_set_x(o_Frame_110, 80);
    lv_obj_set_y(o_Frame_110, 0);
    lv_obj_set_width(o_Frame_110, 110);
    lv_obj_set_height(o_Frame_110, 82);
    lv_obj_add_style(o_Frame_110, &s_Frame_110, 0);
    lv_obj_t * o_Frame_93 = lv_canvas_create(o_Frame_110);
    // lv_obj_set_name(o_Frame_93, "o_Frame_93");
    lv_obj_set_x(o_Frame_93, 0);
    lv_obj_set_y(o_Frame_93, 0);
    lv_obj_set_width(o_Frame_93, 110);
    lv_obj_set_height(o_Frame_93, 24);
    lv_obj_add_style(o_Frame_93, &s_Frame_93, 0);
    lv_obj_t * o_Results = lv_label_create(o_Frame_93);
    // lv_obj_set_name(o_Results, "o_Results");
    lv_obj_set_x(o_Results, 8);
    lv_obj_set_y(o_Results, 3);
    lv_obj_set_width(o_Results, 43);
    lv_obj_set_height(o_Results, 18);
    lv_label_set_text(o_Results, "Results");
    lv_obj_add_style(o_Results, &s_Results, 0);
    
    lv_obj_t * o_Frame_95 = lv_canvas_create(o_Frame_110);
    // lv_obj_set_name(o_Frame_95, "o_Frame_95");
    lv_obj_set_x(o_Frame_95, 0);
    lv_obj_set_y(o_Frame_95, 25);
    lv_obj_set_width(o_Frame_95, 110);
    lv_obj_set_height(o_Frame_95, 28);
    lv_obj_add_style(o_Frame_95, &s_Frame_95, 0);
    lv_obj_t * o_1528_mV = lv_label_create(o_Frame_95);
    // lv_obj_set_name(o_1528_mV, "o_1528_mV");
    lv_obj_set_x(o_1528_mV, 8);
    lv_obj_set_y(o_1528_mV, 4);
    lv_obj_set_width(o_1528_mV, 50);
    lv_obj_set_height(o_1528_mV, 18);
    lv_label_set_text(o_1528_mV, "1528 mV");
    lv_obj_add_style(o_1528_mV, &s_1528_mV, 0);
    
    lv_obj_t * o_Frame_98 = lv_canvas_create(o_Frame_110);
    // lv_obj_set_name(o_Frame_98, "o_Frame_98");
    lv_obj_set_x(o_Frame_98, 0);
    lv_obj_set_y(o_Frame_98, 54);
    lv_obj_set_width(o_Frame_98, 110);
    lv_obj_set_height(o_Frame_98, 28);
    lv_obj_add_style(o_Frame_98, &s_Frame_98, 0);
    lv_obj_t * o_0 = lv_label_create(o_Frame_98);
    // lv_obj_set_name(o_0, "o_0");
    lv_obj_set_x(o_0, 8);
    lv_obj_set_y(o_0, 4);
    lv_obj_set_width(o_0, 8);
    lv_obj_set_height(o_0, 18);
    lv_label_set_text(o_0, "0");
    lv_obj_add_style(o_0, &s_0, 0);
    
    lv_obj_t * o_Frame_168 = lv_canvas_create(o_Frame_171);
    // lv_obj_set_name(o_Frame_168, "o_Frame_168");
    lv_obj_set_x(o_Frame_168, 206);
    lv_obj_set_y(o_Frame_168, 0);
    lv_obj_set_width(o_Frame_168, 190);
    lv_obj_set_height(o_Frame_168, 140);
    lv_obj_add_style(o_Frame_168, &s_Frame_168, 0);
    lv_obj_t * o_SMPL = lv_label_create(o_Frame_168);
    // lv_obj_set_name(o_SMPL, "o_SMPL");
    lv_obj_set_x(o_SMPL, 0);
    lv_obj_set_y(o_SMPL, 0);
    lv_obj_set_width(o_SMPL, 190);
    lv_obj_set_height(o_SMPL, 21);
    lv_label_set_text(o_SMPL, "SMPL");
    lv_obj_add_style(o_SMPL, &s_SMPL, 0);
    
    lv_obj_t * o_Frame_135_1 = lv_canvas_create(o_Frame_168);
    // lv_obj_set_name(o_Frame_135_1, "o_Frame_135_1");
    lv_obj_set_x(o_Frame_135_1, 0);
    lv_obj_set_y(o_Frame_135_1, 29);
    lv_obj_set_width(o_Frame_135_1, 190);
    lv_obj_set_height(o_Frame_135_1, 111);
    lv_obj_add_style(o_Frame_135_1, &s_Frame_135_1, 0);
    lv_obj_t * o_Frame_109_1 = lv_canvas_create(o_Frame_135_1);
    // lv_obj_set_name(o_Frame_109_1, "o_Frame_109_1");
    lv_obj_set_x(o_Frame_109_1, 0);
    lv_obj_set_y(o_Frame_109_1, 0);
    lv_obj_set_width(o_Frame_109_1, 80);
    lv_obj_set_height(o_Frame_109_1, 111);
    lv_obj_add_style(o_Frame_109_1, &s_Frame_109_1, 0);
    lv_obj_t * o_Frame_91_1 = lv_canvas_create(o_Frame_109_1);
    // lv_obj_set_name(o_Frame_91_1, "o_Frame_91_1");
    lv_obj_set_x(o_Frame_91_1, 0);
    lv_obj_set_y(o_Frame_91_1, 0);
    lv_obj_set_width(o_Frame_91_1, 80);
    lv_obj_set_height(o_Frame_91_1, 24);
    lv_obj_add_style(o_Frame_91_1, &s_Frame_91_1, 0);
    lv_obj_t * o_Parameter = lv_label_create(o_Frame_91_1);
    // lv_obj_set_name(o_Parameter, "o_Parameter");
    lv_obj_set_x(o_Parameter, 8);
    lv_obj_set_y(o_Parameter, 3);
    lv_obj_set_width(o_Parameter, 64);
    lv_obj_set_height(o_Parameter, 18);
    lv_label_set_text(o_Parameter, "Parameter");
    lv_obj_add_style(o_Parameter, &s_Parameter, 0);
    
    lv_obj_t * o_Frame_94_1 = lv_canvas_create(o_Frame_109_1);
    // lv_obj_set_name(o_Frame_94_1, "o_Frame_94_1");
    lv_obj_set_x(o_Frame_94_1, 0);
    lv_obj_set_y(o_Frame_94_1, 25);
    lv_obj_set_width(o_Frame_94_1, 80);
    lv_obj_set_height(o_Frame_94_1, 28);
    lv_obj_add_style(o_Frame_94_1, &s_Frame_94_1, 0);
    lv_obj_t * o_K = lv_label_create(o_Frame_94_1);
    // lv_obj_set_name(o_K, "o_K");
    lv_obj_set_x(o_K, 8);
    lv_obj_set_y(o_K, 4);
    lv_obj_set_width(o_K, 8);
    lv_obj_set_height(o_K, 18);
    lv_label_set_text(o_K, "K");
    lv_obj_add_style(o_K, &s_K, 0);
    
    lv_obj_t * o_Frame_98_1 = lv_canvas_create(o_Frame_109_1);
    // lv_obj_set_name(o_Frame_98_1, "o_Frame_98_1");
    lv_obj_set_x(o_Frame_98_1, 0);
    lv_obj_set_y(o_Frame_98_1, 54);
    lv_obj_set_width(o_Frame_98_1, 80);
    lv_obj_set_height(o_Frame_98_1, 28);
    lv_obj_add_style(o_Frame_98_1, &s_Frame_98_1, 0);
    lv_obj_t * o_Na = lv_label_create(o_Frame_98_1);
    // lv_obj_set_name(o_Na, "o_Na");
    lv_obj_set_x(o_Na, 8);
    lv_obj_set_y(o_Na, 4);
    lv_obj_set_width(o_Na, 17);
    lv_obj_set_height(o_Na, 18);
    lv_label_set_text(o_Na, "Na");
    lv_obj_add_style(o_Na, &s_Na, 0);
    
    lv_obj_t * o_Frame_97_1 = lv_canvas_create(o_Frame_109_1);
    // lv_obj_set_name(o_Frame_97_1, "o_Frame_97_1");
    lv_obj_set_x(o_Frame_97_1, 0);
    lv_obj_set_y(o_Frame_97_1, 83);
    lv_obj_set_width(o_Frame_97_1, 80);
    lv_obj_set_height(o_Frame_97_1, 28);
    lv_obj_add_style(o_Frame_97_1, &s_Frame_97_1, 0);
    lv_obj_t * o_Ca = lv_label_create(o_Frame_97_1);
    // lv_obj_set_name(o_Ca, "o_Ca");
    lv_obj_set_x(o_Ca, 8);
    lv_obj_set_y(o_Ca, 4);
    lv_obj_set_width(o_Ca, 18);
    lv_obj_set_height(o_Ca, 18);
    lv_label_set_text(o_Ca, "Ca");
    lv_obj_add_style(o_Ca, &s_Ca, 0);
    
    lv_obj_t * o_Frame_110_1 = lv_canvas_create(o_Frame_135_1);
    // lv_obj_set_name(o_Frame_110_1, "o_Frame_110_1");
    lv_obj_set_x(o_Frame_110_1, 80);
    lv_obj_set_y(o_Frame_110_1, 0);
    lv_obj_set_width(o_Frame_110_1, 110);
    lv_obj_set_height(o_Frame_110_1, 111);
    lv_obj_add_style(o_Frame_110_1, &s_Frame_110_1, 0);
    lv_obj_t * o_Frame_93_1 = lv_canvas_create(o_Frame_110_1);
    // lv_obj_set_name(o_Frame_93_1, "o_Frame_93_1");
    lv_obj_set_x(o_Frame_93_1, 0);
    lv_obj_set_y(o_Frame_93_1, 0);
    lv_obj_set_width(o_Frame_93_1, 110);
    lv_obj_set_height(o_Frame_93_1, 24);
    lv_obj_add_style(o_Frame_93_1, &s_Frame_93_1, 0);
    lv_obj_t * o_Results_1 = lv_label_create(o_Frame_93_1);
    // lv_obj_set_name(o_Results_1, "o_Results_1");
    lv_obj_set_x(o_Results_1, 8);
    lv_obj_set_y(o_Results_1, 3);
    lv_obj_set_width(o_Results_1, 43);
    lv_obj_set_height(o_Results_1, 18);
    lv_label_set_text(o_Results_1, "Results");
    lv_obj_add_style(o_Results_1, &s_Results_1, 0);
    
    lv_obj_t * o_Frame_95_1 = lv_canvas_create(o_Frame_110_1);
    // lv_obj_set_name(o_Frame_95_1, "o_Frame_95_1");
    lv_obj_set_x(o_Frame_95_1, 0);
    lv_obj_set_y(o_Frame_95_1, 25);
    lv_obj_set_width(o_Frame_95_1, 110);
    lv_obj_set_height(o_Frame_95_1, 28);
    lv_obj_add_style(o_Frame_95_1, &s_Frame_95_1, 0);
    lv_obj_t * o_0_mV = lv_label_create(o_Frame_95_1);
    // lv_obj_set_name(o_0_mV, "o_0_mV");
    lv_obj_set_x(o_0_mV, 8);
    lv_obj_set_y(o_0_mV, 4);
    lv_obj_set_width(o_0_mV, 32);
    lv_obj_set_height(o_0_mV, 18);
    lv_label_set_text(o_0_mV, "0 mV");
    lv_obj_add_style(o_0_mV, &s_0_mV, 0);
    
    lv_obj_t * o_Frame_99 = lv_canvas_create(o_Frame_110_1);
    // lv_obj_set_name(o_Frame_99, "o_Frame_99");
    lv_obj_set_x(o_Frame_99, 0);
    lv_obj_set_y(o_Frame_99, 54);
    lv_obj_set_width(o_Frame_99, 110);
    lv_obj_set_height(o_Frame_99, 28);
    lv_obj_add_style(o_Frame_99, &s_Frame_99, 0);
    lv_obj_t * o_0_mV_1 = lv_label_create(o_Frame_99);
    // lv_obj_set_name(o_0_mV_1, "o_0_mV_1");
    lv_obj_set_x(o_0_mV_1, 8);
    lv_obj_set_y(o_0_mV_1, 4);
    lv_obj_set_width(o_0_mV_1, 32);
    lv_obj_set_height(o_0_mV_1, 18);
    lv_label_set_text(o_0_mV_1, "0 mV");
    lv_obj_add_style(o_0_mV_1, &s_0_mV_1, 0);
    
    lv_obj_t * o_Frame_98_2 = lv_canvas_create(o_Frame_110_1);
    // lv_obj_set_name(o_Frame_98_2, "o_Frame_98_2");
    lv_obj_set_x(o_Frame_98_2, 0);
    lv_obj_set_y(o_Frame_98_2, 83);
    lv_obj_set_width(o_Frame_98_2, 110);
    lv_obj_set_height(o_Frame_98_2, 28);
    lv_obj_add_style(o_Frame_98_2, &s_Frame_98_2, 0);
    lv_obj_t * o_0_mV_2 = lv_label_create(o_Frame_98_2);
    // lv_obj_set_name(o_0_mV_2, "o_0_mV_2");
    lv_obj_set_x(o_0_mV_2, 8);
    lv_obj_set_y(o_0_mV_2, 4);
    lv_obj_set_width(o_0_mV_2, 32);
    lv_obj_set_height(o_0_mV_2, 18);
    lv_label_set_text(o_0_mV_2, "0 mV");
    lv_obj_add_style(o_0_mV_2, &s_0_mV_2, 0);
    
    lv_obj_t * o_Frame_169 = lv_canvas_create(o_Frame_171);
    // lv_obj_set_name(o_Frame_169, "o_Frame_169");
    lv_obj_set_x(o_Frame_169, 412);
    lv_obj_set_y(o_Frame_169, 0);
    lv_obj_set_width(o_Frame_169, 190);
    lv_obj_set_height(o_Frame_169, 140);
    lv_obj_add_style(o_Frame_169, &s_Frame_169, 0);
    lv_obj_t * o_Result = lv_label_create(o_Frame_169);
    // lv_obj_set_name(o_Result, "o_Result");
    lv_obj_set_x(o_Result, 0);
    lv_obj_set_y(o_Result, 0);
    lv_obj_set_width(o_Result, 190);
    lv_obj_set_height(o_Result, 21);
    lv_label_set_text(o_Result, "Result");
    lv_obj_add_style(o_Result, &s_Result, 0);
    
    lv_obj_t * o_Frame_135_2 = lv_canvas_create(o_Frame_169);
    // lv_obj_set_name(o_Frame_135_2, "o_Frame_135_2");
    lv_obj_set_x(o_Frame_135_2, 0);
    lv_obj_set_y(o_Frame_135_2, 29);
    lv_obj_set_width(o_Frame_135_2, 190);
    lv_obj_set_height(o_Frame_135_2, 111);
    lv_obj_add_style(o_Frame_135_2, &s_Frame_135_2, 0);
    lv_obj_t * o_Frame_109_2 = lv_canvas_create(o_Frame_135_2);
    // lv_obj_set_name(o_Frame_109_2, "o_Frame_109_2");
    lv_obj_set_x(o_Frame_109_2, 0);
    lv_obj_set_y(o_Frame_109_2, 0);
    lv_obj_set_width(o_Frame_109_2, 80);
    lv_obj_set_height(o_Frame_109_2, 111);
    lv_obj_add_style(o_Frame_109_2, &s_Frame_109_2, 0);
    lv_obj_t * o_Frame_91_2 = lv_canvas_create(o_Frame_109_2);
    // lv_obj_set_name(o_Frame_91_2, "o_Frame_91_2");
    lv_obj_set_x(o_Frame_91_2, 0);
    lv_obj_set_y(o_Frame_91_2, 0);
    lv_obj_set_width(o_Frame_91_2, 80);
    lv_obj_set_height(o_Frame_91_2, 24);
    lv_obj_add_style(o_Frame_91_2, &s_Frame_91_2, 0);
    lv_obj_t * o_Parameter_1 = lv_label_create(o_Frame_91_2);
    // lv_obj_set_name(o_Parameter_1, "o_Parameter_1");
    lv_obj_set_x(o_Parameter_1, 8);
    lv_obj_set_y(o_Parameter_1, 3);
    lv_obj_set_width(o_Parameter_1, 64);
    lv_obj_set_height(o_Parameter_1, 18);
    lv_label_set_text(o_Parameter_1, "Parameter");
    lv_obj_add_style(o_Parameter_1, &s_Parameter_1, 0);
    
    lv_obj_t * o_Frame_94_2 = lv_canvas_create(o_Frame_109_2);
    // lv_obj_set_name(o_Frame_94_2, "o_Frame_94_2");
    lv_obj_set_x(o_Frame_94_2, 0);
    lv_obj_set_y(o_Frame_94_2, 25);
    lv_obj_set_width(o_Frame_94_2, 80);
    lv_obj_set_height(o_Frame_94_2, 28);
    lv_obj_add_style(o_Frame_94_2, &s_Frame_94_2, 0);
    lv_obj_t * o_K_1 = lv_label_create(o_Frame_94_2);
    // lv_obj_set_name(o_K_1, "o_K_1");
    lv_obj_set_x(o_K_1, 8);
    lv_obj_set_y(o_K_1, 4);
    lv_obj_set_width(o_K_1, 8);
    lv_obj_set_height(o_K_1, 18);
    lv_label_set_text(o_K_1, "K");
    lv_obj_add_style(o_K_1, &s_K_1, 0);
    
    lv_obj_t * o_Frame_98_3 = lv_canvas_create(o_Frame_109_2);
    // lv_obj_set_name(o_Frame_98_3, "o_Frame_98_3");
    lv_obj_set_x(o_Frame_98_3, 0);
    lv_obj_set_y(o_Frame_98_3, 54);
    lv_obj_set_width(o_Frame_98_3, 80);
    lv_obj_set_height(o_Frame_98_3, 28);
    lv_obj_add_style(o_Frame_98_3, &s_Frame_98_3, 0);
    lv_obj_t * o_Na_1 = lv_label_create(o_Frame_98_3);
    // lv_obj_set_name(o_Na_1, "o_Na_1");
    lv_obj_set_x(o_Na_1, 8);
    lv_obj_set_y(o_Na_1, 4);
    lv_obj_set_width(o_Na_1, 17);
    lv_obj_set_height(o_Na_1, 18);
    lv_label_set_text(o_Na_1, "Na");
    lv_obj_add_style(o_Na_1, &s_Na_1, 0);
    
    lv_obj_t * o_Frame_97_2 = lv_canvas_create(o_Frame_109_2);
    // lv_obj_set_name(o_Frame_97_2, "o_Frame_97_2");
    lv_obj_set_x(o_Frame_97_2, 0);
    lv_obj_set_y(o_Frame_97_2, 83);
    lv_obj_set_width(o_Frame_97_2, 80);
    lv_obj_set_height(o_Frame_97_2, 28);
    lv_obj_add_style(o_Frame_97_2, &s_Frame_97_2, 0);
    lv_obj_t * o_Ca_1 = lv_label_create(o_Frame_97_2);
    // lv_obj_set_name(o_Ca_1, "o_Ca_1");
    lv_obj_set_x(o_Ca_1, 8);
    lv_obj_set_y(o_Ca_1, 4);
    lv_obj_set_width(o_Ca_1, 18);
    lv_obj_set_height(o_Ca_1, 18);
    lv_label_set_text(o_Ca_1, "Ca");
    lv_obj_add_style(o_Ca_1, &s_Ca_1, 0);
    
    lv_obj_t * o_Frame_110_2 = lv_canvas_create(o_Frame_135_2);
    // lv_obj_set_name(o_Frame_110_2, "o_Frame_110_2");
    lv_obj_set_x(o_Frame_110_2, 80);
    lv_obj_set_y(o_Frame_110_2, 0);
    lv_obj_set_width(o_Frame_110_2, 110);
    lv_obj_set_height(o_Frame_110_2, 111);
    lv_obj_add_style(o_Frame_110_2, &s_Frame_110_2, 0);
    lv_obj_t * o_Frame_93_2 = lv_canvas_create(o_Frame_110_2);
    // lv_obj_set_name(o_Frame_93_2, "o_Frame_93_2");
    lv_obj_set_x(o_Frame_93_2, 0);
    lv_obj_set_y(o_Frame_93_2, 0);
    lv_obj_set_width(o_Frame_93_2, 110);
    lv_obj_set_height(o_Frame_93_2, 24);
    lv_obj_add_style(o_Frame_93_2, &s_Frame_93_2, 0);
    lv_obj_t * o_Results_2 = lv_label_create(o_Frame_93_2);
    // lv_obj_set_name(o_Results_2, "o_Results_2");
    lv_obj_set_x(o_Results_2, 8);
    lv_obj_set_y(o_Results_2, 3);
    lv_obj_set_width(o_Results_2, 43);
    lv_obj_set_height(o_Results_2, 18);
    lv_label_set_text(o_Results_2, "Results");
    lv_obj_add_style(o_Results_2, &s_Results_2, 0);
    
    lv_obj_t * o_Frame_95_2 = lv_canvas_create(o_Frame_110_2);
    // lv_obj_set_name(o_Frame_95_2, "o_Frame_95_2");
    lv_obj_set_x(o_Frame_95_2, 0);
    lv_obj_set_y(o_Frame_95_2, 25);
    lv_obj_set_width(o_Frame_95_2, 110);
    lv_obj_set_height(o_Frame_95_2, 28);
    lv_obj_add_style(o_Frame_95_2, &s_Frame_95_2, 0);
    lv_obj_t * o_0_mV_3 = lv_label_create(o_Frame_95_2);
    // lv_obj_set_name(o_0_mV_3, "o_0_mV_3");
    lv_obj_set_x(o_0_mV_3, 8);
    lv_obj_set_y(o_0_mV_3, 4);
    lv_obj_set_width(o_0_mV_3, 32);
    lv_obj_set_height(o_0_mV_3, 18);
    lv_label_set_text(o_0_mV_3, "0 mV");
    lv_obj_add_style(o_0_mV_3, &s_0_mV_3, 0);
    
    lv_obj_t * o_Frame_99_1 = lv_canvas_create(o_Frame_110_2);
    // lv_obj_set_name(o_Frame_99_1, "o_Frame_99_1");
    lv_obj_set_x(o_Frame_99_1, 0);
    lv_obj_set_y(o_Frame_99_1, 54);
    lv_obj_set_width(o_Frame_99_1, 110);
    lv_obj_set_height(o_Frame_99_1, 28);
    lv_obj_add_style(o_Frame_99_1, &s_Frame_99_1, 0);
    lv_obj_t * o_0_mV_4 = lv_label_create(o_Frame_99_1);
    // lv_obj_set_name(o_0_mV_4, "o_0_mV_4");
    lv_obj_set_x(o_0_mV_4, 8);
    lv_obj_set_y(o_0_mV_4, 4);
    lv_obj_set_width(o_0_mV_4, 32);
    lv_obj_set_height(o_0_mV_4, 18);
    lv_label_set_text(o_0_mV_4, "0 mV");
    lv_obj_add_style(o_0_mV_4, &s_0_mV_4, 0);
    
    lv_obj_t * o_Frame_98_4 = lv_canvas_create(o_Frame_110_2);
    // lv_obj_set_name(o_Frame_98_4, "o_Frame_98_4");
    lv_obj_set_x(o_Frame_98_4, 0);
    lv_obj_set_y(o_Frame_98_4, 83);
    lv_obj_set_width(o_Frame_98_4, 110);
    lv_obj_set_height(o_Frame_98_4, 28);
    lv_obj_add_style(o_Frame_98_4, &s_Frame_98_4, 0);
    lv_obj_t * o_0_mV_5 = lv_label_create(o_Frame_98_4);
    // lv_obj_set_name(o_0_mV_5, "o_0_mV_5");
    lv_obj_set_x(o_0_mV_5, 8);
    lv_obj_set_y(o_0_mV_5, 4);
    lv_obj_set_width(o_0_mV_5, 32);
    lv_obj_set_height(o_0_mV_5, 18);
    lv_label_set_text(o_0_mV_5, "0 mV");
    lv_obj_add_style(o_0_mV_5, &s_0_mV_5, 0);
    
    lv_obj_t * o_Frame_34 = lv_canvas_create(o_Setting_data);
    // lv_obj_set_name(o_Frame_34, "o_Frame_34");
    lv_obj_set_x(o_Frame_34, 0);
    lv_obj_set_y(o_Frame_34, 0);
    lv_obj_set_width(o_Frame_34, 800);
    lv_obj_set_height(o_Frame_34, 46);
    lv_obj_add_style(o_Frame_34, &s_Frame_34, 0);
    lv_obj_t * o_Frame_85 = lv_canvas_create(o_Frame_34);
    // lv_obj_set_name(o_Frame_85, "o_Frame_85");
    lv_obj_set_x(o_Frame_85, 16);
    lv_obj_set_y(o_Frame_85, 7);
    lv_obj_set_width(o_Frame_85, 32);
    lv_obj_set_height(o_Frame_85, 32);
    lv_obj_add_style(o_Frame_85, &s_Frame_85, 0);
    lv_obj_t * o_Icons = lv_btn_create(o_Frame_85);
    // lv_obj_set_name(o_Icons, "o_Icons");
    lv_obj_set_x(o_Icons, 6);
    lv_obj_set_y(o_Icons, 6);
    lv_obj_set_width(o_Icons, 20);
    lv_obj_set_height(o_Icons, 20);
    lv_obj_add_style(o_Icons, &s_Icons, 0);
    lv_obj_t * o_Icon = lv_obj_create(o_Icons);
    // lv_obj_set_name(o_Icon, "o_Icon");
    lv_obj_set_x(o_Icon, 12);
    lv_obj_set_y(o_Icon, 4);
    lv_obj_set_width(o_Icon, 12);
    lv_obj_set_height(o_Icon, 6);
    lv_obj_add_style(o_Icon, &s_Icon, 0);
    
    lv_obj_t * o_System_diagnostic = lv_label_create(o_Frame_34);
    // lv_obj_set_name(o_System_diagnostic, "o_System_diagnostic");
    lv_obj_set_x(o_System_diagnostic, 335);
    lv_obj_set_y(o_System_diagnostic, 13);
    lv_obj_set_width(o_System_diagnostic, 130);
    lv_obj_set_height(o_System_diagnostic, 21);
    lv_label_set_text(o_System_diagnostic, "System diagnostic");
    lv_obj_add_style(o_System_diagnostic, &s_System_diagnostic, 0);
    
    lv_obj_t * o_Frame_167 = lv_canvas_create(o_Setting_data);
    // lv_obj_set_name(o_Frame_167, "o_Frame_167");
    lv_obj_set_x(o_Frame_167, 0);
    lv_obj_set_y(o_Frame_167, 414);
    lv_obj_set_width(o_Frame_167, 800);
    lv_obj_set_height(o_Frame_167, 66);
    lv_obj_add_style(o_Frame_167, &s_Frame_167, 0);
    lv_obj_t * o_Buttons = lv_btn_create(o_Frame_167);
    // lv_obj_set_name(o_Buttons, "o_Buttons");
    lv_obj_set_x(o_Buttons, 446);
    lv_obj_set_y(o_Buttons, 16);
    lv_obj_set_width(o_Buttons, 66);
    lv_obj_set_height(o_Buttons, 34);
    lv_obj_add_style(o_Buttons, &s_Buttons, 0);
    lv_obj_t * o_Re_try_Calibration = lv_label_create(o_Buttons);
    // lv_obj_set_name(o_Re_try_Calibration, "o_Re_try_Calibration");
    lv_obj_set_x(o_Re_try_Calibration, 12);
    lv_obj_set_y(o_Re_try_Calibration, 8);
    lv_obj_set_width(o_Re_try_Calibration, 42);
    lv_obj_set_height(o_Re_try_Calibration, 18);
    lv_label_set_text(o_Re_try_Calibration, "Valve 1");
    lv_obj_add_style(o_Re_try_Calibration, &s_Re_try_Calibration, 0);
    
    lv_obj_t * o_Buttons_1 = lv_btn_create(o_Frame_167);
    // lv_obj_set_name(o_Buttons_1, "o_Buttons_1");
    lv_obj_set_x(o_Buttons_1, 520);
    lv_obj_set_y(o_Buttons_1, 16);
    lv_obj_set_width(o_Buttons_1, 68);
    lv_obj_set_height(o_Buttons_1, 34);
    lv_obj_add_style(o_Buttons_1, &s_Buttons_1, 0);
    lv_obj_t * o_Re_try_Calibration_1 = lv_label_create(o_Buttons_1);
    // lv_obj_set_name(o_Re_try_Calibration_1, "o_Re_try_Calibration_1");
    lv_obj_set_x(o_Re_try_Calibration_1, 12);
    lv_obj_set_y(o_Re_try_Calibration_1, 8);
    lv_obj_set_width(o_Re_try_Calibration_1, 44);
    lv_obj_set_height(o_Re_try_Calibration_1, 18);
    lv_label_set_text(o_Re_try_Calibration_1, "Valve 2");
    lv_obj_add_style(o_Re_try_Calibration_1, &s_Re_try_Calibration_1, 0);
    
    lv_obj_t * o_Buttons_2 = lv_btn_create(o_Frame_167);
    // lv_obj_set_name(o_Buttons_2, "o_Buttons_2");
    lv_obj_set_x(o_Buttons_2, 596);
    lv_obj_set_y(o_Buttons_2, 16);
    lv_obj_set_width(o_Buttons_2, 60);
    lv_obj_set_height(o_Buttons_2, 34);
    lv_obj_add_style(o_Buttons_2, &s_Buttons_2, 0);
    lv_obj_t * o_Re_try_Calibration_2 = lv_label_create(o_Buttons_2);
    // lv_obj_set_name(o_Re_try_Calibration_2, "o_Re_try_Calibration_2");
    lv_obj_set_x(o_Re_try_Calibration_2, 12);
    lv_obj_set_y(o_Re_try_Calibration_2, 8);
    lv_obj_set_width(o_Re_try_Calibration_2, 36);
    lv_obj_set_height(o_Re_try_Calibration_2, 18);
    lv_label_set_text(o_Re_try_Calibration_2, "Pump");
    lv_obj_add_style(o_Re_try_Calibration_2, &s_Re_try_Calibration_2, 0);
    
    lv_obj_t * o_Buttons_3 = lv_btn_create(o_Frame_167);
    // lv_obj_set_name(o_Buttons_3, "o_Buttons_3");
    lv_obj_set_x(o_Buttons_3, 664);
    lv_obj_set_y(o_Buttons_3, 16);
    lv_obj_set_width(o_Buttons_3, 53);
    lv_obj_set_height(o_Buttons_3, 34);
    lv_obj_add_style(o_Buttons_3, &s_Buttons_3, 0);
    lv_obj_t * o_Re_try_Calibration_3 = lv_label_create(o_Buttons_3);
    // lv_obj_set_name(o_Re_try_Calibration_3, "o_Re_try_Calibration_3");
    lv_obj_set_x(o_Re_try_Calibration_3, 12);
    lv_obj_set_y(o_Re_try_Calibration_3, 8);
    lv_obj_set_width(o_Re_try_Calibration_3, 29);
    lv_obj_set_height(o_Re_try_Calibration_3, 18);
    lv_label_set_text(o_Re_try_Calibration_3, "Start");
    lv_obj_add_style(o_Re_try_Calibration_3, &s_Re_try_Calibration_3, 0);
    
    lv_obj_t * o_Buttons_4 = lv_btn_create(o_Frame_167);
    // lv_obj_set_name(o_Buttons_4, "o_Buttons_4");
    lv_obj_set_x(o_Buttons_4, 725);
    lv_obj_set_y(o_Buttons_4, 16);
    lv_obj_set_width(o_Buttons_4, 51);
    lv_obj_set_height(o_Buttons_4, 34);
    lv_obj_add_style(o_Buttons_4, &s_Buttons_4, 0);
    lv_obj_t * o_Re_try_Calibration_4 = lv_label_create(o_Buttons_4);
    // lv_obj_set_name(o_Re_try_Calibration_4, "o_Re_try_Calibration_4");
    lv_obj_set_x(o_Re_try_Calibration_4, 12);
    lv_obj_set_y(o_Re_try_Calibration_4, 8);
    lv_obj_set_width(o_Re_try_Calibration_4, 27);
    lv_obj_set_height(o_Re_try_Calibration_4, 18);
    lv_label_set_text(o_Re_try_Calibration_4, "Buzz");
    lv_obj_add_style(o_Re_try_Calibration_4, &s_Re_try_Calibration_4, 0);
    
    lv_obj_t * o_Frame_170 = lv_canvas_create(o_Setting_data);
    // lv_obj_set_name(o_Frame_170, "o_Frame_170");
    lv_obj_set_x(o_Frame_170, 24);
    lv_obj_set_y(o_Frame_170, 70);
    lv_obj_set_width(o_Frame_170, 602);
    lv_obj_set_height(o_Frame_170, 198);
    lv_obj_add_style(o_Frame_170, &s_Frame_170, 0);
    lv_obj_t * o_Frame_155 = lv_canvas_create(o_Frame_170);
    // lv_obj_set_name(o_Frame_155, "o_Frame_155");
    lv_obj_set_x(o_Frame_155, 0);
    lv_obj_set_y(o_Frame_155, 0);
    lv_obj_set_width(o_Frame_155, 190);
    lv_obj_set_height(o_Frame_155, 198);
    lv_obj_add_style(o_Frame_155, &s_Frame_155, 0);
    lv_obj_t * o_Diagnosis = lv_label_create(o_Frame_155);
    // lv_obj_set_name(o_Diagnosis, "o_Diagnosis");
    lv_obj_set_x(o_Diagnosis, 0);
    lv_obj_set_y(o_Diagnosis, 0);
    lv_obj_set_width(o_Diagnosis, 190);
    lv_obj_set_height(o_Diagnosis, 21);
    lv_label_set_text(o_Diagnosis, "Diagnosis");
    lv_obj_add_style(o_Diagnosis, &s_Diagnosis, 0);
    
    lv_obj_t * o_Frame_134 = lv_canvas_create(o_Frame_155);
    // lv_obj_set_name(o_Frame_134, "o_Frame_134");
    lv_obj_set_x(o_Frame_134, 0);
    lv_obj_set_y(o_Frame_134, 29);
    lv_obj_set_width(o_Frame_134, 190);
    lv_obj_set_height(o_Frame_134, 169);
    lv_obj_add_style(o_Frame_134, &s_Frame_134, 0);
    lv_obj_t * o_Frame_109_3 = lv_canvas_create(o_Frame_134);
    // lv_obj_set_name(o_Frame_109_3, "o_Frame_109_3");
    lv_obj_set_x(o_Frame_109_3, 0);
    lv_obj_set_y(o_Frame_109_3, 0);
    lv_obj_set_width(o_Frame_109_3, 80);
    lv_obj_set_height(o_Frame_109_3, 169);
    lv_obj_add_style(o_Frame_109_3, &s_Frame_109_3, 0);
    lv_obj_t * o_Frame_91_3 = lv_canvas_create(o_Frame_109_3);
    // lv_obj_set_name(o_Frame_91_3, "o_Frame_91_3");
    lv_obj_set_x(o_Frame_91_3, 0);
    lv_obj_set_y(o_Frame_91_3, 0);
    lv_obj_set_width(o_Frame_91_3, 80);
    lv_obj_set_height(o_Frame_91_3, 24);
    lv_obj_add_style(o_Frame_91_3, &s_Frame_91_3, 0);
    lv_obj_t * o_Parameter_2 = lv_label_create(o_Frame_91_3);
    // lv_obj_set_name(o_Parameter_2, "o_Parameter_2");
    lv_obj_set_x(o_Parameter_2, 8);
    lv_obj_set_y(o_Parameter_2, 3);
    lv_obj_set_width(o_Parameter_2, 64);
    lv_obj_set_height(o_Parameter_2, 18);
    lv_label_set_text(o_Parameter_2, "Parameter");
    lv_obj_add_style(o_Parameter_2, &s_Parameter_2, 0);
    
    lv_obj_t * o_Frame_94_3 = lv_canvas_create(o_Frame_109_3);
    // lv_obj_set_name(o_Frame_94_3, "o_Frame_94_3");
    lv_obj_set_x(o_Frame_94_3, 0);
    lv_obj_set_y(o_Frame_94_3, 25);
    lv_obj_set_width(o_Frame_94_3, 80);
    lv_obj_set_height(o_Frame_94_3, 28);
    lv_obj_add_style(o_Frame_94_3, &s_Frame_94_3, 0);
    lv_obj_t * o_K_2 = lv_label_create(o_Frame_94_3);
    // lv_obj_set_name(o_K_2, "o_K_2");
    lv_obj_set_x(o_K_2, 8);
    lv_obj_set_y(o_K_2, 4);
    lv_obj_set_width(o_K_2, 8);
    lv_obj_set_height(o_K_2, 18);
    lv_label_set_text(o_K_2, "K");
    lv_obj_add_style(o_K_2, &s_K_2, 0);
    
    lv_obj_t * o_Frame_97_3 = lv_canvas_create(o_Frame_109_3);
    // lv_obj_set_name(o_Frame_97_3, "o_Frame_97_3");
    lv_obj_set_x(o_Frame_97_3, 0);
    lv_obj_set_y(o_Frame_97_3, 54);
    lv_obj_set_width(o_Frame_97_3, 80);
    lv_obj_set_height(o_Frame_97_3, 28);
    lv_obj_add_style(o_Frame_97_3, &s_Frame_97_3, 0);
    lv_obj_t * o_Na_2 = lv_label_create(o_Frame_97_3);
    // lv_obj_set_name(o_Na_2, "o_Na_2");
    lv_obj_set_x(o_Na_2, 8);
    lv_obj_set_y(o_Na_2, 4);
    lv_obj_set_width(o_Na_2, 17);
    lv_obj_set_height(o_Na_2, 18);
    lv_label_set_text(o_Na_2, "Na");
    lv_obj_add_style(o_Na_2, &s_Na_2, 0);
    
    lv_obj_t * o_Frame_100 = lv_canvas_create(o_Frame_109_3);
    // lv_obj_set_name(o_Frame_100, "o_Frame_100");
    lv_obj_set_x(o_Frame_100, 0);
    lv_obj_set_y(o_Frame_100, 83);
    lv_obj_set_width(o_Frame_100, 80);
    lv_obj_set_height(o_Frame_100, 28);
    lv_obj_add_style(o_Frame_100, &s_Frame_100, 0);
    lv_obj_t * o_Ca_2 = lv_label_create(o_Frame_100);
    // lv_obj_set_name(o_Ca_2, "o_Ca_2");
    lv_obj_set_x(o_Ca_2, 8);
    lv_obj_set_y(o_Ca_2, 4);
    lv_obj_set_width(o_Ca_2, 18);
    lv_obj_set_height(o_Ca_2, 18);
    lv_label_set_text(o_Ca_2, "Ca");
    lv_obj_add_style(o_Ca_2, &s_Ca_2, 0);
    
    lv_obj_t * o_Frame_103 = lv_canvas_create(o_Frame_109_3);
    // lv_obj_set_name(o_Frame_103, "o_Frame_103");
    lv_obj_set_x(o_Frame_103, 0);
    lv_obj_set_y(o_Frame_103, 112);
    lv_obj_set_width(o_Frame_103, 80);
    lv_obj_set_height(o_Frame_103, 28);
    lv_obj_add_style(o_Frame_103, &s_Frame_103, 0);
    lv_obj_t * o_pH = lv_label_create(o_Frame_103);
    // lv_obj_set_name(o_pH, "o_pH");
    lv_obj_set_x(o_pH, 8);
    lv_obj_set_y(o_pH, 4);
    lv_obj_set_width(o_pH, 17);
    lv_obj_set_height(o_pH, 18);
    lv_label_set_text(o_pH, "pH");
    lv_obj_add_style(o_pH, &s_pH, 0);
    
    lv_obj_t * o_Frame_106 = lv_canvas_create(o_Frame_109_3);
    // lv_obj_set_name(o_Frame_106, "o_Frame_106");
    lv_obj_set_x(o_Frame_106, 0);
    lv_obj_set_y(o_Frame_106, 141);
    lv_obj_set_width(o_Frame_106, 80);
    lv_obj_set_height(o_Frame_106, 28);
    lv_obj_add_style(o_Frame_106, &s_Frame_106, 0);
    lv_obj_t * o_Cl = lv_label_create(o_Frame_106);
    // lv_obj_set_name(o_Cl, "o_Cl");
    lv_obj_set_x(o_Cl, 8);
    lv_obj_set_y(o_Cl, 4);
    lv_obj_set_width(o_Cl, 13);
    lv_obj_set_height(o_Cl, 18);
    lv_label_set_text(o_Cl, "Cl");
    lv_obj_add_style(o_Cl, &s_Cl, 0);
    
    lv_obj_t * o_Frame_110_3 = lv_canvas_create(o_Frame_134);
    // lv_obj_set_name(o_Frame_110_3, "o_Frame_110_3");
    lv_obj_set_x(o_Frame_110_3, 80);
    lv_obj_set_y(o_Frame_110_3, 0);
    lv_obj_set_width(o_Frame_110_3, 110);
    lv_obj_set_height(o_Frame_110_3, 169);
    lv_obj_add_style(o_Frame_110_3, &s_Frame_110_3, 0);
    lv_obj_t * o_Frame_93_3 = lv_canvas_create(o_Frame_110_3);
    // lv_obj_set_name(o_Frame_93_3, "o_Frame_93_3");
    lv_obj_set_x(o_Frame_93_3, 0);
    lv_obj_set_y(o_Frame_93_3, 0);
    lv_obj_set_width(o_Frame_93_3, 110);
    lv_obj_set_height(o_Frame_93_3, 24);
    lv_obj_add_style(o_Frame_93_3, &s_Frame_93_3, 0);
    lv_obj_t * o_Results_3 = lv_label_create(o_Frame_93_3);
    // lv_obj_set_name(o_Results_3, "o_Results_3");
    lv_obj_set_x(o_Results_3, 8);
    lv_obj_set_y(o_Results_3, 3);
    lv_obj_set_width(o_Results_3, 43);
    lv_obj_set_height(o_Results_3, 18);
    lv_label_set_text(o_Results_3, "Results");
    lv_obj_add_style(o_Results_3, &s_Results_3, 0);
    
    lv_obj_t * o_Frame_95_3 = lv_canvas_create(o_Frame_110_3);
    // lv_obj_set_name(o_Frame_95_3, "o_Frame_95_3");
    lv_obj_set_x(o_Frame_95_3, 0);
    lv_obj_set_y(o_Frame_95_3, 25);
    lv_obj_set_width(o_Frame_95_3, 110);
    lv_obj_set_height(o_Frame_95_3, 28);
    lv_obj_add_style(o_Frame_95_3, &s_Frame_95_3, 0);
    lv_obj_t * o_542_mV = lv_label_create(o_Frame_95_3);
    // lv_obj_set_name(o_542_mV, "o_542_mV");
    lv_obj_set_x(o_542_mV, 8);
    lv_obj_set_y(o_542_mV, 4);
    lv_obj_set_width(o_542_mV, 46);
    lv_obj_set_height(o_542_mV, 18);
    lv_label_set_text(o_542_mV, "542 mV");
    lv_obj_add_style(o_542_mV, &s_542_mV, 0);
    
    lv_obj_t * o_Frame_98_5 = lv_canvas_create(o_Frame_110_3);
    // lv_obj_set_name(o_Frame_98_5, "o_Frame_98_5");
    lv_obj_set_x(o_Frame_98_5, 0);
    lv_obj_set_y(o_Frame_98_5, 54);
    lv_obj_set_width(o_Frame_98_5, 110);
    lv_obj_set_height(o_Frame_98_5, 28);
    lv_obj_add_style(o_Frame_98_5, &s_Frame_98_5, 0);
    lv_obj_t * o_346_mV = lv_label_create(o_Frame_98_5);
    // lv_obj_set_name(o_346_mV, "o_346_mV");
    lv_obj_set_x(o_346_mV, 8);
    lv_obj_set_y(o_346_mV, 4);
    lv_obj_set_width(o_346_mV, 46);
    lv_obj_set_height(o_346_mV, 18);
    lv_label_set_text(o_346_mV, "346 mV");
    lv_obj_add_style(o_346_mV, &s_346_mV, 0);
    
    lv_obj_t * o_Frame_101 = lv_canvas_create(o_Frame_110_3);
    // lv_obj_set_name(o_Frame_101, "o_Frame_101");
    lv_obj_set_x(o_Frame_101, 0);
    lv_obj_set_y(o_Frame_101, 83);
    lv_obj_set_width(o_Frame_101, 110);
    lv_obj_set_height(o_Frame_101, 28);
    lv_obj_add_style(o_Frame_101, &s_Frame_101, 0);
    lv_obj_t * o_2_mV = lv_label_create(o_Frame_101);
    // lv_obj_set_name(o_2_mV, "o_2_mV");
    lv_obj_set_x(o_2_mV, 8);
    lv_obj_set_y(o_2_mV, 4);
    lv_obj_set_width(o_2_mV, 31);
    lv_obj_set_height(o_2_mV, 18);
    lv_label_set_text(o_2_mV, "2 mV");
    lv_obj_add_style(o_2_mV, &s_2_mV, 0);
    
    lv_obj_t * o_Frame_104 = lv_canvas_create(o_Frame_110_3);
    // lv_obj_set_name(o_Frame_104, "o_Frame_104");
    lv_obj_set_x(o_Frame_104, 0);
    lv_obj_set_y(o_Frame_104, 112);
    lv_obj_set_width(o_Frame_104, 110);
    lv_obj_set_height(o_Frame_104, 28);
    lv_obj_add_style(o_Frame_104, &s_Frame_104, 0);
    lv_obj_t * o_1_mV = lv_label_create(o_Frame_104);
    // lv_obj_set_name(o_1_mV, "o_1_mV");
    lv_obj_set_x(o_1_mV, 8);
    lv_obj_set_y(o_1_mV, 4);
    lv_obj_set_width(o_1_mV, 28);
    lv_obj_set_height(o_1_mV, 18);
    lv_label_set_text(o_1_mV, "1 mV");
    lv_obj_add_style(o_1_mV, &s_1_mV, 0);
    
    lv_obj_t * o_Frame_107 = lv_canvas_create(o_Frame_110_3);
    // lv_obj_set_name(o_Frame_107, "o_Frame_107");
    lv_obj_set_x(o_Frame_107, 0);
    lv_obj_set_y(o_Frame_107, 141);
    lv_obj_set_width(o_Frame_107, 110);
    lv_obj_set_height(o_Frame_107, 28);
    lv_obj_add_style(o_Frame_107, &s_Frame_107, 0);
    lv_obj_t * o_2_mV_1 = lv_label_create(o_Frame_107);
    // lv_obj_set_name(o_2_mV_1, "o_2_mV_1");
    lv_obj_set_x(o_2_mV_1, 8);
    lv_obj_set_y(o_2_mV_1, 4);
    lv_obj_set_width(o_2_mV_1, 31);
    lv_obj_set_height(o_2_mV_1, 18);
    lv_label_set_text(o_2_mV_1, "2 mV");
    lv_obj_add_style(o_2_mV_1, &s_2_mV_1, 0);
    
    lv_obj_t * o_Frame_163 = lv_canvas_create(o_Frame_170);
    // lv_obj_set_name(o_Frame_163, "o_Frame_163");
    lv_obj_set_x(o_Frame_163, 206);
    lv_obj_set_y(o_Frame_163, 0);
    lv_obj_set_width(o_Frame_163, 190);
    lv_obj_set_height(o_Frame_163, 162);
    lv_obj_add_style(o_Frame_163, &s_Frame_163, 0);
    lv_obj_t * o_Frame_162 = lv_canvas_create(o_Frame_163);
    // lv_obj_set_name(o_Frame_162, "o_Frame_162");
    lv_obj_set_x(o_Frame_162, 0);
    lv_obj_set_y(o_Frame_162, 0);
    lv_obj_set_width(o_Frame_162, 190);
    lv_obj_set_height(o_Frame_162, 140);
    lv_obj_add_style(o_Frame_162, &s_Frame_162, 0);
    lv_obj_t * o_Frame_161 = lv_canvas_create(o_Frame_162);
    // lv_obj_set_name(o_Frame_161, "o_Frame_161");
    lv_obj_set_x(o_Frame_161, 0);
    lv_obj_set_y(o_Frame_161, 0);
    lv_obj_set_width(o_Frame_161, 190);
    lv_obj_set_height(o_Frame_161, 21);
    lv_obj_add_style(o_Frame_161, &s_Frame_161, 0);
    lv_obj_t * o_Cal_1 = lv_label_create(o_Frame_161);
    // lv_obj_set_name(o_Cal_1, "o_Cal_1");
    lv_obj_set_x(o_Cal_1, 0);
    lv_obj_set_y(o_Cal_1, 0);
    lv_obj_set_width(o_Cal_1, 33);
    lv_obj_set_height(o_Cal_1, 21);
    lv_label_set_text(o_Cal_1, "Cal 1");
    lv_obj_add_style(o_Cal_1, &s_Cal_1, 0);
    
    lv_obj_t * o_Frame_160 = lv_canvas_create(o_Frame_161);
    // lv_obj_set_name(o_Frame_160, "o_Frame_160");
    lv_obj_set_x(o_Frame_160, 81);
    lv_obj_set_y(o_Frame_160, 2);
    lv_obj_set_width(o_Frame_160, 109);
    lv_obj_set_height(o_Frame_160, 18);
    lv_obj_add_style(o_Frame_160, &s_Frame_160, 0);
    lv_obj_t * o_Refresh_Values = lv_label_create(o_Frame_160);
    // lv_obj_set_name(o_Refresh_Values, "o_Refresh_Values");
    lv_obj_set_x(o_Refresh_Values, 0);
    lv_obj_set_y(o_Refresh_Values, 0);
    lv_obj_set_width(o_Refresh_Values, 89);
    lv_obj_set_height(o_Refresh_Values, 18);
    lv_label_set_text(o_Refresh_Values, "Refresh Values");
    lv_obj_add_style(o_Refresh_Values, &s_Refresh_Values, 0);
    
    lv_obj_t * o_Icons_1 = lv_btn_create(o_Frame_160);
    // lv_obj_set_name(o_Icons_1, "o_Icons_1");
    lv_obj_set_x(o_Icons_1, 93);
    lv_obj_set_y(o_Icons_1, 1);
    lv_obj_set_width(o_Icons_1, 16);
    lv_obj_set_height(o_Icons_1, 16);
    lv_obj_add_style(o_Icons_1, &s_Icons_1, 0);
    lv_obj_t * o_Icon_1 = lv_obj_create(o_Icons_1);
    // lv_obj_set_name(o_Icon_1, "o_Icon_1");
    lv_obj_set_x(o_Icon_1, 3);
    lv_obj_set_y(o_Icon_1, 3);
    lv_obj_set_width(o_Icon_1, 11);
    lv_obj_set_height(o_Icon_1, 11);
    lv_obj_add_style(o_Icon_1, &s_Icon_1, 0);
    
    lv_obj_t * o_Frame_136 = lv_canvas_create(o_Frame_162);
    // lv_obj_set_name(o_Frame_136, "o_Frame_136");
    lv_obj_set_x(o_Frame_136, 0);
    lv_obj_set_y(o_Frame_136, 29);
    lv_obj_set_width(o_Frame_136, 190);
    lv_obj_set_height(o_Frame_136, 111);
    lv_obj_add_style(o_Frame_136, &s_Frame_136, 0);
    lv_obj_t * o_Frame_109_4 = lv_canvas_create(o_Frame_136);
    // lv_obj_set_name(o_Frame_109_4, "o_Frame_109_4");
    lv_obj_set_x(o_Frame_109_4, 0);
    lv_obj_set_y(o_Frame_109_4, 0);
    lv_obj_set_width(o_Frame_109_4, 80);
    lv_obj_set_height(o_Frame_109_4, 111);
    lv_obj_add_style(o_Frame_109_4, &s_Frame_109_4, 0);
    lv_obj_t * o_Frame_91_4 = lv_canvas_create(o_Frame_109_4);
    // lv_obj_set_name(o_Frame_91_4, "o_Frame_91_4");
    lv_obj_set_x(o_Frame_91_4, 0);
    lv_obj_set_y(o_Frame_91_4, 0);
    lv_obj_set_width(o_Frame_91_4, 80);
    lv_obj_set_height(o_Frame_91_4, 24);
    lv_obj_add_style(o_Frame_91_4, &s_Frame_91_4, 0);
    lv_obj_t * o_Parameter_3 = lv_label_create(o_Frame_91_4);
    // lv_obj_set_name(o_Parameter_3, "o_Parameter_3");
    lv_obj_set_x(o_Parameter_3, 8);
    lv_obj_set_y(o_Parameter_3, 3);
    lv_obj_set_width(o_Parameter_3, 64);
    lv_obj_set_height(o_Parameter_3, 18);
    lv_label_set_text(o_Parameter_3, "Parameter");
    lv_obj_add_style(o_Parameter_3, &s_Parameter_3, 0);
    
    lv_obj_t * o_Frame_94_4 = lv_canvas_create(o_Frame_109_4);
    // lv_obj_set_name(o_Frame_94_4, "o_Frame_94_4");
    lv_obj_set_x(o_Frame_94_4, 0);
    lv_obj_set_y(o_Frame_94_4, 25);
    lv_obj_set_width(o_Frame_94_4, 80);
    lv_obj_set_height(o_Frame_94_4, 28);
    lv_obj_add_style(o_Frame_94_4, &s_Frame_94_4, 0);
    lv_obj_t * o_K_3 = lv_label_create(o_Frame_94_4);
    // lv_obj_set_name(o_K_3, "o_K_3");
    lv_obj_set_x(o_K_3, 8);
    lv_obj_set_y(o_K_3, 4);
    lv_obj_set_width(o_K_3, 8);
    lv_obj_set_height(o_K_3, 18);
    lv_label_set_text(o_K_3, "K");
    lv_obj_add_style(o_K_3, &s_K_3, 0);
    
    lv_obj_t * o_Frame_97_4 = lv_canvas_create(o_Frame_109_4);
    // lv_obj_set_name(o_Frame_97_4, "o_Frame_97_4");
    lv_obj_set_x(o_Frame_97_4, 0);
    lv_obj_set_y(o_Frame_97_4, 54);
    lv_obj_set_width(o_Frame_97_4, 80);
    lv_obj_set_height(o_Frame_97_4, 28);
    lv_obj_add_style(o_Frame_97_4, &s_Frame_97_4, 0);
    lv_obj_t * o_Na_3 = lv_label_create(o_Frame_97_4);
    // lv_obj_set_name(o_Na_3, "o_Na_3");
    lv_obj_set_x(o_Na_3, 8);
    lv_obj_set_y(o_Na_3, 4);
    lv_obj_set_width(o_Na_3, 17);
    lv_obj_set_height(o_Na_3, 18);
    lv_label_set_text(o_Na_3, "Na");
    lv_obj_add_style(o_Na_3, &s_Na_3, 0);
    
    lv_obj_t * o_Frame_100_1 = lv_canvas_create(o_Frame_109_4);
    // lv_obj_set_name(o_Frame_100_1, "o_Frame_100_1");
    lv_obj_set_x(o_Frame_100_1, 0);
    lv_obj_set_y(o_Frame_100_1, 83);
    lv_obj_set_width(o_Frame_100_1, 80);
    lv_obj_set_height(o_Frame_100_1, 28);
    lv_obj_add_style(o_Frame_100_1, &s_Frame_100_1, 0);
    lv_obj_t * o_Ca_3 = lv_label_create(o_Frame_100_1);
    // lv_obj_set_name(o_Ca_3, "o_Ca_3");
    lv_obj_set_x(o_Ca_3, 8);
    lv_obj_set_y(o_Ca_3, 4);
    lv_obj_set_width(o_Ca_3, 18);
    lv_obj_set_height(o_Ca_3, 18);
    lv_label_set_text(o_Ca_3, "Ca");
    lv_obj_add_style(o_Ca_3, &s_Ca_3, 0);
    
    lv_obj_t * o_Frame_110_4 = lv_canvas_create(o_Frame_136);
    // lv_obj_set_name(o_Frame_110_4, "o_Frame_110_4");
    lv_obj_set_x(o_Frame_110_4, 80);
    lv_obj_set_y(o_Frame_110_4, 0);
    lv_obj_set_width(o_Frame_110_4, 110);
    lv_obj_set_height(o_Frame_110_4, 111);
    lv_obj_add_style(o_Frame_110_4, &s_Frame_110_4, 0);
    lv_obj_t * o_Frame_93_4 = lv_canvas_create(o_Frame_110_4);
    // lv_obj_set_name(o_Frame_93_4, "o_Frame_93_4");
    lv_obj_set_x(o_Frame_93_4, 0);
    lv_obj_set_y(o_Frame_93_4, 0);
    lv_obj_set_width(o_Frame_93_4, 110);
    lv_obj_set_height(o_Frame_93_4, 24);
    lv_obj_add_style(o_Frame_93_4, &s_Frame_93_4, 0);
    lv_obj_t * o_Results_4 = lv_label_create(o_Frame_93_4);
    // lv_obj_set_name(o_Results_4, "o_Results_4");
    lv_obj_set_x(o_Results_4, 8);
    lv_obj_set_y(o_Results_4, 3);
    lv_obj_set_width(o_Results_4, 43);
    lv_obj_set_height(o_Results_4, 18);
    lv_label_set_text(o_Results_4, "Results");
    lv_obj_add_style(o_Results_4, &s_Results_4, 0);
    
    lv_obj_t * o_Frame_95_4 = lv_canvas_create(o_Frame_110_4);
    // lv_obj_set_name(o_Frame_95_4, "o_Frame_95_4");
    lv_obj_set_x(o_Frame_95_4, 0);
    lv_obj_set_y(o_Frame_95_4, 25);
    lv_obj_set_width(o_Frame_95_4, 110);
    lv_obj_set_height(o_Frame_95_4, 28);
    lv_obj_add_style(o_Frame_95_4, &s_Frame_95_4, 0);
    lv_obj_t * o_621_mV = lv_label_create(o_Frame_95_4);
    // lv_obj_set_name(o_621_mV, "o_621_mV");
    lv_obj_set_x(o_621_mV, 8);
    lv_obj_set_y(o_621_mV, 4);
    lv_obj_set_width(o_621_mV, 43);
    lv_obj_set_height(o_621_mV, 18);
    lv_label_set_text(o_621_mV, "621 mV");
    lv_obj_add_style(o_621_mV, &s_621_mV, 0);
    
    lv_obj_t * o_Frame_98_6 = lv_canvas_create(o_Frame_110_4);
    // lv_obj_set_name(o_Frame_98_6, "o_Frame_98_6");
    lv_obj_set_x(o_Frame_98_6, 0);
    lv_obj_set_y(o_Frame_98_6, 54);
    lv_obj_set_width(o_Frame_98_6, 110);
    lv_obj_set_height(o_Frame_98_6, 28);
    lv_obj_add_style(o_Frame_98_6, &s_Frame_98_6, 0);
    lv_obj_t * o_357_mV = lv_label_create(o_Frame_98_6);
    // lv_obj_set_name(o_357_mV, "o_357_mV");
    lv_obj_set_x(o_357_mV, 8);
    lv_obj_set_y(o_357_mV, 4);
    lv_obj_set_width(o_357_mV, 45);
    lv_obj_set_height(o_357_mV, 18);
    lv_label_set_text(o_357_mV, "357 mV");
    lv_obj_add_style(o_357_mV, &s_357_mV, 0);
    
    lv_obj_t * o_Frame_101_1 = lv_canvas_create(o_Frame_110_4);
    // lv_obj_set_name(o_Frame_101_1, "o_Frame_101_1");
    lv_obj_set_x(o_Frame_101_1, 0);
    lv_obj_set_y(o_Frame_101_1, 83);
    lv_obj_set_width(o_Frame_101_1, 110);
    lv_obj_set_height(o_Frame_101_1, 28);
    lv_obj_add_style(o_Frame_101_1, &s_Frame_101_1, 0);
    lv_obj_t * o_2_mV_2 = lv_label_create(o_Frame_101_1);
    // lv_obj_set_name(o_2_mV_2, "o_2_mV_2");
    lv_obj_set_x(o_2_mV_2, 8);
    lv_obj_set_y(o_2_mV_2, 4);
    lv_obj_set_width(o_2_mV_2, 31);
    lv_obj_set_height(o_2_mV_2, 18);
    lv_label_set_text(o_2_mV_2, "2 mV");
    lv_obj_add_style(o_2_mV_2, &s_2_mV_2, 0);
    
    lv_obj_t * o_4_140_1_25_7_4_100_mmol_L = lv_label_create(o_Frame_163);
    // lv_obj_set_name(o_4_140_1_25_7_4_100_mmol_L, "o_4_140_1_25_7_4_100_mmol_L");
    lv_obj_set_x(o_4_140_1_25_7_4_100_mmol_L, 0);
    lv_obj_set_y(o_4_140_1_25_7_4_100_mmol_L, 144);
    lv_obj_set_width(o_4_140_1_25_7_4_100_mmol_L, 190);
    lv_obj_set_height(o_4_140_1_25_7_4_100_mmol_L, 18);
    lv_label_set_text(o_4_140_1_25_7_4_100_mmol_L, "4, 140, 1.25, 7.4, 100 mmol/L");
    lv_obj_add_style(o_4_140_1_25_7_4_100_mmol_L, &s_4_140_1_25_7_4_100_mmol_L, 0);
    
    lv_obj_t * o_Frame_166 = lv_canvas_create(o_Frame_170);
    // lv_obj_set_name(o_Frame_166, "o_Frame_166");
    lv_obj_set_x(o_Frame_166, 412);
    lv_obj_set_y(o_Frame_166, 0);
    lv_obj_set_width(o_Frame_166, 190);
    lv_obj_set_height(o_Frame_166, 165);
    lv_obj_add_style(o_Frame_166, &s_Frame_166, 0);
    lv_obj_t * o_Frame_165 = lv_canvas_create(o_Frame_166);
    // lv_obj_set_name(o_Frame_165, "o_Frame_165");
    lv_obj_set_x(o_Frame_165, 0);
    lv_obj_set_y(o_Frame_165, 0);
    lv_obj_set_width(o_Frame_165, 190);
    lv_obj_set_height(o_Frame_165, 140);
    lv_obj_add_style(o_Frame_165, &s_Frame_165, 0);
    lv_obj_t * o_Frame_164 = lv_canvas_create(o_Frame_165);
    // lv_obj_set_name(o_Frame_164, "o_Frame_164");
    lv_obj_set_x(o_Frame_164, 0);
    lv_obj_set_y(o_Frame_164, 0);
    lv_obj_set_width(o_Frame_164, 190);
    lv_obj_set_height(o_Frame_164, 21);
    lv_obj_add_style(o_Frame_164, &s_Frame_164, 0);
    lv_obj_t * o_Cal_2 = lv_label_create(o_Frame_164);
    // lv_obj_set_name(o_Cal_2, "o_Cal_2");
    lv_obj_set_x(o_Cal_2, 0);
    lv_obj_set_y(o_Cal_2, 0);
    lv_obj_set_width(o_Cal_2, 36);
    lv_obj_set_height(o_Cal_2, 21);
    lv_label_set_text(o_Cal_2, "Cal 2");
    lv_obj_add_style(o_Cal_2, &s_Cal_2, 0);
    
    lv_obj_t * o_Frame_160_1 = lv_canvas_create(o_Frame_164);
    // lv_obj_set_name(o_Frame_160_1, "o_Frame_160_1");
    lv_obj_set_x(o_Frame_160_1, 81);
    lv_obj_set_y(o_Frame_160_1, 2);
    lv_obj_set_width(o_Frame_160_1, 109);
    lv_obj_set_height(o_Frame_160_1, 18);
    lv_obj_add_style(o_Frame_160_1, &s_Frame_160_1, 0);
    lv_obj_t * o_Refresh_Values_1 = lv_label_create(o_Frame_160_1);
    // lv_obj_set_name(o_Refresh_Values_1, "o_Refresh_Values_1");
    lv_obj_set_x(o_Refresh_Values_1, 0);
    lv_obj_set_y(o_Refresh_Values_1, 0);
    lv_obj_set_width(o_Refresh_Values_1, 89);
    lv_obj_set_height(o_Refresh_Values_1, 18);
    lv_label_set_text(o_Refresh_Values_1, "Refresh Values");
    lv_obj_add_style(o_Refresh_Values_1, &s_Refresh_Values_1, 0);
    
    lv_obj_t * o_Icons_2 = lv_btn_create(o_Frame_160_1);
    // lv_obj_set_name(o_Icons_2, "o_Icons_2");
    lv_obj_set_x(o_Icons_2, 93);
    lv_obj_set_y(o_Icons_2, 1);
    lv_obj_set_width(o_Icons_2, 16);
    lv_obj_set_height(o_Icons_2, 16);
    lv_obj_add_style(o_Icons_2, &s_Icons_2, 0);
    lv_obj_t * o_Icon_2 = lv_obj_create(o_Icons_2);
    // lv_obj_set_name(o_Icon_2, "o_Icon_2");
    lv_obj_set_x(o_Icon_2, 3);
    lv_obj_set_y(o_Icon_2, 3);
    lv_obj_set_width(o_Icon_2, 11);
    lv_obj_set_height(o_Icon_2, 11);
    lv_obj_add_style(o_Icon_2, &s_Icon_2, 0);
    
    lv_obj_t * o_Frame_136_1 = lv_canvas_create(o_Frame_165);
    // lv_obj_set_name(o_Frame_136_1, "o_Frame_136_1");
    lv_obj_set_x(o_Frame_136_1, 0);
    lv_obj_set_y(o_Frame_136_1, 29);
    lv_obj_set_width(o_Frame_136_1, 190);
    lv_obj_set_height(o_Frame_136_1, 111);
    lv_obj_add_style(o_Frame_136_1, &s_Frame_136_1, 0);
    lv_obj_t * o_Frame_109_5 = lv_canvas_create(o_Frame_136_1);
    // lv_obj_set_name(o_Frame_109_5, "o_Frame_109_5");
    lv_obj_set_x(o_Frame_109_5, 0);
    lv_obj_set_y(o_Frame_109_5, 0);
    lv_obj_set_width(o_Frame_109_5, 80);
    lv_obj_set_height(o_Frame_109_5, 111);
    lv_obj_add_style(o_Frame_109_5, &s_Frame_109_5, 0);
    lv_obj_t * o_Frame_91_5 = lv_canvas_create(o_Frame_109_5);
    // lv_obj_set_name(o_Frame_91_5, "o_Frame_91_5");
    lv_obj_set_x(o_Frame_91_5, 0);
    lv_obj_set_y(o_Frame_91_5, 0);
    lv_obj_set_width(o_Frame_91_5, 80);
    lv_obj_set_height(o_Frame_91_5, 24);
    lv_obj_add_style(o_Frame_91_5, &s_Frame_91_5, 0);
    lv_obj_t * o_Parameter_4 = lv_label_create(o_Frame_91_5);
    // lv_obj_set_name(o_Parameter_4, "o_Parameter_4");
    lv_obj_set_x(o_Parameter_4, 8);
    lv_obj_set_y(o_Parameter_4, 3);
    lv_obj_set_width(o_Parameter_4, 64);
    lv_obj_set_height(o_Parameter_4, 18);
    lv_label_set_text(o_Parameter_4, "Parameter");
    lv_obj_add_style(o_Parameter_4, &s_Parameter_4, 0);
    
    lv_obj_t * o_Frame_94_5 = lv_canvas_create(o_Frame_109_5);
    // lv_obj_set_name(o_Frame_94_5, "o_Frame_94_5");
    lv_obj_set_x(o_Frame_94_5, 0);
    lv_obj_set_y(o_Frame_94_5, 25);
    lv_obj_set_width(o_Frame_94_5, 80);
    lv_obj_set_height(o_Frame_94_5, 28);
    lv_obj_add_style(o_Frame_94_5, &s_Frame_94_5, 0);
    lv_obj_t * o_K_4 = lv_label_create(o_Frame_94_5);
    // lv_obj_set_name(o_K_4, "o_K_4");
    lv_obj_set_x(o_K_4, 8);
    lv_obj_set_y(o_K_4, 4);
    lv_obj_set_width(o_K_4, 8);
    lv_obj_set_height(o_K_4, 18);
    lv_label_set_text(o_K_4, "K");
    lv_obj_add_style(o_K_4, &s_K_4, 0);
    
    lv_obj_t * o_Frame_97_5 = lv_canvas_create(o_Frame_109_5);
    // lv_obj_set_name(o_Frame_97_5, "o_Frame_97_5");
    lv_obj_set_x(o_Frame_97_5, 0);
    lv_obj_set_y(o_Frame_97_5, 54);
    lv_obj_set_width(o_Frame_97_5, 80);
    lv_obj_set_height(o_Frame_97_5, 28);
    lv_obj_add_style(o_Frame_97_5, &s_Frame_97_5, 0);
    lv_obj_t * o_Na_4 = lv_label_create(o_Frame_97_5);
    // lv_obj_set_name(o_Na_4, "o_Na_4");
    lv_obj_set_x(o_Na_4, 8);
    lv_obj_set_y(o_Na_4, 4);
    lv_obj_set_width(o_Na_4, 17);
    lv_obj_set_height(o_Na_4, 18);
    lv_label_set_text(o_Na_4, "Na");
    lv_obj_add_style(o_Na_4, &s_Na_4, 0);
    
    lv_obj_t * o_Frame_100_2 = lv_canvas_create(o_Frame_109_5);
    // lv_obj_set_name(o_Frame_100_2, "o_Frame_100_2");
    lv_obj_set_x(o_Frame_100_2, 0);
    lv_obj_set_y(o_Frame_100_2, 83);
    lv_obj_set_width(o_Frame_100_2, 80);
    lv_obj_set_height(o_Frame_100_2, 28);
    lv_obj_add_style(o_Frame_100_2, &s_Frame_100_2, 0);
    lv_obj_t * o_Ca_4 = lv_label_create(o_Frame_100_2);
    // lv_obj_set_name(o_Ca_4, "o_Ca_4");
    lv_obj_set_x(o_Ca_4, 8);
    lv_obj_set_y(o_Ca_4, 4);
    lv_obj_set_width(o_Ca_4, 18);
    lv_obj_set_height(o_Ca_4, 18);
    lv_label_set_text(o_Ca_4, "Ca");
    lv_obj_add_style(o_Ca_4, &s_Ca_4, 0);
    
    lv_obj_t * o_Frame_110_5 = lv_canvas_create(o_Frame_136_1);
    // lv_obj_set_name(o_Frame_110_5, "o_Frame_110_5");
    lv_obj_set_x(o_Frame_110_5, 80);
    lv_obj_set_y(o_Frame_110_5, 0);
    lv_obj_set_width(o_Frame_110_5, 110);
    lv_obj_set_height(o_Frame_110_5, 111);
    lv_obj_add_style(o_Frame_110_5, &s_Frame_110_5, 0);
    lv_obj_t * o_Frame_93_5 = lv_canvas_create(o_Frame_110_5);
    // lv_obj_set_name(o_Frame_93_5, "o_Frame_93_5");
    lv_obj_set_x(o_Frame_93_5, 0);
    lv_obj_set_y(o_Frame_93_5, 0);
    lv_obj_set_width(o_Frame_93_5, 110);
    lv_obj_set_height(o_Frame_93_5, 24);
    lv_obj_add_style(o_Frame_93_5, &s_Frame_93_5, 0);
    lv_obj_t * o_Results_5 = lv_label_create(o_Frame_93_5);
    // lv_obj_set_name(o_Results_5, "o_Results_5");
    lv_obj_set_x(o_Results_5, 8);
    lv_obj_set_y(o_Results_5, 3);
    lv_obj_set_width(o_Results_5, 43);
    lv_obj_set_height(o_Results_5, 18);
    lv_label_set_text(o_Results_5, "Results");
    lv_obj_add_style(o_Results_5, &s_Results_5, 0);
    
    lv_obj_t * o_Frame_95_5 = lv_canvas_create(o_Frame_110_5);
    // lv_obj_set_name(o_Frame_95_5, "o_Frame_95_5");
    lv_obj_set_x(o_Frame_95_5, 0);
    lv_obj_set_y(o_Frame_95_5, 25);
    lv_obj_set_width(o_Frame_95_5, 110);
    lv_obj_set_height(o_Frame_95_5, 28);
    lv_obj_add_style(o_Frame_95_5, &s_Frame_95_5, 0);
    lv_obj_t * o_542_mV_1 = lv_label_create(o_Frame_95_5);
    // lv_obj_set_name(o_542_mV_1, "o_542_mV_1");
    lv_obj_set_x(o_542_mV_1, 8);
    lv_obj_set_y(o_542_mV_1, 4);
    lv_obj_set_width(o_542_mV_1, 46);
    lv_obj_set_height(o_542_mV_1, 18);
    lv_label_set_text(o_542_mV_1, "542 mV");
    lv_obj_add_style(o_542_mV_1, &s_542_mV_1, 0);
    
    lv_obj_t * o_Frame_98_7 = lv_canvas_create(o_Frame_110_5);
    // lv_obj_set_name(o_Frame_98_7, "o_Frame_98_7");
    lv_obj_set_x(o_Frame_98_7, 0);
    lv_obj_set_y(o_Frame_98_7, 54);
    lv_obj_set_width(o_Frame_98_7, 110);
    lv_obj_set_height(o_Frame_98_7, 28);
    lv_obj_add_style(o_Frame_98_7, &s_Frame_98_7, 0);
    lv_obj_t * o_346_mV_1 = lv_label_create(o_Frame_98_7);
    // lv_obj_set_name(o_346_mV_1, "o_346_mV_1");
    lv_obj_set_x(o_346_mV_1, 8);
    lv_obj_set_y(o_346_mV_1, 4);
    lv_obj_set_width(o_346_mV_1, 46);
    lv_obj_set_height(o_346_mV_1, 18);
    lv_label_set_text(o_346_mV_1, "346 mV");
    lv_obj_add_style(o_346_mV_1, &s_346_mV_1, 0);
    
    lv_obj_t * o_Frame_101_2 = lv_canvas_create(o_Frame_110_5);
    // lv_obj_set_name(o_Frame_101_2, "o_Frame_101_2");
    lv_obj_set_x(o_Frame_101_2, 0);
    lv_obj_set_y(o_Frame_101_2, 83);
    lv_obj_set_width(o_Frame_101_2, 110);
    lv_obj_set_height(o_Frame_101_2, 28);
    lv_obj_add_style(o_Frame_101_2, &s_Frame_101_2, 0);
    lv_obj_t * o_2_mV_3 = lv_label_create(o_Frame_101_2);
    // lv_obj_set_name(o_2_mV_3, "o_2_mV_3");
    lv_obj_set_x(o_2_mV_3, 8);
    lv_obj_set_y(o_2_mV_3, 4);
    lv_obj_set_width(o_2_mV_3, 31);
    lv_obj_set_height(o_2_mV_3, 18);
    lv_label_set_text(o_2_mV_3, "2 mV");
    lv_obj_add_style(o_2_mV_3, &s_2_mV_3, 0);
    
    lv_obj_t * o_8_110_2_5_7_70_mmol_L = lv_label_create(o_Frame_166);
    // lv_obj_set_name(o_8_110_2_5_7_70_mmol_L, "o_8_110_2_5_7_70_mmol_L");
    lv_obj_set_x(o_8_110_2_5_7_70_mmol_L, 0);
    lv_obj_set_y(o_8_110_2_5_7_70_mmol_L, 144);
    lv_obj_set_width(o_8_110_2_5_7_70_mmol_L, 190);
    lv_obj_set_height(o_8_110_2_5_7_70_mmol_L, 21);
    lv_label_set_text(o_8_110_2_5_7_70_mmol_L, "8, 110, 2.5, 7, 70 mmol/L");
    lv_obj_add_style(o_8_110_2_5_7_70_mmol_L, &s_8_110_2_5_7_70_mmol_L, 0);
    
    lv_obj_t * o_Frame_173 = lv_canvas_create(o_Setting_data);
    // lv_obj_set_name(o_Frame_173, "o_Frame_173");
    lv_obj_set_x(o_Frame_173, 642);
    lv_obj_set_y(o_Frame_173, 70);
    lv_obj_set_width(o_Frame_173, 134);
    lv_obj_set_height(o_Frame_173, 181);
    lv_obj_add_style(o_Frame_173, &s_Frame_173, 0);
    lv_obj_t * o_Results_6 = lv_label_create(o_Frame_173);
    // lv_obj_set_name(o_Results_6, "o_Results_6");
    lv_obj_set_x(o_Results_6, 0);
    lv_obj_set_y(o_Results_6, 0);
    lv_obj_set_width(o_Results_6, 134);
    lv_obj_set_height(o_Results_6, 21);
    lv_label_set_text(o_Results_6, "Results");
    lv_obj_add_style(o_Results_6, &s_Results_6, 0);
    
    lv_obj_t * o_Frame_172 = lv_canvas_create(o_Frame_173);
    // lv_obj_set_name(o_Frame_172, "o_Frame_172");
    lv_obj_set_x(o_Frame_172, 0);
    lv_obj_set_y(o_Frame_172, 29);
    lv_obj_set_width(o_Frame_172, 134);
    lv_obj_set_height(o_Frame_172, 152);
    lv_obj_add_style(o_Frame_172, &s_Frame_172, 0);
    lv_obj_t * o_Frame_133 = lv_canvas_create(o_Frame_172);
    // lv_obj_set_name(o_Frame_133, "o_Frame_133");
    lv_obj_set_x(o_Frame_133, 12);
    lv_obj_set_y(o_Frame_133, 12);
    lv_obj_set_width(o_Frame_133, 38);
    lv_obj_set_height(o_Frame_133, 47);
    lv_obj_add_style(o_Frame_133, &s_Frame_133, 0);
    lv_obj_t * o_Status = lv_label_create(o_Frame_133);
    // lv_obj_set_name(o_Status, "o_Status");
    lv_obj_set_x(o_Status, 0);
    lv_obj_set_y(o_Status, 0);
    lv_obj_set_width(o_Status, 38);
    lv_obj_set_height(o_Status, 18);
    lv_label_set_text(o_Status, "Status");
    lv_obj_add_style(o_Status, &s_Status, 0);
    
    lv_obj_t * o_18 = lv_label_create(o_Frame_133);
    // lv_obj_set_name(o_18, "o_18");
    lv_obj_set_x(o_18, 0);
    lv_obj_set_y(o_18, 20);
    lv_obj_set_width(o_18, 18);
    lv_obj_set_height(o_18, 27);
    lv_label_set_text(o_18, "18");
    lv_obj_add_style(o_18, &s_18, 0);
    
    lv_obj_t * o_Frame_134_1 = lv_canvas_create(o_Frame_172);
    // lv_obj_set_name(o_Frame_134_1, "o_Frame_134_1");
    lv_obj_set_x(o_Frame_134_1, 12);
    lv_obj_set_y(o_Frame_134_1, 75);
    lv_obj_set_width(o_Frame_134_1, 96);
    lv_obj_set_height(o_Frame_134_1, 65);
    lv_obj_add_style(o_Frame_134_1, &s_Frame_134_1, 0);
    lv_obj_t * o_System_is_in_idle_mode = lv_label_create(o_Frame_134_1);
    // lv_obj_set_name(o_System_is_in_idle_mode, "o_System_is_in_idle_mode");
    lv_obj_set_x(o_System_is_in_idle_mode, 0);
    lv_obj_set_y(o_System_is_in_idle_mode, 0);
    lv_obj_set_width(o_System_is_in_idle_mode, 96);
    lv_obj_set_height(o_System_is_in_idle_mode, 36);
    lv_label_set_text(o_System_is_in_idle_mode, "System is in idle mode");
    lv_obj_add_style(o_System_is_in_idle_mode, &s_System_is_in_idle_mode, 0);
    
    lv_obj_t * o_4 = lv_label_create(o_Frame_134_1);
    // lv_obj_set_name(o_4, "o_4");
    lv_obj_set_x(o_4, 0);
    lv_obj_set_y(o_4, 38);
    lv_obj_set_width(o_4, 12);
    lv_obj_set_height(o_4, 27);
    lv_label_set_text(o_4, "4");
    lv_obj_add_style(o_4, &s_4, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

