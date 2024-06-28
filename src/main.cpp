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
#include "Game.h"

int main()
{
    // Create the SFML window in fullscreen mode
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

    // Initialize game engine
    Game game;

    // Main loop
    while (window.isOpen())
    {
        // Event handling
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

        // Update game logic
        game.update();

        // Clear the window
        window.clear();

        // Render game
        game.render();

        // Display content
        window.display();
    }

    return 0;
}
*/

/*#include <SFML/Graphics.hpp>

int main() {
    // Create the SFML window
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Fruit Ninja Replica", sf::Style::Fullscreen);

    // Main game loop
    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();
        }

        // Clear the window with a brownish color
        window.clear(sf::Color(161, 102, 47)); // RGB values for a brownish color

        // Draw game objects and UI elements here

        // Display what has been drawn
        window.display();
    }

    return 0;
}
*/

#include <SFML/Graphics.hpp>
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
}
