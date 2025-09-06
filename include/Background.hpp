#pragma once
#include <SFML/Graphics.hpp>


class Background {
    public:
        Background(const std::string& backgroundImagePath, std::vector<std::string>& errorsMessages);
        void drawOn(sf::RenderWindow& window, sf::Vector2u& windowSize);
    private:
        sf::Sprite backgroundSprite;
        sf::Texture backgroundTexture;
    
        sf::Vector2u backgroundTextureSize;
};