#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int leftCol, int size);
void print_char_5x7(char c);
void print_char_8x12(char c);
void print_arrow(int leftCol, int size);

extern const unsigned char font_5x7[][5];
extern const unsigned char font_8x12[][12];

#endif
