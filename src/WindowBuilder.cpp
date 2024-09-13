#include "WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), title("Default Window"), backgroundColor(RAYWHITE) {};



void WindowBuilder::Build() const {
    InitWindow(width, height, title);
    SetTargetFPS(60);
}

void WindowBuilder::Close() {
   CloseWindow();
}