#include <iostream>
#include "../headers/Game.h"

Game::Game() {
    json config = Serializer::LoadFromJson(windowConfig);
    window.SetFromJson(config);
    window.Build();

    Vector2 pos = { config.value("playerStartPosX", 100.0f), config.value("playerStartPosY", 100.0f) };
    player.SetPosition(pos);
}

void Game::Run() {
    while (!WindowShouldClose()) {
        Update();

        BeginDrawing();
        ClearBackground(window.GetBackgroundColor());
        Draw();
        EndDrawing();
    }

    window.Close();
}

void Game::Update() {
    // Логика игры
}

void Game::Draw() {
    player.Draw();
}

Game::~Game() {}
