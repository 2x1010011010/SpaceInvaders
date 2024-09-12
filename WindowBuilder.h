#pragma once
#include "raylib.h"

class WindowBuilder {
private:
    int width;
    int height;
    const char* title;
    Color backgroundColor;

public:
    
    WindowBuilder();
    WindowBuilder SetWidth(int w);
    WindowBuilder SetHeight(int h);
    WindowBuilder SetTitle(const char* t);
    WindowBuilder SetBackgroundColor(Color color);
    void Build() const;
    void Run() const;
};