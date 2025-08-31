#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Player {
	public:

		Player(const std::string& textureImagePath, std::vector<std::string>& errorsMessages);
		
		void drawOn(sf::RenderWindow& window);
		void handleInput( sf::Vector2u& windowSize );
	private:
	
		sf::Texture texture;
		sf::Sprite sprite;
		
		float speed;
		int lives;
		int score;
};
