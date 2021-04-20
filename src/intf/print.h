#pragma once

#include <stdint.h>
#include <stddef.h>

const static size_t NUM_COLS = 80;
const static size_t NUM_ROWS = 25;

void print_clear();
void print_char(char c);
void print_str(char* s);
void print_set_color(uint8_t fg, uint8_t bg);
void print(uint8_t fg, uint8_t bg, char* s);
// size_t getNumCols() { return NUM_COLS; }
// size_t getNumRows() { return NUM_ROWS; }

enum {
    PRINT_COLOR_BLACK = 0,
	PRINT_COLOR_BLUE = 1,
	PRINT_COLOR_GREEN = 2,
	PRINT_COLOR_CYAN = 3,
	PRINT_COLOR_RED = 4,
	PRINT_COLOR_MAGENTA = 5,
	PRINT_COLOR_BROWN = 6,
	PRINT_COLOR_LIGHT_GRAY = 7,
	PRINT_COLOR_DARK_GRAY = 8,
	PRINT_COLOR_LIGHT_BLUE = 9,
	PRINT_COLOR_LIGHT_GREEN = 10,
	PRINT_COLOR_LIGHT_CYAN = 11,
	PRINT_COLOR_LIGHT_RED = 12,
	PRINT_COLOR_PINK = 13,
	PRINT_COLOR_YELLOW = 14,
	PRINT_COLOR_WHITE = 15,
};