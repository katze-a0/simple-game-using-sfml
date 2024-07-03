
#include "AudioEffect.h"
#include<iostream>
using namespace std;

AudioEffect::AudioEffect(const std::string& filename) {
    sound = new sf::Sound();
    soundBuffer = new sf::SoundBuffer();
    if (!soundBuffer->loadFromFile(filename)) {
        std::cout<< "Failed to load audio file: " << filename << std::endl;
    }
    sound->setBuffer(*soundBuffer);

}

AudioEffect::~AudioEffect(){
    delete sound;
    delete soundBuffer;
}

void AudioEffect::play() {
    sound->play();
}

void AudioEffect::stop() {
    sound->stop();
}

bool AudioEffect::isPlaying() {
    return sound->getStatus() == sf::Sound::Playing;
}