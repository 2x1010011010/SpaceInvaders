#pragma once
#include "raylib.h"

class WindowBuilder {
public:
    WindowBuilder();
    void Build() const;
    void Close();

private:
    int width;
    int height;
    const char* title;
    Color backgroundColor;
};