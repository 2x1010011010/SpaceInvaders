#include "src\WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), title("Raylib Window"), backgroundColor(RAYWHITE) {};

WindowBuilder WindowBuilder::SetWidth(int w) {
     width = w;
     return *this;
}

WindowBuilder WindowBuilder::SetHeight(int h) {
    height = h;
    return *this;
}

WindowBuilder WindowBuilder::SetTitle(const char* t) {
    title = t;
    return *this;
}

WindowBuilder WindowBuilder::SetBackgroundColor(Color color) {
    backgroundColor = color;
    return *this;
}

void WindowBuilder::Build() const {
    InitWindow(width, height, title);
    SetTargetFPS(60);
}

void WindowBuilder::Close() {
   CloseWindow();
}