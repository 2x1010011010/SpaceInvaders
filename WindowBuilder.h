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
    void SetWidth(int w);
    void SetHeight(int h);
    void SetTitle(const char* t);
    void SetBackgroundColor(Color color);
    void Build() const;
    void Run() const;
};