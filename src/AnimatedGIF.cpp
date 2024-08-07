#include "AnimatedGIF.h"
//#include<iostream>
//#define STB_IMAGE_STATIC
#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_GIF

#include "stb_image.h"

AnimatedGIF::AnimatedGIF(const char* filename)
{
    FILE *f = stbi__fopen(filename, "rb");
    stbi__context s;    //structure 
    stbi__start_file(&s, f);  //stbi__start_file is a function from the STB image library that sets up the stbi__context structure for reading image data from a file.

    int *delays = 0;   //delays btn frames 
    int z , comp = 0;    //z=no of frames in gif     comp=store the number of color components in the GIF image (usually 4 for RGBA) 

    void *pixels = stbi__load_gif_main(&s, &delays, &size.x, &size.y, &z, &comp, STBI_rgb_alpha); //function from the STB image library that loads GIF images and returns the raw pixel data
    sf::Image image;
    int step = size.x * size.y * 4;     //calculates the size of one frame of the GIF image in bytes based on its dimensions and the number of bytes per pixel

    for (int i = 0; i < z; i++)
    {
        image.create(size.x, size.y, (sf::Uint8*) pixels + step * i);  //creates an object with the pixel data for the current frame.
        sf::Texture texture;
        texture.loadFromImage(image); 
        frames.push_back(std::tuple<int, sf::Texture>(delays[i], texture));
    }
         
    frameIter = frames.begin();
    
    stbi_image_free(pixels);    //freeing memory allocated for image pixels
    if(delays)
        stbi_image_free(delays);
    fclose(f);

    totalDelay = sf::Time::Zero;
    startTime = clock.getElapsedTime();
}

const sf::Vector2i&
AnimatedGIF::getSize()
{
    return size;
}

void AnimatedGIF::update(sf::Sprite& sprite,sf::Vector2u windowSize)
{   
     // Scale the sprite to fit the window size
    float scaleX = static_cast<float>(windowSize.x) / size.x;
    float scaleY = static_cast<float>(windowSize.y) / size.y;
    sprite.setScale(std::min(scaleX, scaleY),std::min(scaleX, scaleY)); // maintain aspect ratio
    
    
    // Center the sprite on the screen
    sf::FloatRect bounds = sprite.getLocalBounds();
    sprite.setOrigin(bounds.width / 2, bounds.height / 2);
    sprite.setPosition(windowSize.x / 2, windowSize.y / 2);
    
    sf::Time delay = sf::milliseconds(std::get<0>(*frameIter));

    while (startTime + totalDelay + delay < clock.getElapsedTime())
    {
        frameIter++;
        if (frameIter == frames.end()){
            isEnded = true;
          frameIter = frames.begin();
        } 
        totalDelay += delay;
        delay = sf::milliseconds(std::get<0>(*frameIter));
    }

    sf::Texture &texture = std::get<1>(*frameIter);
    sprite.setTexture(texture);
}