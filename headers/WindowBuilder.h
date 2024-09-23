#pragma once
#include <string>
#include <raylib.h>
#include "Serializer.cpp"

class WindowBuilder {
public:
    WindowBuilder();
    void SetFromJson(const json& config);
    void Build() const;
    void Draw();
    void Close();

private:
    int width;
    int height;
    const char* title;
    Color backgroundColor;
};