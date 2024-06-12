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

#include<iostream>
#include "Game.h"
//using pre compiled header files(PCH)


using namespace std;
int main()
{   
   //init game engine
   Game game;
      while (game.running())
    {
        game.update();
        game.render();
       
    }
    
    return 0;
}