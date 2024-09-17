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
        Draw();
    }

    window.Close();
}

void Game::Update() {

}

void Game::Draw() {

}

Game::~Game() {

}