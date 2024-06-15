#pragma once

#include<iostream>
#include<ctime>
#include<cstdlib>
#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<vector>

class state{


    private:
        
        std::vector<sf::Texture> textures;
    
    public:

    state(); 
    virtual ~state();
   virtual  void update()=0;
   virtual    void render()=0;
};