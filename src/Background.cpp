#include "../include/Background.hpp"
#include "../log/logError.cpp"

Background::Background(const std::string& backgroundImagePath, std::vector<std::string> errorsMessages) {
    sf::Image image;
    if (image.loadFromFile(backgroundImagePath) | !texture.loadFromImage(image)) {
        errorsMessages.push_back("src/Background.cpp:7 -> Failed to load image with path " + backgroundImagePath);
    };
}