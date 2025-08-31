#include "../include/BadGuy.hpp"

BadGuy::BadGuy(const std::string& badguyImagePath, std::vector<std::string>& errorsMessages) {
	sf::Image image;
	if(!image.loadFromFile(badguyImagePath) | !texture.loadFromFile(badguyImagePath) ) {
		errorsMessages.push_back("impossible to load the image with the path " + badguyImagePath);
	}
	sprite.setScale(0.25f, 0.25f);
	sprite.setPosition(400, 300);
	sprite.setTexture(texture);
	speed = 5.0f;
}

void BadGuy::drawOn(sf::RenderWindow& window) {
	window.draw(sprite);
}
void BadGuy::handleInput() {
	
}
