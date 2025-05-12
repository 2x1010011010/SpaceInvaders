#pragma once
#include <raylib.h>

class Entity {
public:
    Vector2 position;
    Entity();
    Entity(Vector2 position);
    virtual ~Entity();
    void Move(Vector2 position);
    void Move(float x, float y);
};