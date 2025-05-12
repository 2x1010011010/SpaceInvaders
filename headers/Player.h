#pragma once
#include "../headers/Entity.h"
#include <string>

class Player : public Entity {
public:
    Player();
    ~Player();
    void SetPosition(Vector2 pos);
    void Draw();
    void Shoot();

private:
    Texture2D image;
    const std::string pathToImage = "D:/C++ Projects/SpaceInvaders/graphics/spaceship.png";
};
