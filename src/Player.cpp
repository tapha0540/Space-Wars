#include "../include/Player.hpp"

Player::Player(const std::string& textureImagePath) {
	if(!texture.loadFromFile(textureImagePath) ) {
		throw std::runtime_error("impossible to load the image with the path " + textureImagePath);
	}
	sprite.setScale(0.25f, 0.25f);
	sprite.setPosition(400, 300);
	sprite.setTexture(texture);
	speed = 5.0f;
}
void Player::drawOn(sf::RenderWindow& window) {
	window.draw(sprite);
}
void Player::handleInput() {
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) 
		sprite.move(0, -speed);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) 
		sprite.move(0, speed);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) 
		sprite.move(-speed, 0);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) 
		sprite.move(speed, 0);
}
