#pragma once

#include <SDL2/SDL.h>

class Renderer
{
public:
    bool Create(SDL_Window* window);

    void Clear();

    void Present();

    void Destroy();

    SDL_Renderer* Get();

private:
    SDL_Renderer* renderer;
};
