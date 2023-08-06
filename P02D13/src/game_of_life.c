#include <ncurses.h>
#include <stdio.h>

#define SPEED_GAME 1
#define HEIGHT 25
#define WIDTH 80

void print_box(int height, int width);  // отрисовка поля

int main(void) {
    initscr();
    halfdelay(SPEED_GAME);
    print_box(HEIGHT, WIDTH);

    for (;;) {
        move(0, 0);
        refresh();
    }

    endwin();
    return 0;
}

void print_box(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 && (j >= 0 && j < width)) {  // верх
                printw("#");
            } else if (i == height - 1 && (j >= 0 && j < width)) {  // низ
                printw("#");
            } else if ((i >= 0 && i < height) && j == 0) {  // лево
                printw("#");
            } else if ((i >= 0 && i < height) && j == width - 1) {  // право
                printw("#");
            } else {
                printw(" ");
            }
        }
        printw("\n");
    }
}