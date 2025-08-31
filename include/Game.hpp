#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "../include/Player.hpp"
#include "../include/BadGuy.hpp"
#include "../include/Fireball.hpp"

class Game {
	public:
		Game();
		void run();
		std::vector<std::string> errorsMessages;
	private:
		void processEvents();
		void update();
		void render();
		
		sf::RenderWindow window;
		Player player;
		std::vector<BadGuy> badGuys;
		std::vector<Fireball> fireballs;
};
