/*#include<iostream>

#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

using namespace std;

int main()
{    cout<<"Hello from SFMl!";
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!",sf::Style::Titlebar | sf::Style::Close);
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Yellow);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}*/

/*#include<iostream>

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

using namespace std;

int main(){
    cout<<"Hello from SFMl!";
    system("pause");
    return 0;
}*/

/*#include<iostream>
#include "Game.h"


using namespace std;
int main()
{   

    //initialize random number
    std::srand(static_cast<unsigned>(time(NULL)));
   //init game engine
   Game game;
      while (game.running())
    {
        game.update();
        game.render();
       
    }

     return 0;
}*/

/*#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    
    //Create the SFML window in fullscreen mode
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML Example", sf::Style::Fullscreen);

    // Load sound buffer from file
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("./assets/output.wav")) {
        std::cout << "Failed to load sound effect!" << std::endl;
        return 1; // Exit the program if sound loading fails
    }

    // Create the sound and set its buffer
    sf::Sound sound;
    sound.setBuffer(buffer);

    // Main loop
    while (window.isOpen())
    {
        
        //Event handling
        sf::Event event;
        while (window.pollEvent(event))
       {
            
           switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Enter)
                    {
                        sound.play();
                    }
                    break;
                default:
                    break;
            }
        }

        window.clear();
             
        //initialize random number
        std::srand(static_cast<unsigned>(time(NULL)));
        //init game engine
        Game game;
        while (game.running())
      {
        game.update();
        game.render();
       
      }
    
       
        window.display();
        
    }
     return 0;
    }

   

/*#include<iostream>
#include "Game.h"


using namespace std;
int main()
{   

    //initialize random number
    std::srand(static_cast<unsigned>(time(NULL)));
   //init game engine
   Game game;
      while (game.running())
    {
        game.update();
        game.render();
       
    }
    
    return 0;
}*/


/*#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

int main() {
    // Load the loading screen image
    std::cout << "test 3" << std::endl;
    sf::Texture loadingTexture;
    if (!loadingTexture.loadFromFile("./assets/loading_image.png")) {
        std::cerr << "Failed to load loading_image.png" << std::endl;
        return 1;
    }

    // Load sound buffer from file
    
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("./assets/output.wav")) {
        std::cout << "Failed to load sound effect!" << std::endl;
        return 1; // Exit the program if sound loading fails
    }

    // Create the sound and set its buffer
    sf::Sound sound;
    sound.setBuffer(buffer);

    // Create the loading screen sprite
    sf::Sprite loadingSprite(loadingTexture);

    // Create the SFML window with default settings
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Fruit Ninja Game", sf::Style::Fullscreen);

    // Calculate scale factor to fit the image to the window size
    float scaleX = static_cast<float>(window.getSize().x) / loadingTexture.getSize().x;
    float scaleY = static_cast<float>(window.getSize().y) / loadingTexture.getSize().y;
    loadingSprite.setScale(scaleX, scaleY);

    // Variable to control whether to show loading screen or main game loop
    bool showLoadingScreen = true;

    // Main loop
    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close(); // Close the window when the user clicks the close button
            else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape)
                    showLoadingScreen = false; // Stop showing loading screen when Escape is pressed
                else if (event.key.code == sf::Keyboard::Enter)
                    sound.play(); // Play sound when Enter is pressed
            }
        }

        if (showLoadingScreen) {
            // Clear the window
            window.clear();

            // Draw the loading sprite
            window.draw(loadingSprite);

            // Display what has been drawn
            window.display();

            // Simulate loading process (replace with actual loading code)
            sf::sleep(sf::seconds(1)); // Example: Simulate loading for 1 second
        } else {
            // Clear the window
            window.clear();

            // Draw game objects and UI elements here

            // Display what has been drawn
            window.display();
        }
    }

    return 0;
}*/


/*#include <SFML/Graphics.hpp>
#include "AnimatedSprite.h"
#include "GifLoader.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Animated Sprite");

    // sf::Texture texture;
    // texture.loadFromFile("./assets/loading.gif"); // Load your animation texture here

    // sf::Vector2u imageCount(4, 1); // 4 images in a row, 1 row
    // float switchTime = 0.2f; // Switch images every 0.2 seconds

    // AnimatedSprite animatedSprite(texture, imageCount, switchTime);
    // animatedSprite.setPosition(400, 300); // Set the sprite's position
    // animatedSprite.setScale(2, 2); // Set the sprite's scale

    // sf::Clock clock;
    // float deltaTime = 0.f;

    GifLoader *gif = new GifLoader("./assets/loading.gif", Vector2d{100,100}, Vector2d{200,200});

    

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // deltaTime = clock.restart().asSeconds();
        // animatedSprite.update(deltaTime);

        window.clear();
        // animatedSprite.draw(window);
        gif->draw(window);
        window.display();
    }

    return 0;
}*/

#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "ImageLoader.h"

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
            if (elapsed.asSeconds() > 6.0f) { // Check if GIF has finished playing (assuming 10 seconds)
                gifFinished = true; // Set the flag to true
            }
        } else {
            window.clear(sf::Color::Black);
            imageLoader.draw(window);
        }

        window.display();

    }
    

    return 0;
}