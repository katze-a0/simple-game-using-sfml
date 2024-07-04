
#include "Menu_to_Classic.h"
#include "ButtonPress.h"
#include "ImageLoader.h"

void Menu_to_classic::checkvalue(ImageLoader& imageLoader, ButtonPress& buttonPress){
    x_coordinate = buttonPress.getMousePosition().x;
    y_coordinate = buttonPress.getMousePosition().y;

    if(x_coordinate >= 456&& x_coordinate <= 633 && y_coordinate >= 343 && y_coordinate <= 563){
        // Load back.png image using ImageLoader
       // imageLoader.loadFromFile("./assets/back.png");
        // Play different sound using ImageLoader
       // imageLoader.playSound("back_sound.wav");
    }
}