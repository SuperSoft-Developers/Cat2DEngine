#pragma once

#include <SDL2/SDL.h>
#include <string>

class Sprite
{
public:
    Sprite();

    bool Load(SDL_Renderer* renderer,
              const std::string& file);

    void Draw(SDL_Renderer* renderer);

    void SetPosition(float px, float py);

private:
    SDL_Texture* texture;

    float x;
    float y;

    int width;
    int height;
};
