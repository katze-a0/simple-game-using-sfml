
#ifndef AUDIO_EFFECT_H
#define AUDIO_EFFECT_H

#include <SFML/Audio.hpp>

class AudioEffect {
public:
    AudioEffect(const std::string& filename);
    ~AudioEffect();
    void play();
    void stop();
    bool isPlaying();

private:
    sf::Sound *sound;


    sf::SoundBuffer *soundBuffer;
};

#endif // AUDIO_EFFECT_H