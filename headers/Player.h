#pragma once
#include "../headers/Entity.h"
#include <raylib.h>

class Player : public Entity
{
	public:
		Player();
		~Player();
		void SetPosition(Vector2 pos);
		void Draw();
		void Shoot();

	private:
		Texture2D image;
};