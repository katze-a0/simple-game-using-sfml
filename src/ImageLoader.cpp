#include "ImageLoader.h"
#include<iostream>

ImageLoader::ImageLoader(const std::string& filePath, sf::Vector2u windowSize) : windowSize(windowSize) {
    if (!texture.loadFromFile(filePath)) {
        std::cout << "Failed to load image: " << filePath << std::endl;
        exit(1);
    }
    sprite.setTexture(texture);
    sprite.setScale(windowSize.x / static_cast<float>(texture.getSize().x), windowSize.y / static_cast<float>(texture.getSize().y));
}

ImageLoader::~ImageLoader() {}

void ImageLoader::update(sf::RenderWindow& window) {}

void ImageLoader::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}