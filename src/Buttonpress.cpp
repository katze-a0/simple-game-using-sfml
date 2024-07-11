
#include "ButtonPress.h"
#include <iostream>

ButtonPress::ButtonPress() : clock() {}

void ButtonPress::handleEvent(const sf::Event& event, sf::RenderWindow& window) {
    if (event.type == sf::Event::MouseButtonPressed) {
        mousePosition = sf::Mouse::getPosition(window);
    }
}

sf::Vector2i ButtonPress::getMousePosition()  {
    return mousePosition;
}

void ButtonPress::printPosition() {
    if (clock.getElapsedTime().asSeconds() >= 2) {
        std::cout << "Mouse position: (" << mousePosition.x << ", " << mousePosition.y << ")" << std::endl;
        clock.restart();
    }
}