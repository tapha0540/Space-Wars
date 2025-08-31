#include <SFML/Graphics.hpp>

class Background {
    public:
        Background(const std::string& backgroundImagePath, std::vector<std::string> errorsMessages);
        void drawOn(sf::RenderWindow& window);
    private:
        sf::Sprite sprite;
        sf::Texture texture;
};