#include "../headers/WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), titleStr("Space Invaders"), backgroundColor(RAYWHITE) {}

void WindowBuilder::SetFromJson(const json& config) {
    width = config.value("width", 800);
    height = config.value("height", 600);
}

void WindowBuilder::Build() const {
    InitWindow(width, height, "SpaceInvaders v1.0");
    SetTargetFPS(60);
}

void WindowBuilder::Close() {
    CloseWindow();
}

int WindowBuilder::GetWidth() const { return width; }
int WindowBuilder::GetHeight() const { return height; }
Color WindowBuilder::GetBackgroundColor() const { return backgroundColor; }
