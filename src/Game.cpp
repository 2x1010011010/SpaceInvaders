#include <iostream>
#include "../headers/WindowBuilder.h"
#include "../headers/Game.h"

using namespace std;

WindowBuilder window;

Game::Game() {
    
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