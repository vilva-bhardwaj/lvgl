/**
 * @file helloworld_gen.h
 */

#ifndef HELLOWORLD_GEN_H
#define HELLOWORLD_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    // #include "src/core/lv_obj_class_private.h"
#else
    #include "lvgl/lvgl.h"
    // #include "lvgl/src/core/lv_obj_class_private.h"
#endif



/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

//extern lv_font_t * poppins;
//extern lv_font_t * poppins14;
//extern uint8_t poppins_ttf_data[];
//extern size_t poppins_ttf_data_size;

/*----------------
 * Images
 *----------------*/

extern const void * carewell;

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

void cb_switch_theme(lv_event_t * e);

void cb_do_callibration(lv_event_t * e);

void cb_do_qc(lv_event_t * e);

void cb_do_test(lv_event_t * e);

void cb_do_service(lv_event_t * e);

void cb_do_status(lv_event_t * e);

void cb_do_setting(lv_event_t * e);

void cb_do_sampling(lv_event_t * e);

/**
 * Initialize the component library
 */

void helloworld_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "screens/main_screen_gen.h"
#include "screens/test_screen_gen.h"


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*HELLOWORLD_GEN_H*/
