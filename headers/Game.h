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
		const std::string windowConfig = "../configs/window.json";
};