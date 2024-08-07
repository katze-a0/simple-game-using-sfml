

#include "Button.h"
#include <iostream>

Button::Button(float x, float y, float width, float height, const std::string& buttonText, Font& font, unsigned int textSize) {
    shape.setPosition(x, y);
    shape.setSize(Vector2f(width, height));
    text.setFont(font);
    text.setString(buttonText);
    text.setCharacterSize(textSize);
    text.setFillColor(Color::White);
    FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
    text.setPosition(x + width / 2.0f, y + height / 2.0f);
}

bool Button::isMouseOver(Vector2f mousePos) {
    return shape.getGlobalBounds().contains(mousePos);
}

void Button::setFillColor(Color color) {
    shape.setFillColor(color);
}

void Button::setOutlineThickness(float thickness) {
    shape.setOutlineThickness(thickness);
}

void Button::setOutlineColor(Color color) {
    shape.setOutlineColor(color);
}

ButtonPress::ButtonPress() : clock() {}

void ButtonPress::handleEvent(const sf::Event& event, sf::RenderWindow& window) {
    if (event.type == sf::Event::MouseButtonPressed) {
        mousePosition = sf::Mouse::getPosition(window);
    }
}

sf::Vector2i ButtonPress::getMousePosition() {
    return mousePosition;
}

OutlinedButton::OutlinedButton(float x, float y, float width, float height, const std::string& buttonText, Font& font, unsigned int textSize, Color fillColor, float outlineThickness, Color outlineColor)
    : Button(x, y, width, height, buttonText, font, textSize), fillColor(fillColor), outlineThickness(outlineThickness), outlineColor(outlineColor) {
    shape.setFillColor(fillColor);
    shape.setOutlineThickness(outlineThickness);
    shape.setOutlineColor(outlineColor);
}

void OutlinedButton::setFillColor(Color color) {
    fillColor = color;
    shape.setFillColor(color);
}

void OutlinedButton::setOutlineThickness(float thickness) {
    outlineThickness = thickness;
    shape.setOutlineThickness(thickness);
}

void OutlinedButton::setOutlineColor(Color color) {
    outlineColor = color;
    shape.setOutlineColor(color);
}
