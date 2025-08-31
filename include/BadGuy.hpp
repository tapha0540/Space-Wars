#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class BadGuy {
	public:
		BadGuy(const std::string& badguyImagePath, std::vector<std::string>& errorsMessages);
		
		void drawOn(sf::RenderWindow& window);
		void handleInput();
	private:
		sf::Texture texture;
		sf::Sprite sprite;
		
		float speed;
		int lives;
};
