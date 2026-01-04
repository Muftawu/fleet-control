#include "raylib.h"
#include <stdio.h>

#define win_width 1440
#define win_height 960 

const char *win_title = "fleet course correction";

int main(void) {

  InitWindow(win_width, win_height, win_title);

  while (!WindowShouldClose()) {
    BeginDrawing();

    DrawCircle(10, 10, 50, RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
