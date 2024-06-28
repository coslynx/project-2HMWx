#pragma once

#include <SDL.h>

class SoundManager {
public:
    SoundManager();
    ~SoundManager();

    void playSoundEffect(const char* filePath);
    void playBackgroundMusic(const char* filePath);
    void stopBackgroundMusic();
};