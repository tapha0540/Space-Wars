#include "../include/Background.hpp"

Background::Background(const std::string& backgroundImagePath, std::vector<std::string>& errorsMessages) {
    sf::Image backgroungImage;
    if (!backgroungImage.loadFromFile(backgroundImagePath) | !backgroundTexture.loadFromImage(backgroungImage)) {
        errorsMessages.push_back("src/Background.cpp:7 -> Failed to load image with path " + backgroundImagePath);
    };
    
    backgroundSprite.setPosition(100,100);
    backgroundSprite.setTexture(backgroundTexture);
}
void Background::drawOn(sf::RenderWindow& window) {
    sf::Vector2u windowSize = window.getSize();
    sf::Vector2u backgroundTextureSize = backgroundTexture.getSize();
    backgroundSprite.setScale(
        float(windowSize.x) / backgroundTextureSize.x,
        float(windowSize.y) / backgroundTextureSize.y
    );
}