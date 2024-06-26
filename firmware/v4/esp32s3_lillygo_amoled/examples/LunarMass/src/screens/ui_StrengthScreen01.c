// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: amoled_1p9

#include "../ui.h"

void ui_StrengthScreen01_screen_init(void)
{
ui_StrengthScreen01 = lv_obj_create(NULL);

ui_Panel5 = lv_obj_create(ui_StrengthScreen01);
lv_obj_set_width( ui_Panel5, 442);
lv_obj_set_height( ui_Panel5, 60);
lv_obj_set_x( ui_Panel5, -42 );
lv_obj_set_y( ui_Panel5, -84 );
lv_obj_set_align( ui_Panel5, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label15 = lv_label_create(ui_Panel5);
lv_obj_set_width( ui_Label15, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label15, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label15, -10 );
lv_obj_set_y( ui_Label15, -1 );
lv_obj_set_align( ui_Label15, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_Label15,"50%");
lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_36, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label16 = lv_label_create(ui_Panel5);
lv_obj_set_width( ui_Label16, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label16, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label16, 76 );
lv_obj_set_y( ui_Label16, -2 );
lv_obj_set_align( ui_Label16, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_Label16,"concentric only force");
lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xA0A0A0), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button3 = lv_btn_create(ui_StrengthScreen01);
lv_obj_set_width( ui_Button3, 54);
lv_obj_set_height( ui_Button3, 42);
lv_obj_set_x( ui_Button3, 229 );
lv_obj_set_y( ui_Button3, -89 );
lv_obj_set_align( ui_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xA2314C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label17 = lv_label_create(ui_Button3);
lv_obj_set_width( ui_Label17, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label17, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label17, -2 );
lv_obj_set_y( ui_Label17, 2 );
lv_obj_set_align( ui_Label17, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label17,"<");
lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xDFE2FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_46, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel6 = lv_obj_create(ui_StrengthScreen01);
lv_obj_set_width( ui_Panel6, 528);
lv_obj_set_height( ui_Panel6, 60);
lv_obj_set_x( ui_Panel6, 0 );
lv_obj_set_y( ui_Panel6, -19 );
lv_obj_set_align( ui_Panel6, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Checkbox1 = lv_checkbox_create(ui_Panel6);
lv_checkbox_set_text(ui_Checkbox1,"adaptive force for self-charging");
lv_obj_set_width( ui_Checkbox1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Checkbox1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Checkbox1, -5 );
lv_obj_set_y( ui_Checkbox1, 0 );
lv_obj_set_align( ui_Checkbox1, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_font(ui_Checkbox1, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_StrengthScreen01, ui_event_StrengthScreen01, LV_EVENT_ALL, NULL);

}
