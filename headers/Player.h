#pragma once
#include "../headers/Entity.h"

class Player : public Entity
{
	public:
		Player(Position pos);
		~Player();
		void Draw();
		void Shoot();
	private:

};