#include "raylib.h"
#include "include/utils.h"

#define win_width 1440
#define win_height 960 

const char *win_title = "fleet course correction";

int main(void) {

  InitWindow(win_width, win_height, win_title);

  while (!WindowShouldClose()) {
    BeginDrawing();

       putText("top left", "topLeft", 1, 1);
       putText("top right", "topRight", 5, 1);
       putText("bottom left", "bottomLeft", 1, 2);
       putText("bottom right", "bottomRight", 7, 2);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
