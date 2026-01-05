#include "utils.h"
#include "raylib.h"
#include <string.h>

void putText(const char *text, const char *position, int shiftX, int shiftY) {

  if (strcmp(position, "topLeft") == 0) {
    DrawText(text, shiftX * SCREEN_PADDING, shiftY * SCREEN_PADDING,
             HEADER_FONT, RAYWHITE);
  }

  else if (strcmp(position, "topRight") == 0) {
    DrawText(text, SCREEN_WIDTH - shiftX * SCREEN_PADDING,
             shiftY * SCREEN_PADDING, HEADER_FONT, RAYWHITE);
  }

  else if (strcmp(position, "bottomLeft") == 0) {
    DrawText(text, SCREEN_PADDING * shiftX,
             SCREEN_HEIGHT - shiftY * SCREEN_PADDING, HEADER_FONT, RAYWHITE);
  }

  else if (strcmp(position, "bottomRight") == 0) {
    DrawText(text, SCREEN_WIDTH - shiftX * SCREEN_PADDING,
             SCREEN_HEIGHT - shiftY * SCREEN_PADDING, HEADER_FONT, RAYWHITE);
  }

}
