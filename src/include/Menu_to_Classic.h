
#ifndef MENU_TO_CLASSIC_H
#define MENU_TO_CLASSIC_H

#include "ImageLoader.h"
#include "ButtonPress.h"

class ButtonPress;
class ImageLoader;

class Menu_to_classic{
public:
   Menu_to_classic(ImageLoader& imageLoader); // Constructor
   void checkvalue(ImageLoader& imageLoader, ButtonPress& buttonPress,sf::RenderWindow& window,sf::Vector2u windowSize);

private: 
    int x_coordinate;
    int y_coordinate;
    ImageLoader& imageLoader_; // Reference to ImageLoader
   
    ButtonPress* buttonPress_;  // Pointer to FruitManager

    friend class ButtonPress; // Declare ButtonPress as a friend class
};

#endif



/*  dami idea!
game loop:
     if (leftKeyDown && velocity < maxVel) // max vel is something like 6
          velocity += acceleration; // something like 0.1
    sprite.Move( velocity, 0 );*/