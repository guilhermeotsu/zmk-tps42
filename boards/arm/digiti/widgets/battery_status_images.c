/*
 * Copyright (c) 2020 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif


#ifndef LV_ATTRIBUTE_IMG_BATTERY_1_IMG
#define LV_ATTRIBUTE_IMG_BATTERY_1_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY_1_IMG uint8_t battery_1_img_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x7e, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xfc, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 
  0xe0, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf9, 0x80, 
  0xc7, 0xff, 0xf9, 0x80, 
  0xc7, 0xff, 0xf9, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xe0, 0x00, 0x03, 0x80, 
  0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 
};

const lv_img_dsc_t battery_1_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 25,
  .header.h = 40,
  .data_size = 169,
  .data = battery_1_img_map,
};



#ifndef LV_ATTRIBUTE_IMG_BATTERY_2_IMG
#define LV_ATTRIBUTE_IMG_BATTERY_2_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY_2_IMG uint8_t battery_2_img_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x7e, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xfc, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 
  0xe0, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xe0, 0x00, 0x03, 0x80, 
  0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 
};

const lv_img_dsc_t battery_2_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 25,
  .header.h = 40,
  .data_size = 169,
  .data = battery_2_img_map,
};




#ifndef LV_ATTRIBUTE_IMG_BATTERY_3_IMG
#define LV_ATTRIBUTE_IMG_BATTERY_3_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY_3_IMG uint8_t battery_3_img_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x7e, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xfc, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 
  0xe0, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xe0, 0x00, 0x03, 0x80, 
  0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 
};

const lv_img_dsc_t battery_3_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 25,
  .header.h = 40,
  .data_size = 169,
  .data = battery_3_img_map,
};



#ifndef LV_ATTRIBUTE_IMG_BATTERY_4_IMG
#define LV_ATTRIBUTE_IMG_BATTERY_4_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY_4_IMG uint8_t battery_4_img_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x7e, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xfc, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 
  0xe0, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xe0, 0x00, 0x03, 0x80, 
  0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 
};

const lv_img_dsc_t battery_4_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 25,
  .header.h = 40,
  .data_size = 169,
  .data = battery_4_img_map,
};




#ifndef LV_ATTRIBUTE_IMG_BATTERY_5_IMG
#define LV_ATTRIBUTE_IMG_BATTERY_5_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY_5_IMG uint8_t battery_5_img_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x7e, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xfc, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 
  0xe0, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc7, 0xff, 0xf1, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xe0, 0x00, 0x03, 0x80, 
  0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 
};

const lv_img_dsc_t battery_5_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 25,
  .header.h = 40,
  .data_size = 169,
  .data = battery_5_img_map,
};




#ifndef LV_ATTRIBUTE_IMG_BATTERY_CHARGING_IMG
#define LV_ATTRIBUTE_IMG_BATTERY_CHARGING_IMG
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BATTERY_CHARGING_IMG uint8_t battery_charging_img_map[] = {
  0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x7e, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xfc, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 
  0xe0, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xd0, 0x00, 0x01, 0x80, 
  0xc8, 0x00, 0x01, 0x80, 
  0xcc, 0x00, 0x01, 0x80, 
  0xc6, 0x00, 0x01, 0x80, 
  0xc7, 0x02, 0x01, 0x80, 
  0xc7, 0x82, 0x01, 0x80, 
  0xc3, 0xc3, 0x01, 0x80, 
  0xc3, 0xe7, 0x01, 0x80, 
  0xc1, 0xff, 0x01, 0x80, 
  0xc1, 0xff, 0x81, 0x80, 
  0xc0, 0xff, 0x81, 0x80, 
  0xc0, 0xff, 0xc1, 0x80, 
  0xc0, 0x7f, 0xc1, 0x80, 
  0xc0, 0x7f, 0xc1, 0x80, 
  0xc0, 0x3f, 0xe1, 0x80, 
  0xc0, 0x39, 0xe1, 0x80, 
  0xc0, 0x30, 0xf1, 0x80, 
  0xc0, 0x10, 0x71, 0x80, 
  0xc0, 0x10, 0x39, 0x80, 
  0xc0, 0x00, 0x19, 0x80, 
  0xc0, 0x00, 0x09, 0x80, 
  0xc0, 0x00, 0x05, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xc0, 0x00, 0x01, 0x80, 
  0xe0, 0x00, 0x03, 0x80, 
  0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 
};

const lv_img_dsc_t battery_charging_img = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 25,
  .header.h = 40,
  .data_size = 169,
  .data = battery_charging_img_map,
};
