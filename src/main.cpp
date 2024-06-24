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


#include <SFML/Graphics.hpp>
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
