#pragma once
#include "../headers/WindowBuilder.h"

class Game{
private:
	WindowBuilder window;
	const std::string windowConfig = "D:/C++ Projects/SpaceInvaders/configs/window.json";
public:
	Game();
	void Run();
	void Update();
	void Draw();
	~Game();
};