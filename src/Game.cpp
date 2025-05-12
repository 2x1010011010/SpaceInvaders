#include <iostream>
#include "../headers/Game.h"

using namespace std;

Game::Game() {
    json config = Serializer::LoadFromJson(windowConfig);
    window.SetFromJson(config);
    window.Build();
    Vector2 pos = { config.value("playerStartPosX", 100), config.value("playerStartPosY", 100) };
    player.SetPosition(pos);
}

void Game::Run() {

    while (!WindowShouldClose()) {
        Update();
        window.Draw();
        player.Draw();
    }

    window.Close();
}

void Game::Update() {

}

void Game::Draw() {

}

Game::~Game() {

}