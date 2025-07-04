#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MB1
#define LV_ATTRIBUTE_IMG_MB1
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MB1 uint8_t mb1_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x24, 0x00, 
  0xfb, 0xdb, 0xbb, 0x3e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x40, 0xff, 0x08, 0x00, 0x81, 0x00, 
  0xfe, 0x6c, 0xf7, 0xf3, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x04, 0xdf, 0xc1, 0x12, 0x08, 0x00, 
  0xbf, 0xbf, 0xdc, 0xcd, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe1, 0x91, 0xff, 0xf0, 0x40, 0x20, 0x40, 
  0xee, 0xf3, 0x6f, 0x7e, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xc8, 0x03, 0xff, 0xfe, 0x04, 0x84, 0x00, 
  0xdf, 0xcf, 0xfb, 0xb3, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x6b, 0x82, 0x22, 0xff, 0xff, 0x80, 0x81, 0x00, 
  0x73, 0x7e, 0xde, 0xbd, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x07, 0x9b, 0x18, 0x83, 0xff, 0xff, 0xc0, 0x20, 0x40, 
  0xdf, 0x9e, 0xfd, 0xee, 0xc8, 0x00, 0x00, 0x00, 0x11, 0x19, 0x76, 0x01, 0x0d, 0xff, 0xff, 0xd2, 0x08, 0x00, 
  0xdd, 0xff, 0xa7, 0xdb, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x63, 0x7e, 0x24, 0x23, 0xff, 0xff, 0xe0, 0x41, 0x00, 
  0xb3, 0xef, 0x7a, 0x7d, 0xb4, 0x00, 0x00, 0x03, 0x80, 0x97, 0xcc, 0x22, 0x06, 0xff, 0xff, 0xf1, 0x10, 0x00, 
  0xbe, 0xec, 0xcf, 0xa7, 0xce, 0x00, 0x00, 0x04, 0x08, 0x97, 0xb8, 0x88, 0x41, 0xff, 0xff, 0xf8, 0x04, 0x80, 
  0x67, 0x3f, 0xbd, 0xbb, 0x7a, 0x00, 0x00, 0x04, 0x02, 0x6f, 0x62, 0x05, 0x0d, 0xdb, 0xff, 0xfa, 0x40, 0x00, 
  0xd9, 0xf3, 0xf7, 0xef, 0x77, 0x00, 0x00, 0x11, 0x20, 0x04, 0x4a, 0x32, 0x41, 0x76, 0xff, 0xfe, 0x08, 0x00, 
  0xde, 0xde, 0xce, 0x6c, 0xdd, 0x80, 0x00, 0x36, 0x08, 0x00, 0x18, 0x82, 0x13, 0x77, 0xbf, 0xfc, 0x81, 0x00, 
  0x77, 0xb6, 0xf9, 0xdb, 0xe6, 0x80, 0x00, 0xec, 0x42, 0x41, 0x12, 0x09, 0x20, 0x7f, 0xbf, 0xff, 0x10, 0x00, 
  0x6c, 0xed, 0xb7, 0xbb, 0x3f, 0x40, 0x01, 0xc9, 0x90, 0x10, 0x66, 0x24, 0x84, 0xdf, 0xfb, 0xff, 0x80, 0x00, 
  0xdb, 0xef, 0x7e, 0xe6, 0xd9, 0xc0, 0x17, 0x7e, 0x0c, 0xcc, 0x6c, 0xc4, 0x90, 0x9f, 0xcf, 0xff, 0xa4, 0x00, 
  0x77, 0x39, 0xcb, 0x5e, 0xd6, 0xe0, 0x17, 0x8e, 0x63, 0x13, 0x9b, 0x88, 0x42, 0x37, 0xfd, 0xff, 0xe0, 0x00, 
  0xee, 0xf7, 0xbd, 0xd9, 0xb7, 0xa0, 0x6c, 0xfd, 0x98, 0x92, 0xf7, 0xb3, 0x10, 0x6f, 0xf7, 0x7f, 0xe0, 0x00, 
  0x9b, 0xce, 0xb7, 0xb7, 0xb9, 0xb1, 0x8a, 0xb7, 0x0c, 0x46, 0xdf, 0xe4, 0x44, 0x0f, 0xff, 0xef, 0xf8, 0x00, 
  0x7b, 0x3a, 0xf6, 0x60, 0x6e, 0x72, 0x13, 0xbb, 0x05, 0x27, 0xb9, 0xc9, 0x04, 0x97, 0xff, 0xbb, 0xf0, 0x00, 
  0xee, 0xf7, 0xc8, 0x00, 0x03, 0xc8, 0x5f, 0x6f, 0x44, 0x09, 0xe7, 0xf1, 0x30, 0x17, 0xfe, 0xfb, 0xfc, 0x00, 
  0xfd, 0xdc, 0x00, 0x00, 0x00, 0x29, 0xb7, 0x7f, 0x44, 0x47, 0x5e, 0xfc, 0xa1, 0x0f, 0xff, 0xfe, 0xf8, 0x00, 
  0x77, 0x6c, 0x00, 0x00, 0x00, 0x13, 0xb6, 0xdb, 0x91, 0x17, 0xd9, 0xd8, 0x84, 0x29, 0xff, 0xff, 0xbe, 0x00, 
  0xfb, 0xec, 0x00, 0x00, 0x00, 0x5e, 0x6e, 0xde, 0xcc, 0x09, 0xf7, 0x7a, 0x14, 0x87, 0xff, 0xfd, 0xfe, 0x00, 
  0xde, 0xbf, 0x00, 0x00, 0x00, 0xe3, 0x7b, 0xb7, 0xea, 0x4b, 0x36, 0xfe, 0x52, 0x16, 0xff, 0xff, 0xbf, 0x00, 
  0x76, 0xdb, 0x00, 0x00, 0x00, 0xbc, 0xd7, 0x6d, 0xb8, 0x14, 0xce, 0xed, 0x12, 0x43, 0xdf, 0xfe, 0xe7, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x4e, 0xdd, 0xdf, 0x30, 0x9c, 0xd9, 0xbf, 0x10, 0x8c, 0xff, 0xfb, 0xff, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x73, 0x3b, 0xb6, 0x68, 0x21, 0xcf, 0xf6, 0x46, 0x13, 0xbf, 0xff, 0xdf, 0x80, 
  0x00, 0x00, 0x20, 0x00, 0x06, 0x9b, 0x66, 0xec, 0xe2, 0x1d, 0xce, 0x7c, 0x90, 0x43, 0x6f, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x08, 0x00, 0x92, 0xcc, 0xdd, 0xd9, 0x90, 0x45, 0xd9, 0xfe, 0x12, 0x24, 0xff, 0xff, 0xfb, 0xc0, 
  0x00, 0x00, 0x18, 0x00, 0x0b, 0x72, 0x3b, 0x77, 0xc4, 0x1c, 0xcf, 0xba, 0x64, 0xa4, 0x9f, 0xff, 0xde, 0xc0, 
  0x88, 0x00, 0x26, 0x00, 0x25, 0x9a, 0xa6, 0xf7, 0x30, 0x33, 0xba, 0xfc, 0x89, 0x09, 0xb7, 0xff, 0xff, 0xc0, 
  0x20, 0x00, 0x05, 0x04, 0x9c, 0xec, 0x8d, 0xbc, 0xc1, 0x0f, 0xbb, 0x75, 0xb2, 0x12, 0x6f, 0xff, 0xff, 0xc0, 
  0x04, 0x00, 0x19, 0x80, 0x93, 0x6d, 0x31, 0x7b, 0x8c, 0x0c, 0xe7, 0x69, 0x24, 0xc4, 0xdf, 0xff, 0xff, 0xc0, 
  0x10, 0x00, 0x0a, 0xc9, 0x27, 0xb2, 0xc3, 0x7b, 0x30, 0x95, 0xdd, 0xca, 0x4d, 0x39, 0x37, 0xff, 0xff, 0xc0, 
  0x02, 0x00, 0x03, 0x70, 0x2c, 0x9e, 0x98, 0xde, 0x46, 0x11, 0xf7, 0xb2, 0x99, 0xaf, 0xfd, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x01, 0x36, 0x9d, 0xeb, 0x26, 0xfe, 0xd8, 0x46, 0x6e, 0xcc, 0xa6, 0xed, 0xdb, 0xff, 0xff, 0xc0, 
  0xfd, 0x40, 0x06, 0xdc, 0x33, 0x39, 0xb1, 0xb9, 0x81, 0x08, 0x9b, 0x09, 0x3f, 0xff, 0xfe, 0xff, 0xff, 0xe0, 
  0x77, 0xfd, 0x00, 0xd7, 0x26, 0xf6, 0xcd, 0xe7, 0x36, 0x31, 0xbd, 0xb3, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0xdb, 0xbf, 0xe1, 0x37, 0x9f, 0x4f, 0x63, 0x36, 0xd0, 0xc4, 0x66, 0x24, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xe0, 
  0xdc, 0xf6, 0xfb, 0xbf, 0xd9, 0x79, 0x9b, 0x9a, 0x65, 0x08, 0xb3, 0x4f, 0xff, 0xff, 0xf7, 0x7f, 0xff, 0xe0, 
  0x77, 0x4d, 0x9e, 0xff, 0xbb, 0x9e, 0xfe, 0xed, 0xa5, 0x33, 0x8c, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0xef, 0xfb, 0x67, 0xdf, 0xb6, 0xb3, 0x66, 0x6d, 0x98, 0xc4, 0x66, 0x3f, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xe0, 
  0xed, 0xb6, 0xfd, 0xdf, 0xfd, 0xee, 0xdf, 0xb2, 0x52, 0x2d, 0x19, 0x8f, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xc0, 
  0x7f, 0x7f, 0xff, 0xff, 0xdb, 0x3a, 0xd9, 0x9b, 0x63, 0x21, 0xc9, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0xdb, 0xef, 0xff, 0xff, 0xce, 0xe7, 0x36, 0xec, 0x98, 0xda, 0x67, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0xff, 0xff, 0xff, 0xff, 0xad, 0xdd, 0xb7, 0x36, 0xc6, 0x1b, 0x34, 0x7f, 0xff, 0xff, 0xff, 0xef, 0xff, 0xc0, 
  0xff, 0x79, 0x92, 0x7f, 0x07, 0x5a, 0xcc, 0xdb, 0x71, 0xe5, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0x06, 0x21, 0xfc, 0x53, 0xeb, 0x7b, 0xd9, 0x9c, 0x34, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0xb6, 0xc4, 0xcd, 0x38, 0x01, 0x9c, 0xe7, 0x36, 0xe3, 0xce, 0x77, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xc0, 
  0x00, 0x19, 0x10, 0xe0, 0x2c, 0xf7, 0x9c, 0xe6, 0x6d, 0x69, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x12, 0x80, 0x82, 0x7b, 0x5b, 0x9d, 0xcd, 0x3d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x03, 0x04, 0x91, 0x2c, 0xe7, 0x75, 0xb2, 0xd3, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 
  0x00, 0x00, 0x0c, 0x00, 0x24, 0xb7, 0xac, 0xce, 0x36, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x00, 0x03, 0x22, 0x1e, 0x7b, 0xb3, 0xcd, 0x3d, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x49, 0x19, 0xcd, 0xbd, 0x79, 0xf3, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x04, 0x47, 0xdc, 0xcc, 0x96, 0xce, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x10, 0x0c, 0x32, 0x47, 0x33, 0x73, 0xb3, 0x3d, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x01, 0x00, 0xc1, 0x98, 0xef, 0x37, 0x6d, 0xf3, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x13, 0x0c, 0x21, 0xee, 0xec, 0xae, 0xcf, 0x5b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x80, 0x24, 0x22, 0x46, 0x59, 0xae, 0xb3, 0x3c, 0xd6, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x98, 0x98, 0x77, 0x73, 0xdd, 0xf3, 0xb7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x21, 0x12, 0x41, 0x21, 0x37, 0x5c, 0x76, 0x9f, 0xfe, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x08, 0x41, 0x26, 0x44, 0x8c, 0xcb, 0xb6, 0xe5, 0xdf, 0xee, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x8c, 0x18, 0x92, 0x4b, 0xbb, 0xcd, 0xbd, 0x7d, 0xef, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x32, 0xc1, 0x09, 0x27, 0x76, 0x79, 0x9b, 0x37, 0xd9, 0x9f, 0xff, 0xff, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x26, 0x64, 0x91, 0xcd, 0xae, 0xe6, 0xdf, 0x77, 0xdf, 0xff, 0xff, 0xfe, 0x00, 0x00, 
};

const lv_img_dsc_t mb1 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = mb1_map,
};
