#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CRYSTAL_01
#define LV_ATTRIBUTE_IMG_CRYSTAL_01
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CRYSTAL_01 uint8_t
    crystal_01_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x07, 0x00, 0xfe, 0xff, 
        0xff, 0x0f, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x80, 0xff, 0xff, 0x0f, 0xff, 0xff, 0x0f, 0x00, 0x00, 
        0x00, 0xfe, 0xff, 0x0f, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xff, 0xff, 0x01, 
        0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x0f, 0xff, 
        0x3f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
        0x0f, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x0f, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0xfc, 0x0f, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x0f, 0xff, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0xf0, 0x0f, 0x7f, 0x00, 0x00, 0x00, 0x5a, 0x02, 0x00, 0xe0, 0x0f, 0x3f, 0x00, 
        0x00, 0xcc, 0xa4, 0x45, 0x00, 0xc0, 0x0f, 0x3f, 0x00, 0x80, 0x12, 0x5a, 0xaa, 0x00, 0xc0, 0x0f, 
        0x1f, 0x00, 0x40, 0xcd, 0xa4, 0x45, 0x03, 0xc0, 0x0f, 0x0f, 0x00, 0x90, 0x12, 0x5a, 0xaa, 0x04, 
        0x80, 0x0f, 0x0f, 0x00, 0x96, 0x12, 0x5a, 0xaa, 0x24, 0x00, 0x0f, 0x0f, 0x00, 0x49, 0xcd, 0xa4, 
        0x45, 0x6b, 0x01, 0x0e, 0x07, 0x80, 0x96, 0x12, 0x5a, 0xaa, 0xa4, 0x02, 0x0e, 0x07, 0x40, 0x49, 
        0xcd, 0xa4, 0x45, 0x6b, 0x01, 0x0c, 0x03, 0xa0, 0x96, 0x12, 0x5a, 0xaa, 0xa4, 0x06, 0x0c, 0x03, 
        0x40, 0x09, 0xc0, 0xa4, 0x45, 0x6b, 0x09, 0x0c, 0x03, 0xb0, 0x16, 0x00, 0x0a, 0xa0, 0x04, 0x00, 
        0x08, 0x01, 0x48, 0x09, 0xc0, 0x54, 0x4a, 0x0b, 0x20, 0x08, 0x01, 0x4a, 0x49, 0xcd, 0x54, 0x0a, 
        0xa0, 0x66, 0x08, 0x01, 0xb4, 0x96, 0x12, 0xaa, 0x05, 0x60, 0x89, 0x08, 0x01, 0x0b, 0x40, 0xcd, 
        0x54, 0x0a, 0xa0, 0x66, 0x09, 0x80, 0xb4, 0x96, 0x12, 0xaa, 0x45, 0x6b, 0x09, 0x08, 0x00, 0x4b, 
        0x49, 0xcd, 0x54, 0xaa, 0xa4, 0x06, 0x08, 0xa1, 0xb4, 0xd6, 0x1f, 0xaa, 0x45, 0x6b, 0x69, 0x0d, 
        0x10, 0x4b, 0x09, 0xc0, 0xf4, 0xaf, 0xa4, 0x86, 0x0a, 0xa0, 0xb4, 0x16, 0x00, 0x0a, 0x40, 0xeb, 
        0x6f, 0x0d, 0xa4, 0xbf, 0x56, 0x0d, 0x0e, 0xe0, 0x6f, 0x69, 0x0d, 0x18, 0xe0, 0x9f, 0xd2, 0x5e, 
        0xea, 0xaf, 0xe6, 0x0f, 0xa4, 0xf4, 0x5f, 0xcd, 0xae, 0x05, 0x60, 0xe9, 0x0f, 0x18, 0x0b, 0x80, 
        0xd2, 0x5e, 0xea, 0xef, 0xef, 0x0f, 0xa4, 0x14, 0xc0, 0xdf, 0xfe, 0x0f, 0xe0, 0xef, 0x0f, 0x3c, 
        0xab, 0xd6, 0xdf, 0xfe, 0xe7, 0xcf, 0x0f, 0x08, 0xbd, 0x5f, 0xc9, 0xdf, 0xfe, 0xf1, 0x3f, 0xef, 
        0x0b, 0xbd, 0xff, 0xdf, 0xdf, 0xfe, 0xfc, 0x7f, 0xee, 0x0b, 0xbd, 0xff, 0x1f, 0xc0, 0xfe, 0xfe, 
        0xff, 0xe0, 0x0b, 0x31, 0xe0, 0xdf, 0xdf, 0x7e, 0xff, 0xff, 0xed, 0x09, 0xb7, 0xff, 0xdf, 0xdf, 
        0x7e, 0x3f, 0xfc, 0xef, 0x0d, 0xb7, 0xff, 0xdf, 0xdf, 0x3e, 0x5f, 0xfb, 0xeb, 0x0d, 0xb7, 0xff, 
        0xdf, 0xdf, 0xbe, 0xbf, 0xf4, 0xeb, 0x0c, 0xbf, 0x1f, 0xc0, 0xdf, 0x8e, 0x47, 0xeb, 0x03, 0x0e, 
        0xaf, 0x1f, 0xc0, 0xdf, 0xbe, 0xa3, 0xcc, 0x63, 0x0e, 0xaf, 0x1f, 0xc0, 0xdf, 0xbe, 0x41, 0x8b, 
        0x63, 0x0f, 0x9f, 0xff, 0xdf, 0xdf, 0x3e, 0xc0, 0x03, 0xa8, 0x0f, 0x3f, 0xe0, 0xdf, 0xdf, 0x7e, 
        0x00, 0x00, 0xec, 0x0f, 0x3f, 0xe0, 0xdf, 0xdf, 0x7e, 0x00, 0x00, 0xcc, 0x0f, 0x7f, 0xfe, 0xdf, 
        0xdf, 0xfe, 0x00, 0x00, 0xcc, 0x0f, 0xff, 0xfe, 0x1f, 0xc0, 0xfe, 0x00, 0x00, 0xee, 0x0f, 0xff, 
        0xfe, 0x1f, 0xc0, 0xfe, 0x00, 0x00, 0xe0, 0x0f, 0xff, 0xfd, 0xdf, 0xdf, 0xfe, 0x01, 0x00, 0xf3, 
        0x0f, 0xff, 0xf9, 0xdf, 0xdf, 0x0e, 0x00, 0xc0, 0xfb, 0x0f, 0xff, 0xe7, 0xdf, 0xdf, 0xfe, 0xef, 
        0xff, 0xfc, 0x0f, 0xff, 0xcf, 0xdf, 0xdf, 0xfe, 0x0f, 0x20, 0xfe, 0x0f, 0xff, 0x9f, 0xdf, 0xdf, 
        0xfe, 0xef, 0x9f, 0xff, 0x0f, 0xff, 0x3f, 0xdf, 0xdf, 0xfe, 0xef, 0xdf, 0xff, 0x0f, 0xff, 0x7f, 
        0xdc, 0xdf, 0xfe, 0xef, 0xe7, 0xff, 0x0f, 0xff, 0xff, 0x19, 0xc0, 0x0e, 0xe0, 0xf1, 0xff, 0x0f, 
        0xff, 0xff, 0x03, 0xc0, 0xfe, 0xef, 0xfc, 0xff, 0x0f, 0xff, 0xff, 0xcf, 0xdf, 0xfe, 0x2f, 0xfe, 
        0xff, 0x0f, 0xff, 0xff, 0xff, 0xde, 0xfe, 0xef, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x07, 0x00, 
        0xfe, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f,
};

const lv_img_dsc_t crystal_01 = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 69,
    .header.h = 68,
    .data_size = 620,
    .data = crystal_01_map,
};