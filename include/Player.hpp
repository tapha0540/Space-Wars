#pragma once
#include <SFML/Graphics.hpp>
class Player {
	public:
	
		Player(const std::string& textureImagePath);
		
		void drawOn(sf::RenderWindow& window);
		void handleInput();
	private:
	
		sf::Texture texture;
		sf::Sprite sprite;
		
		float speed;
		int lives;
		int score;
};
