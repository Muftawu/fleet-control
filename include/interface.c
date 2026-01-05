#include "interface.h"
#include "raylib.h"

void welcomeScreen() {

  while (!WindowShouldClose()) {
    BeginDrawing();

    DrawCircle(10, 10, 50, RAYWHITE);

    EndDrawing();
  }
}
