
#ifndef APPLE_H
#define APPLE_H

#include <SFML/Graphics.hpp>

class Apple
{
public:
    Apple(sf::RenderWindow& window);
    void setTexture(const std::string& filename);
    sf::Sprite getSprite();
    void update(float dt);

private:
    sf::Texture texture;
    sf::Sprite sprite;
    float vx;
    float vy;
    float ax;
    float ay;
};

#endif // APPLE_H