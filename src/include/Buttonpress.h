#ifndef BUTTONPRESS_H
#define BUTTONPRESS_H

#include <SFML/Graphics.hpp>

class ButtonPress {
public:
    ButtonPress();
    void handleEvent(const sf::Event& event, sf::RenderWindow& window);
     sf::Vector2i getMousePosition() const; // Add a getter function
    void printPosition();

private:
    sf::Vector2i mousePosition;
    sf::Clock clock;
    friend class Menu_to_classic;
};

#endif // BUTTONPRESS_H