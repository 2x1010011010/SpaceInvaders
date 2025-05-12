#include "../headers/Player.h"

Player::Player() {
	image = LoadTexture(pathToImage);
}

void Player::SetPosition(Vector2 pos) {
	position = pos;
}

void Player::Draw() {
	DrawTextureV(image, position, WHITE);
}

void Player::Shoot() {

}

Player::~Player() {
	UnloadTexture(image);
}