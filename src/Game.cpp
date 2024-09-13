#include <iostream>
#include "WindowBuilder.h"
#include "Game.h"

using namespace std;

class Game {

    WindowBuilder window;

    Game::Game() {

        window.SetWidth(1024)
            .SetHeight(768)
            .SetTitle("Space Invadors C++")
            .SetBackgroundColor(BLACK)
            .Build();
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