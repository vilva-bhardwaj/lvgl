/**
 * @file helloworld_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "helloworld_gen.h"
#include <stdio.h>


#if LV_USE_XML
#endif /* LV_USE_XML */


/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

//lv_font_t * poppins;
//
//lv_font_t * poppins14;

/*----------------
 * Images
 *----------------*/

const void * carewell;
extern const void * carewell_data;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void helloworld_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Fonts
     *----------------*/

    /* create tiny ttf font 'poppins' from C array */
//    poppins = lv_tiny_ttf_create_data(poppins_ttf_data, poppins_ttf_data_size, 12);
//    /* create tiny ttf font 'poppins14' from C array */
//    poppins14 = lv_tiny_ttf_create_data(poppins_ttf_data, poppins_ttf_data_size, 14);


    /*----------------
     * Images
     *----------------*/
    carewell = &carewell_data;

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Subjects
     *----------------*/

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
//    lv_xml_register_font(NULL, "poppins", poppins);
//    lv_xml_register_font(NULL, "poppins14", poppins14);

    /* Register subjects */

    /* Register callbacks */

#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif


}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
#endif

void __attribute__((weak)) cb_switch_theme(lv_event_t * e)
{
//    LV_UNUSED(e);
//    //LV_LOG("cb_theme_changed was called\n");
    printf("cb_theme_changed called\n");


	lv_disp_t * disp = lv_disp_get_default();
    lv_event_code_t code = lv_event_get_code(e);

    if(code == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t * sw = lv_event_get_target(e);

		bool dark = lv_obj_has_state(sw, LV_STATE_CHECKED);

		lv_theme_t * th = lv_theme_default_init(disp, lv_palette_main(LV_PALETTE_BLUE),
												lv_palette_main(LV_PALETTE_CYAN),
												dark, /* true = Dark, false = Light */
												LV_FONT_DEFAULT);
		lv_disp_set_theme(disp, th);

		lv_obj_invalidate(lv_scr_act());
    }

    printf("cb_theme_changed over\n");

}


void __attribute__((weak))  cb_do_callibration(lv_event_t * e) {
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s called\n", __func__);
}

void __attribute__((weak))  cb_do_qc(lv_event_t * e){
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s called\n", __func__);
}

void __attribute__((weak))  cb_do_test(lv_event_t * e){
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s IN\n", __func__);
	lv_obj_t* test = test_screen_create();
	lv_scr_load(test);
	printf("%s OVER\n", __func__);
}

void __attribute__((weak))  cb_do_service(lv_event_t * e){
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s called\n", __func__);
}

void __attribute__((weak))  cb_do_status(lv_event_t * e){
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s called\n", __func__);
}

void __attribute__((weak))  cb_do_setting(lv_event_t * e){
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s called\n", __func__);
}

void __attribute__((weak))  cb_do_sampling(lv_event_t * e){
	LV_UNUSED(e);
	//    //LV_LOG("cb_theme_changed was called\n");
	printf("%s called\n", __func__);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


