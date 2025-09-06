#pragma once
#include <fstream>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "../include/BadGuy.hpp"
#include "../include/Background.hpp"
#include "../include/Fireball.hpp"
#include "../include/Player.hpp"

class Game {
	public:

		sf::Vector2u windowSize;
		std::vector<std::string> errorsMessages;
		
		Game();
		
		void run();
	private:

		sf::RenderWindow window;
		Background background;
	
		sf::Clock clock;
		std::ofstream logFile;
		Player player;
		std::vector<BadGuy> badGuys;
		std::vector<Fireball> fireballs;


		void processEvents();
		void update();
		void render();
		void logErrorsMessages();
};
