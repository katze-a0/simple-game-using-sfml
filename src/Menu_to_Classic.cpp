
/*#include "Menu_to_Classic.h"
#include "ButtonPress.h"
#include "ImageLoader.h"

Menu_to_classic::Menu_to_classic(ImageLoader& imageLoader) : imageLoader_(imageLoader) {}

void Menu_to_classic::checkvalue(ImageLoader& imageLoader, ButtonPress& buttonPress,sf::RenderWindow& window,sf::Vector2u windowSize){
    x_coordinate = buttonPress.getMousePosition().x;
    y_coordinate = buttonPress.getMousePosition().y;

    if(x_coordinate >= 456 && x_coordinate <= 633 && y_coordinate >= 343 && y_coordinate <= 563){
        // Load back.png image using ImageLoader
        imageLoader_.texture.loadFromFile("./assets/back.png"); // Access private member of ImageLoader
        imageLoader_.sprite.setTexture(imageLoader_.texture);
        imageLoader_.sprite.setScale(windowSize.x / static_cast<float>(imageLoader_.texture.getSize().x), windowSize.y / static_cast<float>(imageLoader_.texture.getSize().y));
        imageLoader_.update(window);
        imageLoader_.draw(window);    }
}*/



#include "Menu_to_classic.h"
#include "AudioEffect.h"
#include "Buttonpress.h"

Menu_to_classic::Menu_to_classic(ImageLoader& imageLoader) : imageLoader_(imageLoader) {  
}
bool Menu_to_classic::checkvalue(ImageLoader& imageLoader, ButtonPress& buttonPress, sf::RenderWindow& window, sf::Vector2u windowSize) {
    x_coordinate = buttonPress.getMousePosition().x;
    y_coordinate = buttonPress.getMousePosition().y;

    if (x_coordinate >= 456 && x_coordinate <= 633 && y_coordinate >= 343 && y_coordinate <= 563) {
        // Load back.png image using ImageLoader
        imageLoader_.texture.loadFromFile("./assets/back.png");
        imageLoader_.sprite.setTexture(imageLoader_.texture);
        imageLoader_.sprite.setScale(windowSize.x / static_cast<float>(imageLoader_.texture.getSize().x), windowSize.y / static_cast<float>(imageLoader_.texture.getSize().y));
        imageLoader_.update(window);
        imageLoader_.draw(window);
        
    }
    return true;

}

