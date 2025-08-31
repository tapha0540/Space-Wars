#pragma once
#include <SFML/Graphics.hpp>

class Fireball {
    public:
        Fireball(const std::string& textureImagePath, std::vector<std::string>& errorsMessages);
        void drawOn(sf::RenderWindow& window);
        // void handleCollision();
    private:
        sf::Sprite sprite;
        sf::Texture texture;
        float speed;
};