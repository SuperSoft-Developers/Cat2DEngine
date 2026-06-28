#include "Audio.h"

Audio::Audio()
{
    sound = nullptr;
}

Audio::~Audio()
{
    if(sound != nullptr)
        Mix_FreeChunk(sound);
}

bool Audio::Load(const std::string& file)
{
    sound = Mix_LoadWAV(file.c_str());

    return sound != nullptr;
}

void Audio::Play(int loops)
{
    if(sound)
        Mix_PlayChannel(-1, sound, loops);
}

void Audio::Stop()
{
    Mix_HaltChannel(-1);
}

void Audio::Pause()
{
    Mix_Pause(-1);
}

void Audio::Resume()
{
    Mix_Resume(-1);
}
