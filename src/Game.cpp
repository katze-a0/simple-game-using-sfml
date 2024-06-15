#include "Game.h"
//private functions
void Game::initvariables(){

}

void Game::initwindow(){
   
}
 void Game::initEnemies(){ };
//contructors/destructors
Game::Game(){
 /*this ->initvariables();
 this ->initwindow(); */
}

Game::~Game(){

 //delete this ->window;
}
            
void Game::pollEvents(){

   //event polling
     /*while (this ->window->pollEvent(this ->event))
        {
            switch(this->event.type){
                case sf::Event::Closed:
                 this->window->close();
                 break;
                case sf::Event::KeyPressed:
                 if(this->event.key.code==sf::Keyboard::Space)  //to check if space  key is ---can put any key 
                  this->window->close();
                  break;
 
            }
               
        } */
}
void Game::update(){

   //this->pollEvents();
}
void Game::render(){}

/*this ->window->clear(sf::Color(255,200,200,255));
//draw objects*/

void Game::updateDt()
{
}
