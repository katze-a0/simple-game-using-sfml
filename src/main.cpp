
/* no apple sprite on this code
#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"
#include "Buttonpress.h"
#include "Menu_to_Classic.h"
#include "Apple.h"

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
    
    // Remove other audio files if present
    // AudioEffect *audioEffect2=new AudioEffect("./assets/other_audio_file.wav");
    // audioEffect2->play();

    ImageLoader imageLoader("./assets/main_menu.jpg",window.getSize());

    sf::Clock clock;
    bool gifFinished = false; // Add a boolean flag to track GIF playback
    
    ButtonPress buttonpress;
    Menu_to_classic menu_to_classic(imageLoader);


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
        menu_to_classic.checkvalue(imageLoader, buttonpress, window, window.getSize());
        window.display();

    }
    

    return 0;
}*/



/*
//apple
    sf::Texture appleTex;
    sf::Sprite apple;
    appleTex.loadFromFile("apple.png");
    apple.setTexture(appleTex);
    apple.setScale(0.5f, 0.5f);
    apple.setOrigin(73.f, 80.f);
    std::vector<sf::Sprite> apples;
    apples.push_back(sf::Sprite(apple));
    int applecounter =60;
    int a = 10;*/
/*
#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"
#include "Buttonpress.h"
#include "Menu_to_Classic.h"
#include "Apple.h"

int main(int argc, char** argv) 
{
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    
    // Create a full screen window
    sf::RenderWindow window(desktopMode, "gifdemo", sf::Style::Fullscreen);
    window.setFramerateLimit(60); 
    
    AnimatedGIF gif("screen.gif");
    sf::Vector2i size = gif.getSize();
    sf::Sprite sprite;

    AudioEffect *audioEffect = new AudioEffect("./assets/fruit_ninja.wav");
    audioEffect->play();
    ImageLoader imageLoader("./assets/main_menu.jpg", window.getSize());

    sf::Clock clock;
    bool gifFinished = false; // Add a boolean flag to track GIF playback
    
    ButtonPress buttonpress;
    Menu_to_classic menu_to_classic(imageLoader);
   
    Apple apple(window);
    apple.setTexture("./assets/Red_apple.png");
    apple.getSprite().setPosition(window.getSize().x / 2, window.getSize().y / 2);
    
    float dt = 1.0f / 40.0f; // time step (1/60th of a second)
    
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
            buttonpress.handleEvent(event, window);
            buttonpress.printPosition();
            if(menu_to_classic.checkvalue(imageLoader, buttonpress, window, window.getSize())){
                apple.update(dt);
                window.draw(apple.getSprite());
            }
        }
        
        window.display();
    }
    
    delete audioEffect; //  delete dynamically allocated objects
    
    return 0;
}*/





/*
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"
#include "Buttonpress.h"
#include "Menu_to_Classic.h"
#include "Apple.h"

int main(int argc, char** argv) 
{
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    
    // Create a full screen window
    sf::RenderWindow window(desktopMode, "gifdemo", sf::Style::Fullscreen);
    window.setFramerateLimit(60); 
    
    AnimatedGIF gif("screen.gif");
    sf::Vector2i size = gif.getSize();
    sf::Sprite sprite;

    AudioEffect *audioEffect = new AudioEffect("./assets/fruit_ninja.wav");
    audioEffect->play();
    AudioEffect *gameStartAudio = new AudioEffect("./assets/Game-start.wav"); // create game start audio effect
    ImageLoader imageLoader("./assets/main_menu.jpg", window.getSize());
    ImageLoader backLoader("./assets/back.png", window.getSize());

    sf::Clock clock;
    bool gifFinished = false; 
    bool mainMenuDisplayed = false; 
    bool backDisplayed = false; 
    bool gameStarted = false; 

    ButtonPress buttonpress;
    Menu_to_classic menu_to_classic(imageLoader);

    Apple apple(window);
    apple.setTexture("./assets/Red_apple.png");
    apple.getSprite().setPosition(window.getSize().x / 2, window.getSize().y / 2);
    
    float dt = 1.0f / 45.0f; 

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

            sf::Time elapsed = clock.getElapsedTime(); 
            if (elapsed.asSeconds() > 6.0f) { 
                gifFinished = true; 
            }
        } else if (!mainMenuDisplayed) {
            window.clear(sf::Color::Black);
            imageLoader.draw(window);
            mainMenuDisplayed = true; 
        } else if (!backDisplayed) {
            window.clear(sf::Color::Black);
            backLoader.draw(window);
            backDisplayed = true; 
        } else {
            window.clear(sf::Color::Black);
            backLoader.draw(window);
            buttonpress.handleEvent(event, window);
            buttonpress.printPosition();
            menu_to_classic.draw(window);
            if (menu_to_classic.checkvalue(imageLoader, buttonpress, window, window.getSize())) {
                gameStarted = true; 
                audioEffect->stop(); // stop fruit ninja audio
                gameStartAudio->play(); // play the new audio// play game start audio
            }
            if (gameStarted) {
                apple.update(dt);
                window.draw(apple.getSprite());
            }
        }
        
        window.display();
    }
    
    delete audioEffect; 

    return 0;
}     //error makes sound */



#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"
#include "Buttonpress.h"
#include "Menu_to_Classic.h"
#include "Apple.h"

int main(int argc, char** argv) {
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    // Create a full screen window
    sf::RenderWindow window(desktopMode, "gifdemo", sf::Style::Fullscreen);
    window.setFramerateLimit(60);

    AnimatedGIF gif("screen.gif");
    sf::Vector2i size = gif.getSize();
    sf::Sprite sprite;

    AudioEffect *audioEffect = new AudioEffect("./assets/fruit_ninja.wav");
    audioEffect->play();
    ImageLoader imageLoader("./assets/main_menu.jpg", window.getSize()); // Assuming this is the background image
    
    sf::Clock clock;
    bool gifFinished = false; // Add a boolean flag to track GIF playback

    ButtonPress buttonpress;
    Menu_to_classic menu_to_classic(imageLoader);

    Apple apple(window);
    apple.setTexture("./assets/Red_apple.png");
    apple.getSprite().setPosition(window.getSize().x / 2, window.getSize().y / 2);

    float dt = 1.0f / 25.0f; // time step (1/60th of a second)

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
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
            // Draw the background image first
            imageLoader.draw(window);

            // Conditionally draw the apple on top of the background
            if (menu_to_classic.checkvalue(imageLoader, buttonpress, window, window.getSize())) {
              
               apple.update(dt);
                window.draw(apple.getSprite());
            }

            buttonpress.handleEvent(event, window);
            buttonpress.printPosition();
        }

        window.display();
    }

    delete audioEffect; // Delete dynamically allocated objects

    return 0;
}
/*
#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"
#include "Buttonpress.h"
#include "Menu_to_Classic.h"
#include "Apple.h"

int main(int argc, char** argv) 
{
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    
    // Create a full screen window
    sf::RenderWindow window(desktopMode, "gifdemo", sf::Style::Fullscreen);
    window.setFramerateLimit(60); 
    
    AnimatedGIF gif("screen.gif");
    sf::Vector2i size = gif.getSize();
    sf::Sprite sprite;

    AudioEffect *audioEffect = new AudioEffect("./assets/fruit_ninja.wav");
    audioEffect->play();
    ImageLoader imageLoader("./assets/main_menu.jpg", window.getSize());

    sf::Clock clock;
    bool gifFinished = false; // Add a boolean flag to track GIF playback
    bool menuLoaded = false; // Add a boolean flag to track menu loading
    
    ButtonPress buttonpress;
    Menu_to_classic menu_to_classic(imageLoader);
   
    Apple apple(window);
    apple.setTexture("./assets/Red_apple.png");
    apple.getSprite().setPosition(window.getSize().x / 2, window.getSize().y / 2);
    
    float dt = 1.0f / 40.0f; // time step (1/60th of a second)
    
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
        } else if (!menuLoaded) {
            window.clear(sf::Color::Black);
            imageLoader.draw(window);
            menuLoaded = true; // Set the flag to true
        } else {
            window.clear(sf::Color::Black);
            imageLoader.draw(window); // Draw the menu
            apple.update(dt); // Update the apple sprite
            window.draw(apple.getSprite());
        }
        
        window.display();
    }
    
    delete audioEffect; //  delete dynamically allocated objects
    
    return 0;
}*/