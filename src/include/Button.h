
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Button {
public:
    RectangleShape shape;
    Text text;

    Button(float x, float y, float width, float height, const std::string& buttonText, Font& font, unsigned int textSize);

    bool isMouseOver(Vector2f mousePos);
    
    // Declare virtual functions
    virtual void setFillColor(Color color);
    virtual void setOutlineThickness(float thickness);
    virtual void setOutlineColor(Color color);
    
    // Virtual destructor
    virtual ~Button() = default;
};

class ButtonPress {
public:
    ButtonPress();
    void handleEvent(const sf::Event& event, sf::RenderWindow& window);
    sf::Vector2i getMousePosition();
    void printPosition();
    sf::Vector2i mousePosition;

private:
    sf::Clock clock;
};

// Derived outlined class -base class Button
class OutlinedButton : public Button {
public:
    OutlinedButton(float x, float y, float width, float height, const std::string& buttonText, Font& font, unsigned int textSize, Color fillColor, float outlineThickness, Color outlineColor);
    
    void setFillColor(Color color) ;
    void setOutlineThickness(float thickness) ;
    void setOutlineColor(Color color) ;

private:
    float outlineThickness;
    Color outlineColor;
    Color fillColor;
};

