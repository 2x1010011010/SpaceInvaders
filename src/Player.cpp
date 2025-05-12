#include "../headers/Player.h"

Player::Player(Vector2 pos) {
	position = pos;
	image = LoadTexture("graphics/spaceship.png");
}

void Player::Draw() {
	DrawTextureV(image, position, WHITE);
}

void Player::Shoot() {

}

Player::~Player() {
	UnloadTexture(image);
}