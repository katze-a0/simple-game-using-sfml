#include "Menu_to_classic.h"
#include <iostream>

Menu_to_classic::Menu_to_classic(sf::Vector2u windowSize) {
    if (!texture.loadFromFile("./assets/main_menu.jpg")) {
        std::cerr << "Failed to load image: ./assets/main_menu.jpg" << std::endl;
        exit(1);
    }
    sprite.setTexture(texture);
    sprite.setScale(windowSize.x / static_cast<float>(texture.getSize().x), windowSize.y / static_cast<float>(texture.getSize().y));
}

bool Menu_to_classic::checkvalue(ButtonPress& buttonPress, sf::RenderWindow& window, sf::Vector2u windowSize) {
    x_coordinate = buttonPress.getMousePosition().x;
    y_coordinate = buttonPress.getMousePosition().y;

    if (x_coordinate >= 456 && x_coordinate <= 633 && y_coordinate >= 343 && y_coordinate <= 563) {
        std::cout << "x: " << x_coordinate << " y: " << y_coordinate << std::endl;
        // Update to the next screen or state
        return true;
    }
    return false;
}

void Menu_to_classic::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}


