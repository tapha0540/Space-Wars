#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <fstream>
#include "../include/Background.hpp"
#include "../include/Player.hpp"
#include "../include/BadGuy.hpp"
#include "../include/Fireball.hpp"

class Game {
	public:
		sf::Vector2u windowSize;
		std::vector<std::string> errorsMessages;
		

		Game();
		
		void run();
	private:

		sf::RenderWindow window;
		
		Background background;
		Player player;
		std::vector<BadGuy> badGuys;
		std::vector<Fireball> fireballs;
		std::ofstream logFile;

		void processEvents();
		void update();
		void render();
		void logErrorsMessages();
};
