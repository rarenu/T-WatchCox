#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_INFO_OK_8PX
#define LV_ATTRIBUTE_IMG_INFO_OK_8PX
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_INFO_OK_8PX uint8_t info_ok_8px_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x08, 0x00, 0x18, 0x28, 0x18, 0xb0, 0x18, 0xf3, 0x18, 0xf3, 0x18, 0xaf, 0x18, 0x27, 0x08, 0x00, 
  0x18, 0x28, 0x18, 0xf0, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xef, 0x18, 0x27, 
  0x18, 0xb0, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xac, 
  0x18, 0xf3, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xec, 
  0x18, 0xf3, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xec, 
  0x18, 0xb0, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xac, 
  0x18, 0x28, 0x18, 0xf0, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xff, 0x18, 0xef, 0x18, 0x27, 
  0x08, 0x00, 0x18, 0x28, 0x18, 0xb0, 0x18, 0xf3, 0x18, 0xf0, 0x18, 0xaf, 0x18, 0x27, 0x08, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x80, 0x02, 0x00, 0x40, 0x06, 0x28, 0x40, 0x06, 0xb0, 0x40, 0x06, 0xf3, 0x40, 0x06, 0xf3, 0x40, 0x06, 0xaf, 0x40, 0x06, 0x27, 0xc0, 0x01, 0x00, 
  0x40, 0x06, 0x28, 0x40, 0x06, 0xf0, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xef, 0x40, 0x06, 0x27, 
  0x40, 0x06, 0xb0, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xac, 
  0x40, 0x06, 0xf3, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xec, 
  0x40, 0x06, 0xf3, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xec, 
  0x40, 0x06, 0xb0, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xac, 
  0x40, 0x06, 0x28, 0x40, 0x06, 0xf0, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xff, 0x40, 0x06, 0xef, 0x40, 0x06, 0x27, 
  0x80, 0x02, 0x00, 0x40, 0x06, 0x28, 0x40, 0x06, 0xb0, 0x40, 0x06, 0xf3, 0x40, 0x06, 0xf0, 0x40, 0x06, 0xaf, 0x40, 0x06, 0x27, 0xc0, 0x01, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x02, 0x80, 0x00, 0x06, 0x40, 0x28, 0x06, 0x40, 0xb0, 0x06, 0x40, 0xf3, 0x06, 0x40, 0xf3, 0x06, 0x40, 0xaf, 0x06, 0x40, 0x27, 0x01, 0xc0, 0x00, 
  0x06, 0x40, 0x28, 0x06, 0x40, 0xf0, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xef, 0x06, 0x40, 0x27, 
  0x06, 0x40, 0xb0, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xac, 
  0x06, 0x40, 0xf3, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xec, 
  0x06, 0x40, 0xf3, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xec, 
  0x06, 0x40, 0xb0, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xac, 
  0x06, 0x40, 0x28, 0x06, 0x40, 0xf0, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xff, 0x06, 0x40, 0xef, 0x06, 0x40, 0x27, 
  0x02, 0x80, 0x00, 0x06, 0x40, 0x28, 0x06, 0x40, 0xb0, 0x06, 0x40, 0xf3, 0x06, 0x40, 0xf0, 0x06, 0x40, 0xaf, 0x06, 0x40, 0x27, 0x01, 0xc0, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x50, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x28, 0x00, 0xc8, 0x00, 0xb0, 0x00, 0xc8, 0x00, 0xf3, 0x00, 0xc8, 0x00, 0xf3, 0x00, 0xc8, 0x00, 0xaf, 0x00, 0xc8, 0x00, 0x27, 0x00, 0x39, 0x00, 0x00, 
  0x00, 0xc8, 0x00, 0x28, 0x00, 0xc8, 0x00, 0xf0, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xef, 0x00, 0xc8, 0x00, 0x27, 
  0x00, 0xc8, 0x00, 0xb0, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xac, 
  0x00, 0xc8, 0x00, 0xf3, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xec, 
  0x00, 0xc8, 0x00, 0xf3, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xec, 
  0x00, 0xc8, 0x00, 0xb0, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xac, 
  0x00, 0xc8, 0x00, 0x28, 0x00, 0xc8, 0x00, 0xf0, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xff, 0x00, 0xc8, 0x00, 0xef, 0x00, 0xc8, 0x00, 0x27, 
  0x00, 0x50, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x28, 0x00, 0xc8, 0x00, 0xb0, 0x00, 0xc8, 0x00, 0xf3, 0x00, 0xc8, 0x00, 0xf0, 0x00, 0xc8, 0x00, 0xaf, 0x00, 0xc8, 0x00, 0x27, 0x00, 0x39, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t info_ok_8px = {
  .header.always_zero = 0,
  .header.w = 8,
  .header.h = 8,
  .data_size = 64 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = info_ok_8px_map,
};

