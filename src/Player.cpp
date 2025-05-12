#include "../headers/Player.h"
#include <iostream>
#include <raylib.h>

Player::Player() {
    image = LoadTexture(pathToImage);
    if (image.width == 0 || image.height == 0) {
        std::cerr << "Failed to load texture: " << pathToImage << std::endl;
    }
}

void Player::SetPosition(Vector2 pos) {
    position = pos;
}

void Player::Draw() {
    if (image.width == 0 || image.height == 0) {
        DrawText("Texture not loaded!", 10, 10, 20, RED);
        return;
    }

    DrawTextureV(image, position, WHITE);
}

void Player::Shoot() {}

Player::~Player() {
    if (image.width > 0 && image.height > 0) {
        UnloadTexture(image);
    }
}
