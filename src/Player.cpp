#include "../headers/Player.h"


Player::Player() {
    //std::cout << "Loading player texture from: " << pathToImage << std::endl;
    //image = LoadTexture(pathToImage.c_str());

   // if (image.id == 0) {
   //     std::cerr << "ERROR: Failed to load texture!" << std::endl;
   // }
}

void Player::SetPosition(Vector2 pos) {
    //position = pos;
}

void Player::Draw() {
    //if (image.width == 0 || image.height == 0) {
    //    DrawText("Texture not loaded!", 10, 10, 20, RED);
    //    return;
    //}

    //DrawTextureV(image, position, WHITE);
}

void Player::Shoot() {}

Player::~Player() {
   // if (image.width > 0 && image.height > 0) {
    //    UnloadTexture(image);
    //}
}
