/**
 * @file main_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_screen_gen.h"
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

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t cell;
    static lv_style_t settings;
    static lv_style_t calibration;
    static lv_style_t s_main_frm;
    static lv_style_t s_header_frm;
    static lv_style_t s_header_right_frm;
    static lv_style_t s_header_left_frm;
    static lv_style_t s_header_right_lbl;
    static lv_style_t s_header_left_lbl;
    static lv_style_t s_calib_frm;
    static lv_style_t s_calib_ico;
    static lv_style_t s_calib_ico_hands;
    static lv_style_t s_calib_ico_circle;
    static lv_style_t s_calib_button_frm;
    static lv_style_t s_calib_button_lbl1;
    static lv_style_t s_calib_button_lbl2;
    static lv_style_t s_qc_frm;
    static lv_style_t s_qc_ico;
    static lv_style_t s_qc_button_frm;
    static lv_style_t s_qc_button_lbl1;
    static lv_style_t s_qc_button_lbl2;
    static lv_style_t s_test_frm;
    static lv_style_t s_test_ico;
    static lv_style_t s_test_button_frm;
    static lv_style_t s_test_button_lbl1;
    static lv_style_t s_test_button_lbl2;
    static lv_style_t s_svc_frm;
    static lv_style_t s_svc_ico;
    static lv_style_t s_svc_button_frm;
    static lv_style_t s_svc_button_lbl1;
    static lv_style_t s_svc_button_lbl2;
    static lv_style_t s_stt_frm;
    static lv_style_t s_stt_ico;
    static lv_style_t s_stt_button_frm;
    static lv_style_t s_stt_button_lbl1;
    static lv_style_t s_stt_button_lbl2;
    static lv_style_t s_set_frm;
    static lv_style_t s_set_ico;
    static lv_style_t s_set_button_frm;
    static lv_style_t s_set_button_lbl1;
    static lv_style_t s_set_button_lbl2;
    static lv_style_t s_footer_frm;
    static lv_style_t s_footer_left_frm;
    static lv_style_t s_footer_left_logo;
    static lv_style_t s_footer_left_lbl;
    static lv_style_t s_footer_right_frm;
    static lv_style_t s_footer_right_logo;
    static lv_style_t s_footer_right_lbl;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&cell);
        lv_style_set_border_side(&cell, LV_BORDER_SIDE_FULL);

        lv_style_init(&settings);
        lv_style_set_bg_color(&settings, lv_color_hex(0xeac831));
        lv_style_set_border_width(&settings, 1);
        lv_style_set_width(&settings, 160);
        lv_style_set_height(&settings, 100);
        lv_style_set_radius(&settings, 8);

        lv_style_init(&calibration);
        lv_style_set_bg_color(&calibration, lv_color_hex(0xb9c087));
        lv_style_set_border_width(&calibration, 1);
        lv_style_set_width(&calibration, 160);
        lv_style_set_height(&calibration, 100);
        lv_style_set_radius(&calibration, 8);

        lv_style_init(&s_main_frm);
//        lv_style_set_bg_color(&s_main_frm, lv_color_hex(0xffffff));
        lv_style_set_width(&s_main_frm, 660);
        lv_style_set_height(&s_main_frm, 340);

        lv_style_init(&s_header_frm);
        lv_style_set_bg_color(&s_header_frm, lv_color_hex(0x2d2d2d));
        lv_style_set_width(&s_header_frm, 660);
        lv_style_set_height(&s_header_frm, 46);

        lv_style_init(&s_header_right_frm);
        lv_style_set_bg_color(&s_header_right_frm, lv_color_hex(0x188733));
        lv_style_set_border_color(&s_header_right_frm, lv_color_hex(0x2e7d32));
        lv_style_set_border_opa(&s_header_right_frm, 255);
        lv_style_set_border_width(&s_header_right_frm, 1);
        lv_style_set_width(&s_header_right_frm, LV_SIZE_CONTENT);
        lv_style_set_height(&s_header_right_frm, LV_SIZE_CONTENT);
        lv_style_set_radius(&s_header_right_frm, 4);
        lv_style_set_shadow_width(&s_header_right_frm, 12);
        lv_style_set_shadow_color(&s_header_right_frm, lv_color_hex(0x2c582e));
        lv_style_set_shadow_opa(&s_header_right_frm, 255);
        //lv_style_set_shadow_offset_x(&s_header_right_frm, 0);
        //lv_style_set_shadow_offset_y(&s_header_right_frm, 2);
        lv_style_set_pad_hor(&s_header_right_frm, 10);
        lv_style_set_pad_ver(&s_header_right_frm, 6);
        lv_style_set_pad_column(&s_header_right_frm, 10);
        lv_style_set_pad_row(&s_header_right_frm, 10);

        lv_style_init(&s_header_left_frm);
        lv_style_set_width(&s_header_left_frm, 160);
        lv_style_set_height(&s_header_left_frm, 100);

        lv_style_init(&s_header_right_lbl);
        lv_style_set_text_color(&s_header_right_lbl, lv_color_hex(0xffffff));

        lv_style_init(&s_header_left_lbl);
        lv_style_set_text_color(&s_header_left_lbl, lv_color_hex(0x2b262c));

        lv_style_init(&s_calib_frm);
        lv_style_set_bg_color(&s_calib_frm, lv_color_hex(0xeef0ff));
        lv_style_set_border_width(&s_calib_frm, 1);
        lv_style_set_width(&s_calib_frm, 160);
        lv_style_set_height(&s_calib_frm, 100);
        lv_style_set_radius(&s_calib_frm, 8);

        lv_style_init(&s_calib_ico);
        lv_style_set_width(&s_calib_ico, 16);
        lv_style_set_height(&s_calib_ico, 18);

        lv_style_init(&s_calib_ico_hands);
        lv_style_set_bg_color(&s_calib_ico_hands, lv_color_hex(0x0055c1));
        lv_style_set_width(&s_calib_ico_hands, 5);
        lv_style_set_height(&s_calib_ico_hands, 5);

        lv_style_init(&s_calib_ico_circle);
        lv_style_set_bg_color(&s_calib_ico_circle, lv_color_hex(0x0055c1));
        lv_style_set_width(&s_calib_ico_circle, 16);
        lv_style_set_height(&s_calib_ico_circle, 18);

        lv_style_init(&s_calib_button_frm);
        lv_style_set_width(&s_calib_button_frm, 79);
        lv_style_set_height(&s_calib_button_frm, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_calib_button_frm, 0);
        lv_style_set_pad_ver(&s_calib_button_frm, 0);

        lv_style_init(&s_calib_button_lbl1);
        lv_style_set_text_color(&s_calib_button_lbl1, lv_color_hex(0x252226));

        lv_style_init(&s_calib_button_lbl2);
        lv_style_set_text_color(&s_calib_button_lbl2, lv_color_hex(0x5c5c5c));

        lv_style_init(&s_qc_frm);
        lv_style_set_bg_color(&s_qc_frm, lv_color_hex(0xfef0cb));
        lv_style_set_border_width(&s_qc_frm, 1);
        lv_style_set_width(&s_qc_frm, 160);
        lv_style_set_height(&s_qc_frm, 100);
        lv_style_set_radius(&s_qc_frm, 8);

        lv_style_init(&s_qc_ico);
        lv_style_set_border_color(&s_qc_ico, lv_color_hex(0x685703));
        lv_style_set_border_opa(&s_qc_ico, 255);
        lv_style_set_border_width(&s_qc_ico, 1);
        lv_style_set_width(&s_qc_ico, 16);
        lv_style_set_height(&s_qc_ico, 16);

        lv_style_init(&s_qc_button_frm);
        lv_style_set_width(&s_qc_button_frm, LV_SIZE_CONTENT);
        lv_style_set_height(&s_qc_button_frm, 36);
        lv_style_set_pad_hor(&s_qc_button_frm, 0);
        lv_style_set_pad_ver(&s_qc_button_frm, 0);

        lv_style_init(&s_qc_button_lbl1);
        lv_style_set_text_color(&s_qc_button_lbl1, lv_color_hex(0x252226));

        lv_style_init(&s_qc_button_lbl2);
        lv_style_set_text_color(&s_qc_button_lbl2, lv_color_hex(0x5c5c5c));

        lv_style_init(&s_test_frm);
        lv_style_set_bg_color(&s_test_frm, lv_color_hex(0xffeee7));
        lv_style_set_border_width(&s_test_frm, 1);
        lv_style_set_width(&s_test_frm, 160);
        lv_style_set_height(&s_test_frm, 100);
        lv_style_set_radius(&s_test_frm, 8);

        lv_style_init(&s_test_ico);
        lv_style_set_bg_color(&s_test_ico, lv_color_hex(0xa33105));
        lv_style_set_width(&s_test_ico, 16);
        lv_style_set_height(&s_test_ico, 16);

        lv_style_init(&s_test_button_frm);
        lv_style_set_width(&s_test_button_frm, 79);
        lv_style_set_height(&s_test_button_frm, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_test_button_frm, 0);
        lv_style_set_pad_ver(&s_test_button_frm, 0);

        lv_style_init(&s_test_button_lbl1);
        lv_style_set_text_color(&s_test_button_lbl1, lv_color_hex(0x252226));

        lv_style_init(&s_test_button_lbl2);
        lv_style_set_text_color(&s_test_button_lbl2, lv_color_hex(0x5c5c5c));

        lv_style_init(&s_svc_frm);
        lv_style_set_bg_color(&s_svc_frm, lv_color_hex(0xfbf0fe));
        lv_style_set_border_width(&s_svc_frm, 1);
        lv_style_set_width(&s_svc_frm, 160);
        lv_style_set_height(&s_svc_frm, 100);
        lv_style_set_radius(&s_svc_frm, 8);

        lv_style_init(&s_svc_ico);
        lv_style_set_border_color(&s_svc_ico, lv_color_hex(0x995ea9));
        lv_style_set_border_opa(&s_svc_ico, 255);
        lv_style_set_border_width(&s_svc_ico, 1);
        lv_style_set_width(&s_svc_ico, 16);
        lv_style_set_height(&s_svc_ico, 16);

        lv_style_init(&s_svc_button_frm);
        lv_style_set_width(&s_svc_button_frm, 79);
        lv_style_set_height(&s_svc_button_frm, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_svc_button_frm, 0);
        lv_style_set_pad_ver(&s_svc_button_frm, 0);

        lv_style_init(&s_svc_button_lbl1);
        lv_style_set_text_color(&s_svc_button_lbl1, lv_color_hex(0x252226));

        lv_style_init(&s_svc_button_lbl2);
        lv_style_set_text_color(&s_svc_button_lbl2, lv_color_hex(0x5c5c5c));

        lv_style_init(&s_stt_frm);
        lv_style_set_bg_color(&s_stt_frm, lv_color_hex(0xeaffe7));
        lv_style_set_border_width(&s_stt_frm, 1);
        lv_style_set_width(&s_stt_frm, 160);
        lv_style_set_height(&s_stt_frm, 100);
        lv_style_set_radius(&s_stt_frm, 8);

        lv_style_init(&s_stt_ico);
        lv_style_set_width(&s_stt_ico, 16);
        lv_style_set_height(&s_stt_ico, 16);

        lv_style_init(&s_stt_button_frm);
        lv_style_set_width(&s_stt_button_frm, 79);
        lv_style_set_height(&s_stt_button_frm, 36);
        lv_style_set_pad_hor(&s_stt_button_frm, 0);
        lv_style_set_pad_ver(&s_stt_button_frm, 0);

        lv_style_init(&s_stt_button_lbl1);
        lv_style_set_text_color(&s_stt_button_lbl1, lv_color_hex(0x252226));

        lv_style_init(&s_stt_button_lbl2);
        lv_style_set_text_color(&s_stt_button_lbl2, lv_color_hex(0x5c5c5c));

        lv_style_init(&s_set_frm);
        lv_style_set_bg_color(&s_set_frm, lv_color_hex(0xe8e7ff));
        lv_style_set_border_width(&s_set_frm, 1);
        lv_style_set_width(&s_set_frm, 160);
        lv_style_set_height(&s_set_frm, 100);
        lv_style_set_radius(&s_set_frm, 8);

        lv_style_init(&s_set_ico);
        lv_style_set_border_color(&s_set_ico, lv_color_hex(0x736ee5));
        lv_style_set_border_opa(&s_set_ico, 255);
        lv_style_set_border_width(&s_set_ico, 1);
        lv_style_set_width(&s_set_ico, 16);
        lv_style_set_height(&s_set_ico, 16);

        lv_style_init(&s_set_button_frm);
        lv_style_set_width(&s_set_button_frm, 79);
        lv_style_set_height(&s_set_button_frm, 36);
        lv_style_set_pad_hor(&s_set_button_frm, 0);
        lv_style_set_pad_ver(&s_set_button_frm, 0);

        lv_style_init(&s_set_button_lbl1);
        lv_style_set_text_color(&s_set_button_lbl1, lv_color_hex(0x252226));

        lv_style_init(&s_set_button_lbl2);
        lv_style_set_text_color(&s_set_button_lbl2, lv_color_hex(0x5c5c5c));

        lv_style_init(&s_footer_frm);
        lv_style_set_width(&s_footer_frm, 628);
        lv_style_set_height(&s_footer_frm, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_footer_frm, 0);
        lv_style_set_pad_ver(&s_footer_frm, 0);
        lv_style_set_pad_column(&s_footer_frm, 340);
        lv_style_set_pad_row(&s_footer_frm, 340);

        lv_style_init(&s_footer_left_frm);
        lv_style_set_width(&s_footer_left_frm, LV_SIZE_CONTENT);
        lv_style_set_height(&s_footer_left_frm, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_footer_left_frm, 0);
        lv_style_set_pad_ver(&s_footer_left_frm, 0);
        lv_style_set_pad_column(&s_footer_left_frm, 4);
        lv_style_set_pad_row(&s_footer_left_frm, 4);

        lv_style_init(&s_footer_left_logo);
        lv_style_set_width(&s_footer_left_logo, 60);
        lv_style_set_height(&s_footer_left_logo, 18);

        lv_style_init(&s_footer_left_lbl);
        lv_style_set_text_color(&s_footer_left_lbl, lv_color_hex(0x767676));

        lv_style_init(&s_footer_right_frm);
        lv_style_set_width(&s_footer_right_frm, LV_SIZE_CONTENT);
        lv_style_set_height(&s_footer_right_frm, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&s_footer_right_frm, 0);
        lv_style_set_pad_ver(&s_footer_right_frm, 0);
        lv_style_set_pad_column(&s_footer_right_frm, 4);
        lv_style_set_pad_row(&s_footer_right_frm, 4);

        lv_style_init(&s_footer_right_logo);
        lv_style_set_width(&s_footer_right_logo, 16);
        lv_style_set_height(&s_footer_right_logo, 16);

        lv_style_init(&s_footer_right_lbl);
        lv_style_set_text_color(&s_footer_right_lbl, lv_color_hex(0x7d7d7d));

        helloworld_init_gen(NULL);

        style_inited = true;
    }


    lv_obj_t * lv_obj_0 = lv_obj_create(lv_scr_act());


    //lv_obj_set_name_static(lv_obj_0, "main_screen_#");
    lv_obj_set_width(lv_obj_0, lv_pct(100));
    lv_obj_set_height(lv_obj_0, lv_pct(100));

    lv_obj_add_style(lv_obj_0, &s_main_frm, 0);
    lv_obj_t * header_frm = lv_canvas_create(lv_obj_0);
    //lv_obj_set_name(header_frm, "header_frm");
    lv_obj_set_width(header_frm, 481);
    lv_obj_set_height(header_frm, 46);
    lv_obj_add_style(header_frm, &s_header_frm, 0);
    lv_obj_t * header_left_frm = lv_canvas_create(header_frm);
    //lv_obj_set_name(header_left_frm, "header_left_frm");
    lv_obj_set_width(header_left_frm, 201);
    lv_obj_set_height(header_left_frm, 29);
    lv_obj_set_x(header_left_frm, 14);
    lv_obj_set_y(header_left_frm, 11);
    lv_obj_add_style(header_left_frm, &s_header_left_frm, 0);
    lv_obj_t * header_left_lbl = lv_label_create(header_left_frm);
    //lv_obj_set_name(header_left_lbl, "header_left_lbl");
    lv_label_set_text(header_left_lbl, "Ashutosh Diagnostic labs");
    lv_obj_set_x(header_left_lbl, 3);
    lv_obj_set_y(header_left_lbl, 6);
    lv_obj_add_style(header_left_lbl, &s_header_left_lbl, 0);
    
    lv_obj_t * theme = lv_switch_create(header_frm);
    //lv_obj_set_name(theme, "theme");
    lv_obj_set_style_bg_color(theme, lv_color_hex(0x000000), 0);
    lv_obj_set_width(theme, 40);
    lv_obj_set_height(theme, 23);
//    lv_obj_set_flag(theme, LV_OBJ_FLAG_CLICKABLE, true);
//    lv_obj_set_state(theme, LV_STATE_CHECKED, true);
    lv_obj_set_x(theme, 221);
    lv_obj_set_y(theme, 14);
    lv_obj_add_event_cb(theme, cb_switch_theme, LV_EVENT_VALUE_CHANGED, NULL);
    
    lv_obj_t * header_right_frm = lv_btn_create(header_frm);
    //lv_obj_set_name(header_right_frm, "header_right_frm");
    lv_obj_set_x(header_right_frm, 291);
    lv_obj_set_y(header_right_frm, 7);
    lv_obj_set_width(header_right_frm, 170);
    lv_obj_set_height(header_right_frm, 35);
    lv_obj_add_style(header_right_frm, &s_header_right_frm, 0);
    lv_obj_t * header_right_lbl = lv_label_create(header_right_frm);
    //lv_obj_set_name(header_right_lbl, "header_right_lbl");
    lv_label_set_text(header_right_lbl, "Ready for Sampling");
    lv_obj_set_x(header_right_lbl, 3);
    lv_obj_set_y(header_right_lbl, 5);
    lv_obj_add_style(header_right_lbl, &s_header_right_lbl, 0);
    lv_obj_add_event_cb(header_right_frm, cb_do_sampling, LV_EVENT_PRESSED, NULL);

    lv_obj_t * calib_frm = lv_btn_create(lv_obj_0);
    //lv_obj_set_name(calib_frm, "calib_frm");
    lv_obj_set_x(calib_frm, 20);
    lv_obj_set_y(calib_frm, 55);
    lv_obj_set_width(calib_frm, 134);
    lv_obj_set_height(calib_frm, 82);
    lv_obj_add_style(calib_frm, &s_calib_frm, 0);
    lv_obj_t * lv_canvas_0 = lv_canvas_create(calib_frm);
    lv_obj_add_style(lv_canvas_0, &s_calib_ico, 0);
    lv_obj_t * lv_image_0 = lv_img_create(lv_canvas_0);
    lv_obj_add_style(lv_image_0, &s_calib_ico_circle, 0);
    
    lv_obj_t * lv_image_1 = lv_img_create(lv_canvas_0);
    lv_obj_add_style(lv_image_1, &s_calib_ico_hands, 0);
    
    lv_obj_t * calib_button_lbl1 = lv_label_create(calib_frm);
    //lv_obj_set_name(calib_button_lbl1, "calib_button_lbl1");
    lv_label_set_text(calib_button_lbl1, "Calibration");
    lv_obj_set_x(calib_button_lbl1, 3);
    lv_obj_set_y(calib_button_lbl1, 21);
    lv_obj_add_style(calib_button_lbl1, &s_calib_button_lbl1, 0);
    
    lv_obj_t * calib_button_lbl2 = lv_label_create(calib_frm);
    //lv_obj_set_name(calib_button_lbl2, "calib_button_lbl2");
    lv_label_set_text(calib_button_lbl2, "1 & 2 point call");
    lv_obj_set_x(calib_button_lbl2, 1);
    lv_obj_set_y(calib_button_lbl2, 41);
    lv_obj_set_width(calib_button_lbl2, 102);
    lv_obj_set_height(calib_button_lbl2, 17);
    lv_obj_add_style(calib_button_lbl2, &s_calib_button_lbl2, 0);
    lv_obj_add_event_cb(calib_frm, cb_do_callibration, LV_EVENT_PRESSED, NULL);

    lv_obj_t * qc_frm = lv_btn_create(lv_obj_0);
    //lv_obj_set_name(qc_frm, "qc_frm");
    lv_obj_set_x(qc_frm, 176);
    lv_obj_set_y(qc_frm, 55);
    lv_obj_set_width(qc_frm, 134);
    lv_obj_set_height(qc_frm, 82);
    lv_obj_add_style(qc_frm, &s_qc_frm, 0);
    lv_obj_t * lv_canvas_1 = lv_canvas_create(qc_frm);
    lv_obj_set_style_border_width(lv_canvas_1, 0, 0);
    lv_obj_add_style(lv_canvas_1, &s_qc_ico, 0);
    lv_obj_t * lv_image_2 = lv_img_create(lv_canvas_1);
    lv_obj_set_style_border_width(lv_image_2, 0, 0);
    lv_obj_add_style(lv_image_2, &s_qc_ico, 0);
    
    lv_obj_t * qc_button_lbl1 = lv_label_create(qc_frm);
    //lv_obj_set_name(qc_button_lbl1, "qc_button_lbl1");
    lv_label_set_text(qc_button_lbl1, "Quality Control");
    lv_obj_set_x(qc_button_lbl1, -5);
    lv_obj_set_y(qc_button_lbl1, 21);
    lv_obj_set_width(qc_button_lbl1, 110);
    lv_obj_set_height(qc_button_lbl1, 16);
    lv_obj_add_style(qc_button_lbl1, &s_qc_button_lbl1, 0);
    
    lv_obj_t * qc_button_lbl2 = lv_label_create(qc_frm);
    //lv_obj_set_name(qc_button_lbl2, "qc_button_lbl2");
    lv_label_set_text(qc_button_lbl2, "Meta data text");
    lv_obj_set_x(qc_button_lbl2, -2);
    lv_obj_set_y(qc_button_lbl2, 42);
    lv_obj_set_width(qc_button_lbl2, 104);
    lv_obj_set_height(qc_button_lbl2, 15);
    lv_obj_add_style(qc_button_lbl2, &s_qc_button_lbl2, 0);
    lv_obj_add_event_cb(qc_frm, cb_do_qc, LV_EVENT_PRESSED, NULL);
    
    lv_obj_t * test_frm = lv_btn_create(lv_obj_0);
    //lv_obj_set_name(test_frm, "test_frm");
    lv_obj_set_x(test_frm, 330);
    lv_obj_set_y(test_frm, 55);
    lv_obj_set_width(test_frm, 134);
    lv_obj_set_height(test_frm, 82);
    lv_obj_add_style(test_frm, &s_test_frm, 0);
    lv_obj_t * lv_canvas_2 = lv_canvas_create(test_frm);
    lv_obj_add_style(lv_canvas_2, &s_test_ico, 0);
    lv_obj_t * lv_image_3 = lv_img_create(lv_canvas_2);
    lv_obj_add_style(lv_image_3, &s_test_ico, 0);
    
    lv_obj_t * test_button_lbl1 = lv_label_create(test_frm);
    //lv_obj_set_name(test_button_lbl1, "test_button_lbl1");
    lv_label_set_text(test_button_lbl1, "Test");
    lv_obj_set_x(test_button_lbl1, -4);
    lv_obj_set_y(test_button_lbl1, 22);
    lv_obj_set_width(test_button_lbl1, 38);
    lv_obj_set_height(test_button_lbl1, 18);
    lv_obj_add_style(test_button_lbl1, &s_test_button_lbl1, 0);
    
    lv_obj_t * test_button_lbl2 = lv_label_create(test_frm);
    //lv_obj_set_name(test_button_lbl2, "test_button_lbl2");
    lv_label_set_text(test_button_lbl2, "Blood & urine");
    lv_obj_set_x(test_button_lbl2, -3);
    lv_obj_set_y(test_button_lbl2, 40);
    lv_obj_set_width(test_button_lbl2, 112);
    lv_obj_set_height(test_button_lbl2, 15);
    lv_obj_add_style(test_button_lbl2, &s_test_button_lbl2, 0);
    lv_obj_add_event_cb(test_frm, cb_do_test, LV_EVENT_PRESSED, NULL);

    lv_obj_t * svc_frm = lv_btn_create(lv_obj_0);
    //lv_obj_set_name(svc_frm, "svc_frm");
    lv_obj_set_x(svc_frm, 20);
    lv_obj_set_y(svc_frm, 155);
    lv_obj_set_width(svc_frm, 134);
    lv_obj_set_height(svc_frm, 82);
    lv_obj_add_style(svc_frm, &s_svc_frm, 0);
    lv_obj_t * lv_canvas_3 = lv_canvas_create(svc_frm);
    lv_obj_set_style_border_width(lv_canvas_3, 0, 0);
    lv_obj_add_style(lv_canvas_3, &s_svc_ico, 0);
    lv_obj_t * lv_image_4 = lv_img_create(lv_canvas_3);
    lv_obj_set_style_border_width(lv_image_4, 0, 0);
    lv_obj_add_style(lv_image_4, &s_svc_ico, 0);
    
    lv_obj_t * svc_button_lbl1 = lv_label_create(svc_frm);
    //lv_obj_set_name(svc_button_lbl1, "svc_button_lbl1");
    lv_label_set_text(svc_button_lbl1, "Services");
    lv_obj_set_x(svc_button_lbl1, -4);
    lv_obj_set_y(svc_button_lbl1, 29);
    lv_obj_set_width(svc_button_lbl1, 110);
    lv_obj_set_height(svc_button_lbl1, 16);
    lv_obj_add_style(svc_button_lbl1, &s_svc_button_lbl1, 0);
    
    lv_obj_t * svc_button_lbl2 = lv_label_create(svc_frm);
    //lv_obj_set_name(svc_button_lbl2, "svc_button_lbl2");
    lv_label_set_text(svc_button_lbl2, "Meta data text");
    lv_obj_set_x(svc_button_lbl2, -7);
    lv_obj_set_y(svc_button_lbl2, 49);
    lv_obj_set_width(svc_button_lbl2, 104);
    lv_obj_set_height(svc_button_lbl2, 15);
    lv_obj_add_style(svc_button_lbl2, &s_svc_button_lbl2, 0);
    lv_obj_add_event_cb(svc_frm, cb_do_service, LV_EVENT_PRESSED, NULL);
    
    lv_obj_t * stt_frm = lv_btn_create(lv_obj_0);
    //lv_obj_set_name(stt_frm, "stt_frm");
    lv_obj_set_x(stt_frm, 176);
    lv_obj_set_y(stt_frm, 155);
    lv_obj_set_width(stt_frm, 134);
    lv_obj_set_height(stt_frm, 82);
    lv_obj_add_style(stt_frm, &s_stt_frm, 0);
    lv_obj_t * lv_canvas_4 = lv_canvas_create(stt_frm);
    lv_obj_add_style(lv_canvas_4, &s_stt_ico, 0);
    lv_obj_t * lv_image_5 = lv_img_create(lv_canvas_4);
    lv_obj_add_style(lv_image_5, &s_stt_ico, 0);
    
    lv_obj_t * stt_button_lbl1 = lv_label_create(stt_frm);
    //lv_obj_set_name(stt_button_lbl1, "stt_button_lbl1");
    lv_label_set_text(stt_button_lbl1, "Status");
    lv_obj_set_x(stt_button_lbl1, -5);
    lv_obj_set_y(stt_button_lbl1, 29);
    lv_obj_set_width(stt_button_lbl1, 110);
    lv_obj_set_height(stt_button_lbl1, 16);
    lv_obj_add_style(stt_button_lbl1, &s_stt_button_lbl1, 0);
    
    lv_obj_t * stt_button_lbl2 = lv_label_create(stt_frm);
    //lv_obj_set_name(stt_button_lbl2, "stt_button_lbl2");
    lv_label_set_text(stt_button_lbl2, "Meta data text");
    lv_obj_set_x(stt_button_lbl2, -5);
    lv_obj_set_y(stt_button_lbl2, 48);
    lv_obj_set_width(stt_button_lbl2, 104);
    lv_obj_set_height(stt_button_lbl2, 15);
    lv_obj_add_style(stt_button_lbl2, &s_stt_button_lbl2, 0);
    lv_obj_add_event_cb(stt_frm, cb_do_status, LV_EVENT_PRESSED, NULL);
    
    lv_obj_t * set_frm = lv_btn_create(lv_obj_0);
    //lv_obj_set_name(set_frm, "set_frm");
    lv_obj_set_x(set_frm, 330);
    lv_obj_set_y(set_frm, 155);
    lv_obj_set_width(set_frm, 134);
    lv_obj_set_height(set_frm, 82);
    lv_obj_add_style(set_frm, &s_set_frm, 0);
    lv_obj_t * lv_canvas_5 = lv_canvas_create(set_frm);
    lv_obj_set_style_border_width(lv_canvas_5, 0, 0);
    lv_obj_add_style(lv_canvas_5, &s_set_ico, 0);
    lv_obj_t * lv_image_6 = lv_img_create(lv_canvas_5);
    lv_obj_add_style(lv_image_6, &s_set_ico, 0);
    
    lv_obj_t * set_button_lbl1 = lv_label_create(set_frm);
    //lv_obj_set_name(set_button_lbl1, "set_button_lbl1");
    lv_label_set_text(set_button_lbl1, "Settings");
    lv_obj_set_x(set_button_lbl1, -5);
    lv_obj_set_y(set_button_lbl1, 26);
    lv_obj_set_width(set_button_lbl1, 110);
    lv_obj_set_height(set_button_lbl1, 16);
    lv_obj_add_style(set_button_lbl1, &s_set_button_lbl1, 0);
    
    lv_obj_t * set_button_lbl2 = lv_label_create(set_frm);
    //lv_obj_set_name(set_button_lbl2, "set_button_lbl2");
    lv_label_set_text(set_button_lbl2, "Meta data text");
    lv_obj_set_x(set_button_lbl2, -5);
    lv_obj_set_y(set_button_lbl2, 45);
    lv_obj_set_width(set_button_lbl2, 104);
    lv_obj_set_height(set_button_lbl2, 15);
    lv_obj_add_style(set_button_lbl2, &s_set_button_lbl2, 0);
    lv_obj_add_event_cb(set_frm, cb_do_setting, LV_EVENT_PRESSED, NULL);

    
    lv_obj_t * footer_frm = lv_canvas_create(lv_obj_0);
    //lv_obj_set_name(footer_frm, "footer_frm");
    lv_obj_set_width(footer_frm, 481);
    lv_obj_set_height(footer_frm, 46);
    lv_obj_set_x(footer_frm, 1);
    lv_obj_set_y(footer_frm, 224);
    lv_obj_add_style(footer_frm, &s_footer_frm, 0);
    lv_obj_t * footer_left_frm = lv_canvas_create(footer_frm);
    //lv_obj_set_name(footer_left_frm, "footer_left_frm");
    lv_obj_set_width(footer_left_frm, 255);
    lv_obj_set_height(footer_left_frm, 36);
    lv_obj_set_x(footer_left_frm, 14);
    lv_obj_set_y(footer_left_frm, 11);
    lv_obj_add_style(footer_left_frm, &s_footer_left_frm, 0);
    lv_obj_t * lv_image_7 = lv_img_create(footer_left_frm);
    lv_img_set_src(lv_image_7, carewell);
    lv_obj_set_align(lv_image_7, LV_ALIGN_CENTER);
    lv_obj_set_x(lv_image_7, -85);
    lv_obj_set_y(lv_image_7, 0);
    
    lv_obj_t * footer_left_lbl = lv_label_create(footer_left_frm);
    //lv_obj_set_name(footer_left_lbl, "footer_left_lbl");
    lv_label_set_text(footer_left_lbl, "Electrolyte Analyser");
    lv_obj_set_x(footer_left_lbl, 92);
    lv_obj_set_y(footer_left_lbl, 10);
    lv_obj_set_width(footer_left_lbl, 189);
    lv_obj_set_height(footer_left_lbl, 17);
    lv_obj_add_style(footer_left_lbl, &s_footer_left_lbl, 0);
    
    lv_obj_t * footer_right_frm = lv_label_create(footer_frm);
    //lv_obj_set_name(footer_right_frm, "footer_right_frm");
    lv_obj_set_x(footer_right_frm, 291);
    lv_obj_set_y(footer_right_frm, 7);
    lv_obj_set_width(footer_right_frm, 170);
    lv_obj_set_height(footer_right_frm, 35);
    lv_label_set_text(footer_right_frm, " ");
    lv_obj_add_style(footer_right_frm, &s_footer_right_frm, 0);
    lv_obj_t * footer_right_lbl = lv_label_create(footer_right_frm);
    //lv_obj_set_name(footer_right_lbl, "footer_right_lbl");
    lv_label_set_text(footer_right_lbl, "19 FEB 11:40 AM");
    lv_obj_set_x(footer_right_lbl, 59);
    lv_obj_set_y(footer_right_lbl, 12);
    lv_obj_add_style(footer_right_lbl, &s_footer_right_lbl, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

