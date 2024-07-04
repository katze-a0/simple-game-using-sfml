

#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"
#include "Buttonpress.h"

int main(int argc, char** argv) 
{

    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    
     // Create a full screen window
    sf::RenderWindow window(desktopMode, "gifdemo", sf::Style::Fullscreen);
    window.setFramerateLimit(60); 
    
    AnimatedGIF gif("screen.gif");
    sf::Vector2i size = gif.getSize();
    sf::Sprite sprite;

    AudioEffect *audioEffect=new AudioEffect("./assets/fruit_ninja.wav");
    audioEffect->play();
    ImageLoader imageLoader("./assets/main_menu.jpg",window.getSize());

    sf::Clock clock;
    bool gifFinished = false; // Add a boolean flag to track GIF playback
    
    ButtonPress buttonpress;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
           if (!gifFinished) {
            gif.update(sprite, window.getSize());
            window.clear(sf::Color::Black);
            window.draw(sprite);

            sf::Time elapsed = clock.getElapsedTime(); // Get the elapsed time
            if (elapsed.asSeconds() > 6.0f) { // Check if GIF has finished playing 
                gifFinished = true; // Set the flag to true
            }
        } else {
            window.clear(sf::Color::Black);
            imageLoader.draw(window);
        }
        buttonpress.handleEvent(event,window);
        buttonpress.printPosition();

        window.display();

    }
    

    return 0;
}

