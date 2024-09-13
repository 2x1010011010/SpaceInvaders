#include "WindowBuilder.h"

using namespace std;

WindowBuilder::WindowBuilder() : width(800), height(600), title("Default Window"), backgroundColor(RAYWHITE) {};

void WindowBuilder::SetFromJson(const json& config) {
    width = config.value("width", 800);
    height = config.value("height", 600);
    title = config.value("title", "Game Window").c_str();
}

void WindowBuilder::Build() const {
    InitWindow(width, height, title);
    SetTargetFPS(60);
}

void WindowBuilder::Close() {
   CloseWindow();
}