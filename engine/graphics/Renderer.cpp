#include "Renderer.h"

bool Renderer::Create(SDL_Window* window)
{
    renderer = SDL_CreateRenderer(
        window,
        -1,
        SDL_RENDERER_ACCELERATED |
        SDL_RENDERER_PRESENTVSYNC);

    return renderer != nullptr;
}

void Renderer::Clear()
{
    SDL_RenderClear(renderer);
}

void Renderer::Present()
{
    SDL_RenderPresent(renderer);
}

void Renderer::Destroy()
{
    if(renderer)
    {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
}

SDL_Renderer* Renderer::Get()
{
    return renderer;
}
