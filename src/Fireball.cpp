#include "../include/Fireball.hpp"
#include "../log/logError.cpp"
Fireball::Fireball(const std::string& textureImagePath, std::vector<std::string>& errorsMessages) {
    sf::Image image;
    if(!image.loadFromFile(textureImagePath) | !texture.loadFromImage(image)) {
        errorsMessages.push_back("src/Fireball.cpp:5 -> the image with path " + textureImagePath + "Did not load correctly");
    }
}