#pragma once
#include "src\Position.h"
class Entity
{
public:
	Position position;
	Entity(Position position);
	Entity(float x, float y);
};

