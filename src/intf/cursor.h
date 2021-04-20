#pragma once

#include <stdint.h>
#include <stddef.h>

void cursor_on(size_t cursor_start, size_t cursor_end);
void cursor_off();
void cursor_update(size_t x, size_t y);