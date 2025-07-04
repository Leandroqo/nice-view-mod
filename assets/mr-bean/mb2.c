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

#ifndef LV_ATTRIBUTE_IMG_MB2
#define LV_ATTRIBUTE_IMG_MB2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MB2 uint8_t mb2_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x49, 0x00, 
  0xfd, 0xb6, 0xdd, 0xda, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x40, 0xff, 0x20, 0x02, 0x00, 0x00, 
  0x7f, 0x76, 0xf5, 0xfb, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x04, 0xdf, 0xc2, 0x20, 0x90, 0x80, 
  0xfb, 0xcf, 0xbf, 0x27, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0x11, 0xff, 0xf8, 0x88, 0x04, 0x00, 
  0xde, 0xbc, 0xee, 0xfc, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x01, 0x60, 0x41, 0xef, 0xfe, 0x02, 0x20, 0x40, 
  0xb7, 0xf7, 0xdb, 0xcf, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0xc9, 0x07, 0xff, 0xff, 0x40, 0x82, 0x00, 
  0x77, 0x5f, 0x77, 0x7b, 0x78, 0x00, 0x00, 0x00, 0x00, 0x03, 0xce, 0xd2, 0x25, 0xff, 0xff, 0x84, 0x10, 0x00, 
  0xdf, 0xdd, 0xfd, 0xee, 0xc8, 0x00, 0x00, 0x00, 0x48, 0x99, 0x3d, 0x90, 0x89, 0xff, 0xff, 0xc1, 0x00, 0x80, 
  0xb9, 0xff, 0x9b, 0xad, 0xbc, 0x00, 0x00, 0x01, 0x02, 0x33, 0xf7, 0x24, 0x03, 0xff, 0xff, 0xf0, 0x22, 0x00, 
  0x6f, 0x6f, 0x6e, 0x7b, 0x74, 0x00, 0x00, 0x02, 0x90, 0x66, 0xf6, 0x21, 0x26, 0xff, 0xff, 0xf0, 0x88, 0x00, 
  0xf6, 0xec, 0xf7, 0xdb, 0xce, 0x00, 0x00, 0x04, 0x01, 0x97, 0xcc, 0x8c, 0x01, 0xff, 0xff, 0xec, 0x00, 0x80, 
  0x99, 0xbf, 0x9d, 0xf6, 0x7a, 0x00, 0x00, 0x09, 0x24, 0x1f, 0x19, 0x02, 0x4d, 0xdb, 0xff, 0xf9, 0x10, 0x00, 
  0xef, 0x73, 0xfb, 0x9d, 0xf7, 0x00, 0x00, 0x08, 0x00, 0x42, 0x30, 0x32, 0x40, 0xfe, 0xff, 0xfe, 0x44, 0x00, 
  0x76, 0xdc, 0xe6, 0x77, 0x9d, 0x80, 0x00, 0x36, 0x42, 0x00, 0x26, 0x04, 0x13, 0x33, 0xbf, 0xfe, 0x01, 0x00, 
  0xd9, 0xb7, 0xbd, 0xf6, 0x66, 0x80, 0x00, 0xf4, 0x10, 0x10, 0x48, 0x49, 0x81, 0xff, 0xff, 0x7f, 0x20, 0x00, 
  0xbf, 0xef, 0x6d, 0xcd, 0xff, 0x40, 0x01, 0xc9, 0xa1, 0x44, 0x19, 0x89, 0x28, 0x5f, 0xb7, 0xff, 0x88, 0x00, 
  0xe6, 0x7d, 0x7f, 0x3d, 0x99, 0xc0, 0x17, 0x3b, 0x0c, 0x21, 0xb6, 0x24, 0x02, 0x5f, 0xef, 0xff, 0xc0, 0x00, 
  0xdf, 0x95, 0xda, 0xf3, 0xb6, 0x60, 0x17, 0xee, 0x52, 0xce, 0x6f, 0xf0, 0xd0, 0xb7, 0xfb, 0xff, 0xe0, 0x00, 
  0x39, 0xfb, 0xe7, 0xce, 0x77, 0xe0, 0x6c, 0x6e, 0x98, 0x93, 0xd9, 0xd3, 0x04, 0x2f, 0xff, 0x7f, 0xe4, 0x00, 
  0xef, 0x6f, 0x3d, 0x3b, 0xcd, 0x91, 0x89, 0xbb, 0x0e, 0x04, 0xde, 0xfc, 0x20, 0x4f, 0xfd, 0xef, 0xf0, 0x00, 
  0xdb, 0x9c, 0xd7, 0xe0, 0xbc, 0xf2, 0x17, 0xbe, 0x42, 0x27, 0xb3, 0xfc, 0x8a, 0x17, 0xff, 0xbb, 0xf8, 0x00, 
  0x7e, 0xfb, 0xf0, 0x00, 0x03, 0xac, 0x36, 0x6f, 0x84, 0x8b, 0xef, 0x3b, 0x20, 0x97, 0xfe, 0xfb, 0xf8, 0x00, 
  0xed, 0xe6, 0x00, 0x00, 0x00, 0x21, 0xef, 0xfb, 0x24, 0x03, 0x5c, 0xfe, 0x24, 0x0f, 0xff, 0xfe, 0xfc, 0x00, 
  0xff, 0x3c, 0x00, 0x00, 0x00, 0x53, 0x5d, 0x9f, 0xa2, 0x67, 0xf3, 0xdf, 0x92, 0x29, 0xff, 0xff, 0xbe, 0x00, 
  0xb9, 0xec, 0x00, 0x00, 0x00, 0x4e, 0x77, 0x6f, 0x8c, 0x0e, 0xef, 0x3e, 0x44, 0x87, 0xff, 0xfd, 0xee, 0x00, 
  0x77, 0xef, 0x00, 0x00, 0x00, 0xb9, 0x9b, 0x7b, 0xf4, 0x89, 0x9c, 0xef, 0x90, 0x13, 0xbf, 0xff, 0xbf, 0x00, 
  0xdf, 0x3b, 0x00, 0x00, 0x00, 0xd7, 0x7d, 0xce, 0xf8, 0x18, 0xdb, 0xdf, 0x92, 0x4e, 0xff, 0xfe, 0xf7, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x74, 0xe7, 0xbd, 0x89, 0x26, 0x6f, 0x7b, 0xc4, 0x81, 0xdf, 0xff, 0xdf, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0xcd, 0x9b, 0xb3, 0x30, 0x19, 0xcd, 0xaf, 0x90, 0x97, 0x7f, 0xf7, 0xff, 0x80, 
  0x00, 0x00, 0x20, 0x00, 0x0d, 0x9b, 0x7c, 0xf6, 0x62, 0x19, 0xc6, 0xbf, 0x52, 0x24, 0xef, 0xff, 0xbf, 0x80, 
  0x00, 0x00, 0x08, 0x00, 0x21, 0x72, 0x67, 0xcd, 0xc8, 0x25, 0xbe, 0xff, 0x42, 0x21, 0xbf, 0xff, 0xfb, 0xc0, 
  0x00, 0x00, 0x18, 0x00, 0x27, 0x34, 0x9b, 0x7d, 0x90, 0x9d, 0xc9, 0xcf, 0x8c, 0x83, 0x5f, 0xff, 0xde, 0xc0, 
  0x88, 0x00, 0x26, 0x00, 0x8c, 0xe5, 0x9d, 0xf3, 0x60, 0x16, 0xdd, 0xbe, 0xb0, 0x4c, 0x77, 0xff, 0xff, 0xc0, 
  0x20, 0x00, 0x03, 0x04, 0x13, 0xdc, 0x26, 0x7f, 0x49, 0x13, 0xb7, 0xbd, 0x13, 0x11, 0xaf, 0xff, 0xff, 0xc0, 
  0x04, 0x00, 0x19, 0x81, 0x96, 0x5b, 0x21, 0xdd, 0x90, 0x0d, 0xfb, 0x73, 0x64, 0x92, 0x6f, 0xff, 0xff, 0xc0, 
  0x10, 0x00, 0x06, 0xc8, 0x2c, 0xe6, 0x59, 0xfe, 0x66, 0x24, 0xcd, 0x7c, 0x8c, 0x69, 0x5f, 0xff, 0xff, 0xc0, 
  0x02, 0x00, 0x02, 0x62, 0x2d, 0xb9, 0xc6, 0x33, 0x88, 0x85, 0xf7, 0xc5, 0x33, 0x6f, 0xf9, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x01, 0xf9, 0x93, 0xcf, 0x21, 0xfd, 0x92, 0x19, 0x3d, 0xb1, 0x2d, 0xb6, 0xef, 0xff, 0xff, 0xc0, 
  0xfd, 0x84, 0x04, 0x9c, 0x36, 0x76, 0x99, 0xef, 0x34, 0x40, 0xe7, 0x66, 0x6f, 0xff, 0xfe, 0xff, 0xff, 0xe0, 
  0xf6, 0xfd, 0x00, 0xe6, 0x4d, 0x9e, 0xe6, 0xb2, 0x61, 0x26, 0xde, 0x48, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xc0, 
  0x9b, 0xdb, 0xe3, 0x3f, 0x3b, 0x79, 0x93, 0x9d, 0xcc, 0x98, 0x98, 0x9b, 0xbf, 0xff, 0xfd, 0xff, 0xff, 0xe0, 
  0x7b, 0x7e, 0xfc, 0xdf, 0xbb, 0x67, 0x79, 0x75, 0x92, 0x41, 0x33, 0x93, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xe0, 
  0x6e, 0xe5, 0x9f, 0xff, 0xe6, 0xde, 0xef, 0x66, 0x33, 0x26, 0x66, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0xfb, 0xbf, 0xe3, 0x7f, 0x3c, 0xd9, 0xb6, 0xee, 0xcc, 0xa4, 0x8c, 0x6f, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xe0, 
  0x9f, 0xba, 0x7f, 0x9f, 0xfb, 0x6f, 0x9d, 0x99, 0xa0, 0x99, 0x99, 0x9f, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xc0, 
  0xec, 0xef, 0xff, 0xff, 0xdf, 0xaa, 0x6d, 0xb3, 0x26, 0x63, 0x33, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xcc, 0xfb, 0xdb, 0x6e, 0x59, 0x26, 0x66, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0xff, 0xff, 0xff, 0xff, 0xa7, 0xcc, 0xdb, 0x59, 0xd1, 0x9c, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xc0, 
  0xf6, 0xdb, 0xc2, 0x7f, 0x07, 0x37, 0x36, 0xd7, 0x26, 0x71, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x11, 0x10, 0x19, 0xfc, 0x59, 0xf5, 0xe6, 0xb4, 0xec, 0xcf, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x4d, 0x26, 0x25, 0x38, 0x41, 0xcc, 0xde, 0xed, 0x99, 0x98, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xc0, 
  0x00, 0x48, 0xc0, 0xe0, 0x06, 0x7b, 0x59, 0x9b, 0x73, 0x33, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x1a, 0x80, 0x98, 0xf7, 0x67, 0xb3, 0x66, 0x6e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x03, 0x00, 0x21, 0x1c, 0xee, 0x6d, 0x8d, 0xd9, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 
  0x00, 0x00, 0x04, 0x01, 0x86, 0x3b, 0x99, 0xcd, 0xbc, 0xd7, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x08, 0x44, 0x10, 0x9b, 0xb7, 0x36, 0x73, 0x36, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x64, 0x4e, 0x77, 0x76, 0xc7, 0x6d, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x09, 0x4d, 0xcc, 0xd9, 0xbc, 0xdd, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x02, 0x08, 0x21, 0x13, 0xbb, 0xcd, 0x9b, 0xb7, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0xc6, 0x22, 0x77, 0x33, 0x63, 0xb9, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x18, 0xc9, 0xcc, 0xef, 0x3e, 0xce, 0x59, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x01, 0x10, 0x21, 0x21, 0x04, 0xfb, 0xbc, 0xce, 0x76, 0xef, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x11, 0x24, 0x30, 0x37, 0x65, 0xd9, 0xbb, 0xa7, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x01, 0x0c, 0x44, 0xc3, 0x6c, 0xdb, 0x37, 0xcd, 0xfe, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x22, 0x49, 0x0c, 0x1b, 0xb6, 0xf6, 0x76, 0xff, 0xee, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x04, 0x20, 0x89, 0x30, 0x86, 0xcd, 0xcd, 0x9a, 0xdd, 0xef, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x01, 0x4c, 0x92, 0x43, 0x36, 0xbb, 0x3d, 0xef, 0x37, 0x79, 0x9f, 0xff, 0xff, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x42, 0x12, 0x48, 0x43, 0xb6, 0xf3, 0x35, 0xbf, 0xcf, 0xdf, 0xff, 0xff, 0xfe, 0x00, 0x00, 
};

const lv_img_dsc_t mb2 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = mb2_map,
};
