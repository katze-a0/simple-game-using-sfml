
#include "Apple.h"

Apple::Apple(sf::RenderWindow& window)
{
    sprite.setScale(0.1, 0.1); // make the apple smaller
    sf::Vector2u windowSize = window.getSize();
    sprite.setPosition(windowSize.x / 2, windowSize.y - sprite.getGlobalBounds().height);
    //sprite.setPosition(400, 600); // start at the bottom of the screen
    vx = 5; // initial horizontal velocity
    vy = -50; // initial vertical velocity
    ax = 0.1; // horizontal acceleration
    ay = 0.5; // vertical acceleration (gravity)
}

void Apple::setTexture(const std::string& filename)
{
    texture.loadFromFile(filename);
    sprite.setTexture(texture);
}

sf::Sprite Apple::getSprite()
{
    return sprite;
}

void Apple::update(float dt)
{
    // Update velocity using acceleration
    vx += ax * dt;
    vy += ay * dt;

    // Update position using velocity
    sprite.move(vx * dt, vy * dt);

    // Check for collision with the top of the screen
    if (sprite.getPosition().y < 0)
    {
        vy = -vy; // bounce back
    }

    // Check for collision with the sides of the screen
    if (sprite.getPosition().x < 0 || sprite.getPosition().x > 800)
    {
        vx = -vx; // bounce back
    }
}