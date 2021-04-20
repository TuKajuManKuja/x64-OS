#include "cursor.h"
#include "print.h"
#include "io.h"

void cursor_on(size_t cursor_start, size_t cursor_end) {
    outb(0x3D4, 0x0A);
	outb(0x3D5, (inb(0x3D5) & 0xC0) | cursor_start);
 
	outb(0x3D4, 0x0B);
	outb(0x3D5, (inb(0x3D5) & 0xE0) | cursor_end);
}

void cursor_off() {
    outb(0x3D4, 0x0A);
	outb(0x3D5, 0x20);
}

void cursor_update(size_t x, size_t y) {
    uint16_t pos = y * NUM_COLS + x;
 
	outb(0x3D4, 0x0F);
	outb(0x3D5, (uint8_t) (pos & 0xFF));
	outb(0x3D4, 0x0E);
	outb(0x3D5, (uint8_t) ((pos >> 8) & 0xFF));
}