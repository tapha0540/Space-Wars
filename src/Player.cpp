#include "../include/Player.hpp"


Player::Player(const std::string& textureImagePath, std::vector<std::string>& errorsMessages) {
	sf::Image image;
	if(!image.loadFromFile(textureImagePath) || !texture.loadFromImage(image) ) {
		errorsMessages.push_back("src/Player.cpp:8 -> Impossible to load the image with path" + textureImagePath);
	}
	sprite.setScale(0.25f, 0.25f);
	sprite.setPosition(400, 300);
	sprite.setTexture(texture);
	speed = 5.0f;
}
void Player::drawOn(sf::RenderWindow& window) {
	window.draw(sprite);
}
void Player::handleInput( sf::Vector2u& windowSize ) {
	float dx = 0, dy = 0;

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) 
		dy = -speed;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) 
		dy = speed;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) 
		dx = -speed;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) 
		dx = speed;
	sf::Vector2f newPos = sprite.getPosition() + sf::Vector2f(dx, dy);
	sf::FloatRect bounds = sprite.getGlobalBounds();
	if(newPos.x < 0) newPos.x = 0;
	if(newPos.x + bounds.width > windowSize.x) newPos.x = windowSize.x - bounds.width;

	if(newPos.y < 0) newPos.y = 0;
	if(newPos.y + bounds.height > windowSize.y) newPos.y = windowSize.y - bounds.height;
	sprite.setPosition(newPos);
}
