#pragma once

#include <string>
#include <SDL2/SDL_mixer.h>

class Audio
{
public:
    Audio();
    ~Audio();

    bool Load(const std::string& file);
    void Play(int loops = 0);
    void Stop();
    void Pause();
    void Resume();

private:
    Mix_Chunk* sound;
};
