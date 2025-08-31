#pragma once
#include <SFML/Graphics.hpp>
class Player {
	public:
	
		Player(const std::string& textureImagePath, std::vector<std::string>& errorsMessages);
		
		void drawOn(sf::RenderWindow& window);
		void handleInput(sf::RenderWindow& window);
	private:
	
		sf::Texture texture;
		sf::Sprite sprite;
		
		float speed;
		int lives;
		int score;
};
