#include "WindowBuilder.h"

using namespace std;

class WindowBuilder{
private:
    int width;
    int height;
    std::string title;
    Color backgroundColor;

public:
    WindowBuilder() : width(800), height(600), title("Default window"), backgroundColor(RAYWHITE) {}

    WindowBuilder& setWidth(int w) {
        width = w;
        return *this;
    }

    WindowBuilder& setHeight(int h) {
        height = h;
        return *this;
    }

    WindowBuilder& setTitle(std::string t) {
        title = t;
        return *this;
    }

    WindowBuilder& setBackgroundColor(Color color) {
        backgroundColor = color;
        return *this;
    }

    void build() const {
        InitWindow(width, height, title);
        SetTargetFPS(60);
    }

    void run() const {
        while (!WindowShouldClose()) {
            ClearBackground(backgroundColor);

        }

        CloseWindow();
    }
};
