#pragma once

 #include<iostream>
 #include<vector>
 #include<ctime>
 #include <cmath> // for sin() function

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
  
  /*class that acts as a game engine*/
  class Game{
    private:
       //variables
       //window
       sf::RenderWindow* window;
       sf::VideoMode videomode;
       sf::Event event;
       
      //game logic
      int points;
      float enemySpawnTimer;
      float enemySpawnTimerMax;
      int maxEnemies;
       //mouse positions
       sf::Vector2i mousepositions;
       sf::Vector2f mouseposview;

        std::vector<sf::RectangleShape> enemies;
       
       sf::RectangleShape enemy;   

    void initvariables();
    void initwindow(){
       this ->videomode.height =1080;
    this->videomode.width =1920;
    //this->get
     
    this ->window =new sf::RenderWindow(this ->videomode, "SFML works!",sf::Style::Titlebar | sf::Style::Close);
    this->window->setFramerateLimit(60);
    }

    public:

    Game(){
       this ->initvariables();
       this ->initwindow(); 
       this->initEnemies();
    }
    virtual ~Game(){
       delete this ->window;
    }
      //inheritance topic --
      
      //accessors
      //const bool running() const;
      void initEnemies(){
        this->enemy.setPosition(20.f,20.f);
         this->enemy.setSize(sf::Vector2f(100.f,100.f));
         this->enemy.setScale(sf::Vector2f(0.5f,0.5f));
         this->enemy.setFillColor(sf::Color::Cyan);
         /*this->enemy.setOutlineColor(sf::Color::Green);
         this->enemy.setOutlineThickness(2.f);*/
      };
      const bool running() const{ 
        return this ->window->isOpen();
      }
      void pollEvents(){

       //event polling
     while (this ->window->pollEvent(this ->event))
        {
            switch(this->event.type){
                case sf::Event::Closed:
                 this->window->close();
                 break;
                case sf::Event::KeyPressed:
                 if(this->event.key.code==sf::Keyboard::Enter)  //to check if space  key is ---can put any key 
                  this->window->close();
                  break;
 
            } 
               
        } 


      }
      
     void updateEnemies(){ 
      //updating the timer for enemy spawning
      if(this->enemies.size()<this->maxEnemies){
      if(this->enemySpawnTimer>=this->enemySpawnTimerMax)
          {
            //spawn the enemy and reset the timer
            this->spawnEnemy();
          this->enemySpawnTimer=0.f;}
          else
          this->enemySpawnTimer+=1.f;
     }
     
     //moves the enemies
     for(int i=0;i<this->enemies.size();i++)
     {
      bool deleted=false;
      this->enemies[i].move(0.f,5.f);

      //check if clicked upon
      if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
      { 
        if(this->enemies[i].getGlobalBounds().contains(this->mouseposview))
        {
          deleted=true;

          //gain points
          this->points+=10.f;
        }
      }
      //incase enemy goes past the bottom of screen
      if(this->enemies[i].getPosition().y>this->window->getSize().y)
      {
        deleted=true;
      }
      if(deleted)
      {
        this->enemies.erase(this->enemies.begin()+i);
      }
     }
     
     }
      void update(){
        this->pollEvents();
        this->updatemousepositions();
        this->updateEnemies();
        }
      
      void renderEnemies(){
        //rendering all the enemies
       for(auto &e : this->enemies)
       {
      this->window->draw(e);
     }
     
      }
      void render(){
        this ->window->clear();
        //draw objects
        
        //this->window->draw(this->enemy);
        
        this->renderEnemies();
        this->window->display();
      }
      void  updatemousepositions(){
        /* updates the mouse position */
        this->mousepositions=sf::Mouse::getPosition(*this->window);
        this->mouseposview = this->window->mapPixelToCoords(this->mousepositions);
      }
       void spawnEnemy(){
        /*spawns enemy by setting their color and position*/
       /*adds enemy to the vector*/
       this->enemy.setPosition(
       static_cast<float>(rand() % static_cast<int>(this->window->getSize().x - this->enemy.getSize().x)),
        //static_cast<float>(rand() % static_cast<int>(this->window->getSize().y - this->enemy.getSize().y))
       0.f
       );
       this->enemy.setFillColor(sf::Color::Green);
      this->enemies.push_back(this->enemy);
       }
      void run(){
        while(this->window->isOpen()){

 
      
        this->update();
        this->render();
        }
      }

    
  };