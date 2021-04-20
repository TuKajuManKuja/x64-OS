#include "print.h"
#include "cursor.h"

void welcome();

void kernel_main() {
    cursor_on(0, NUM_COLS);

    print_clear();
    print(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK, "x64 OS (in-dev)\nKernel v0.0.1\n\n");
    print(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK, "Successful boot!\n\n\n");

    cursor_update(0, 4);

    // welcome();
}

void welcome () {
    print(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK, "\n\n\n\n\n                            ");
    print(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK, "Welcome to my 64-bit OS!");
}