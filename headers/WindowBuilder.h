#pragma once
#include <string>
#include <raylib.h>
#include "Serializer.cpp"
#include "../headers/Entity.h"

class WindowBuilder {
public:
    WindowBuilder();
    void SetFromJson(const json& config);
    void Build() const;
    void Close();
    int GetWidth() const;
    int GetHeight() const;
    Color GetBackgroundColor() const;

private:
    int width;
    int height;
    std::string titleStr;              
    Color backgroundColor;
};
