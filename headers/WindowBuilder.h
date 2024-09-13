#pragma once
#include "raylib.h"
#include "lib/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

class WindowBuilder {
public:
    WindowBuilder();
    void SetFromJson(const json& config);
    void Build() const;
    void Close();

private:
    int width;
    int height;
    const char* title;
    Color backgroundColor;
};