#pragma once
#include "../headers/Entity.h"
#include <raylib.h>

class Player : public Entity
{
	public:
		Player(Vector2 pos);
		~Player();
		void Draw();
		void Shoot();

	private:
		Texture2D image;
};