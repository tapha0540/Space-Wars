#pragma once
#include <SFML/Graphics.hpp>


class Background {
    public:
        Background(const std::string& backgroundImagePath, std::vector<std::string>& errorsMessages);
        void drawOn(sf::RenderWindow& window);
    private:
        sf::Sprite backgroundSprite;
        sf::Texture backgroundTexture;
};