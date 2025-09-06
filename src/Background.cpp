#include "../include/Background.hpp"

Background::Background(const std::string& backgroundImagePath, std::vector<std::string>& errorsMessages) {
    sf::Image backgroungImage;
    if (!backgroungImage.loadFromFile(backgroundImagePath) || !backgroundTexture.loadFromImage(backgroungImage)) {
        errorsMessages.push_back("src/Background.cpp:7 -> Failed to load image with path " + backgroundImagePath);
    };
    
    backgroundSprite.setTexture(backgroundTexture);
    backgroundTextureSize = backgroundTexture.getSize();
}
void Background::drawOn(sf::RenderWindow& window, sf::Vector2u& windowSize) {
    /**
     *  - set the scale of the background image to equal the size of the window.
     */
    backgroundSprite.setScale(
        float(windowSize.x) / backgroundTextureSize.x,
        float(windowSize.y) / backgroundTextureSize.y
    );
    window.draw(backgroundSprite);
}