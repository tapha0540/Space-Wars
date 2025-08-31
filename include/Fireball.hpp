#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Fireball {
    public:
        Fireball(const std::string& FireballTextureImagePath, std::vector<std::string>& errorsMessages);
        void drawOn(sf::RenderWindow& window);
        // void handleCollision();
    private:
        sf::Sprite FireballSprite;
        sf::Texture FireballTexture;
        float FireballSpeed;
};