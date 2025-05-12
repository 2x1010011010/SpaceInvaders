#include <iostream>
#include "../headers/Game.h"

Game::Game() {
    try {
        json config = Serializer::LoadFromJson(windowConfig);
        window.SetFromJson(config);
        window.Build();

        //Vector2 pos = { config.value("playerStartPosX", 100.0f), config.value("playerStartPosY", 100.0f) };
        //player.SetPosition(pos);
    }
    catch (const std::exception& e) {
        std::cerr << "Error loading config: " << e.what() << std::endl;
    }
}

void Game::Run() {
    while (!WindowShouldClose()) {
        Update();
        Draw();
    }

    window.Close();
}

void Game::Update() {
    
}

void Game::Draw() {
    window.Draw();
    //player.Draw();
}

Game::~Game() {}
