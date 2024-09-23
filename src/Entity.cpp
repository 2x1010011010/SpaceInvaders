#include "../headers/Entity.h"

Entity::Entity() : position(0, 0) {};

Entity::Entity(Position pos) : position(pos) {};

Entity::Entity(float x, float y) : position(x, y) {};