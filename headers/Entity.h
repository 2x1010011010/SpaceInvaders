#pragma once
#include "headers/Position.h"
class Entity
{
public:
	Position position;
	Entity(Position position);
	Entity(float x, float y);
};

