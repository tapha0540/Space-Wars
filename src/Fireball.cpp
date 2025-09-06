#include "../include/Fireball.hpp"

Fireball::Fireball(const std::string& FireballTextureImagePath, std::vector<std::string>& errorsMessages) {
    sf::Image image;
    if(!image.loadFromFile(FireballTextureImagePath) || !FireballTexture.loadFromImage(image)) {
        errorsMessages.push_back("src/Fireball.cpp:5 -> the image with path " + FireballTextureImagePath + " Did not load correctly");
    }
    FireballSprite.setTexture(FireballTexture);
    sf::Vector2u FireballTextureSize = FireballTexture.getSize();
    FireballSprite.setScale(
        50.0f / FireballTextureSize.x,
        50.0f / FireballTextureSize.y
    );
    FireballSpeed = 5.0f;
}
void Fireball::drawOn(sf::RenderWindow& window) {
    window.draw(FireballSprite);
}