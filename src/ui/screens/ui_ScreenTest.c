// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_ScreenTest_screen_init(void)
{
    ui_ScreenTest = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenTest, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_ScreenTest, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_ScreenTest, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_ScreenTest, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenTest, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_ScreenTest);
    lv_obj_set_width(ui_Panel1, 800);
    lv_obj_set_height(ui_Panel1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xC0C0C0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelHelloWorld = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_LabelHelloWorld, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelHelloWorld, LV_SIZE_CONTENT);    /// 30
    lv_obj_set_align(ui_LabelHelloWorld, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelHelloWorld, "Hello World");
    lv_obj_set_style_text_font(ui_LabelHelloWorld, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelCounter = lv_label_create(ui_Panel1);
    lv_obj_set_height(ui_LabelCounter, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_flex_grow(ui_LabelCounter, 1);
    lv_obj_set_align(ui_LabelCounter, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelCounter, "123456");
    lv_obj_set_style_text_align(ui_LabelCounter, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelCounter, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_ScreenTest);
    lv_obj_set_width(ui_Panel2, 800);
    lv_obj_set_height(ui_Panel2, 100);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SliderBrightness = lv_slider_create(ui_Panel2);
    lv_slider_set_range(ui_SliderBrightness, 2, 255);
    lv_slider_set_value(ui_SliderBrightness, 2, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_SliderBrightness) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_SliderBrightness, 0,
                                                                                                     LV_ANIM_OFF);
    lv_obj_set_width(ui_SliderBrightness, 500);
    lv_obj_set_height(ui_SliderBrightness, 15);
    lv_obj_set_align(ui_SliderBrightness, LV_ALIGN_CENTER);


    ui_LabelBrightness = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_LabelBrightness, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelBrightness, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelBrightness, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelBrightness, "2");
    lv_obj_set_style_text_font(ui_LabelBrightness, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_SliderBrightness, ui_event_SliderBrightness, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenTest, ui_event_ScreenTest, LV_EVENT_ALL, NULL);

}
