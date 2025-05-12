#pragma once
#include "../headers/WindowBuilder.h"
#include "../headers/player.h"


class Game{
	public:
		Game();
		void Run();
		void Update();
		void Draw();
		~Game();

	private:
		WindowBuilder window;
		Player player;
		const std::string windowConfig = "D:/C++ Projects/SpaceInvaders/configs/window.json";
};