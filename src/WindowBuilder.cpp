#include "../headers/WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), title("Space Invaders"), backgroundColor(RAYWHITE) {};

void WindowBuilder::SetFromJson(const json& config) {
    width = config.value("width", 800);
    height = config.value("height", 600);
}

void WindowBuilder::Build() const {
    InitWindow(width, height, title);
    SetTargetFPS(60);
}

void WindowBuilder::Draw() {
    BeginDrawing();
    EndDrawing();
}

void WindowBuilder::Close() {
   CloseWindow();
}
