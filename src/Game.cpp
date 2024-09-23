#include <iostream>
#include "../headers/Game.h"

using namespace std;

Game::Game() {
    window.SetFromJson(Serializer::LoadFromJson(windowConfig));
    window.Build();
}

void Game::Run() {

    while (!WindowShouldClose()) {
        Update();
        window.Draw();
    }

    window.Close();
}

void Game::Update() {

}

Game::~Game() {

}