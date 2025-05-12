#pragma once
#include "../headers/WindowBuilder.h"
#include "../headers/Player.h"

class Game {
public:
    Game();
    void Run();
    void Update();
    void Draw();
    ~Game();

private:
    WindowBuilder window;
    Player player;
    const std::string windowConfig = "../configs/window.json";
};