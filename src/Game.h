#pragma once

 #include "state.h"
  
  /*class that acts as a game engine*/
  class Game{
    private:
       //variables
       //window
       sf::RenderWindow* window;
       sf::VideoMode videomode;
       sf::Event event;
       sf::Clock dtclock;
       float dt;
       sf::RectangleShape enemy;   

    void initvariables(){
      this ->window =nullptr;
    }
    void initwindow(){
       this ->videomode.height =600;
    this->videomode.width =800;
    //this->get
     
    this ->window =new sf::RenderWindow(this ->videomode, "SFML works!",sf::Style::Titlebar | sf::Style::Close);
    this->window->setFramerateLimit(144);
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
         this->enemy.setOutlineColor(sf::Color::Green);
         this->enemy.setOutlineThickness(2.f);
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
                 if(this->event.key.code==sf::Keyboard::Space)  //to check if space  key is ---can put any key 
                  this->window->close();
                  break;
 
            } 
               
        } 


      }
      void updateDt(){
        /*updates time taken to render*/
        this->dt= this->dtclock.getElapsedTime().asSeconds();

        system("cls");
        std::cout<<this->dt<<"\n";
      }

      void update(){
        this->pollEvents();
        //update mouse positions
        //relative to screen
        //std::cout<<"Mouse position : "<<sf::Mouse::getPosition().x<<" "<<sf::Mouse::getPosition().y<<"\n";
        //relative to window
        std::cout<<" Mouse position : "<<
        sf::Mouse::getPosition(*this->window).x<<" "<<
        sf::Mouse::getPosition(*this->window).y<<"\n";
      
        }

      void render(){
        this ->window->clear();
        //draw objects
        
        this->window->draw(this->enemy);
        this->window->display();

      }

      void run(){
        while(this->window->isOpen()){


        this->updateDt();
        this->update();
        this->render();
        }
      }

    
  };