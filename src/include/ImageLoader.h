#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <SFML/Graphics.hpp>

class ImageLoader {
public:
    ImageLoader(const std::string& filePath, sf::Vector2u windowSize);
    ~ImageLoader();

    void update(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);

private:
    sf::Texture texture;
    sf::Sprite sprite;
    sf::Vector2u windowSize; // Add this line
};

#endif // IMAGELOADER_H