
#ifndef MENU_TO_CLASSIC_H
#define MENU_TO_CLASSIC_H

#include <SFML/Graphics.hpp>
#include "Button.h"
#include "AudioEffect.h"


class Menu_to_classic {
public:
    Menu_to_classic(sf::Vector2u windowSize);
    bool checkvalue(ButtonPress& buttonPress, sf::RenderWindow& window, sf::Vector2u windowSize);
    void draw(sf::RenderWindow& window);

private:
    sf::Texture texture;
    sf::Sprite sprite;
    int x_coordinate;
    int y_coordinate;
    AudioEffect* sound_;
};

#endif // MENU_TO_CLASSIC_H