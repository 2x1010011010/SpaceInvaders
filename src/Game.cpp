#include <iostream>
#include "WindowBuilder.h"
#include "Game.h"

using namespace std;

class Game {

    WindowBuilder window;

    Game::Game() {

        window.Build();
    }

    void Run() {

        while (!WindowShouldClose()) {
            Update();
            Draw();
        }

        window.Close();
    }

    void Update() {
    
    }

    void Draw() {
    
    }

    ~Game() {
    
    }
};

int main() {
   
    Game game;
    game.Run();

    return 0;
}