#pragma once
#include "../headers/Entity.h"

class Player : public Entity
{
public:
	Position position;
	Player(Position pos);
	~Player();
};