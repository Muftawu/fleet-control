#include "interface.h"
#include "raylib.h"
#include <stdio.h>

#ifndef UTILS_H
#define UTILS_H

#define HEADER_FONT 50
#define SCREEN_PADDING 50
#define SCREEN_WIDTH GetScreenWidth()
#define SCREEN_HEIGHT GetScreenHeight()
#define TEXT_POSITION_TOP_LEFT Vector2(.x = SCREEN_PADDING, .y = SCREEN_PADDING)

void putText(const char *text, const char *position, int shiftX, int shiftY);

#endif // UTILS_H
