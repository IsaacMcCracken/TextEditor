#include <stdio.h>

#include <raylib.h>


const char *defaultFontFolder = "C:/Windows/Font";

int main() {

  InitWindow(1200, 900, "Editor");

  Font font = LoadFont("../font/courierprime.ttf");
  SetTextureFilter(font.texture, TEXTURE_FILTER_BILINEAR);

  FilePathList src = LoadDirectoryFiles("../src");
  printf("Src File Count: %d\n", src.count);

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(DARKGRAY);

      DrawTextEx(font, "Here is a message", (Vector2){0,0}, 20, 1, WHITE);
      for (int i = 0; i < src.count; i++) {
        DrawTextEx(font, src.paths[i], (Vector2){10, 20 * i + 20}, 16, 1, YELLOW);
      }
    EndDrawing();
  }
  return 0;
}