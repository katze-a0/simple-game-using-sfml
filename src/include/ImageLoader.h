#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <SFML/Graphics.hpp>

class Menu_to_classic;
class ImageLoader {
public:
    ImageLoader(const std::string& filePath, sf::Vector2u windowSize);
    ~ImageLoader();

    void update(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
     sf::Texture texture;
private:
    
    sf::Sprite sprite;
    sf::Vector2u windowSize; // Add this line
    friend class Menu_to_classic;
};

#endif // IMAGELOADER_H