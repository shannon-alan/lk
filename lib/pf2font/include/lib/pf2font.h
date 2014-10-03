#ifndef LIB_PF2FONT_H
#define LIB_PF2FONT_H

#include <stdint.h>

int pf2font_init(char *font_data, unsigned long font_len);
void pf2font_set_color(uint8_t r, uint8_t g, uint8_t b);
void pf2font_puts(uint32_t x, uint32_t y, const char *str);
int pf2font_printf(uint32_t x, uint32_t y, const char *fmt, ...);

#endif // LIB_PF2FONT_H
