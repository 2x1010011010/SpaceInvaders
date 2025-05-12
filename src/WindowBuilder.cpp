#include "../headers/WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), title("Space Invaders"), backgroundColor(RAYWHITE) {}

void WindowBuilder::SetFromJson(const json& config) {
    width = config.value("width", 800);
    height = config.value("height", 600);
    titleStr = config.value("title", "Space Invaders");
}

void WindowBuilder::Build() const {
    InitWindow(width, height, titleStr.c_str());
    SetTargetFPS(60);
}

void WindowBuilder::Close() {
    CloseWindow();
}

int WindowBuilder::GetWidth() const { return width; }
int WindowBuilder::GetHeight() const { return height; }
Color WindowBuilder::GetBackgroundColor() const { return backgroundColor; }
