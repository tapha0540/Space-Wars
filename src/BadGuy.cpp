#include "../include/BadGuy.hpp"

BadGuy::BadGuy(const std::string& textureImagePath, std::vector<std::string>& errorsMessages) {
	if(!texture.loadFromFile(textureImagePath) ) {
		throw std::runtime_error("impossible to load the image with the path " + textureImagePath);
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
