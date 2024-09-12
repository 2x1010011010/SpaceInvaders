#include "WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), title("Raylib Window"), backgroundColor(RAYWHITE) {};

void WindowBuilder::SetWidth(int w) {
     width = w;
}

void WindowBuilder::SetHeight(int h) {
    height = h;
}

void WindowBuilder::SetTitle(const char* t) {
    title = t;
}

void WindowBuilder::SetBackgroundColor(Color color) {
    backgroundColor = color;
}

void WindowBuilder::Build() const {
    InitWindow(width, height, title);
    SetTargetFPS(60);
}

void WindowBuilder::Run() const {
   while (!WindowShouldClose()) {
       ClearBackground(backgroundColor);
   }
   CloseWindow();
}