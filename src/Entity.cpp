#include "../headers/Entity.h"

Entity::Entity() : position{0, 0} {};

Entity::Entity(Vector2 pos) : position(pos) {};

void Entity::Move(Vector2 pos) {};

void Entity::Move(float x, float y) {}

Entity::~Entity() {};