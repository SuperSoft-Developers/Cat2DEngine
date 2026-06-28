#include "Sprite.h"
#include <SDL2/SDL_image.h>

Sprite::Sprite()
{
    texture = nullptr;

    x = 0;
    y = 0;

    width = 0;
    height = 0;
}

bool Sprite::Load(SDL_Renderer* renderer,
                  const std::string& file)
{
    SDL_Surface* surface = IMG_Load(file.c_str());

    if(!surface)
        return false;

    texture = SDL_CreateTextureFromSurface(renderer, surface);

    width = surface->w;
    height = surface->h;

    SDL_FreeSurface(surface);

    return texture != nullptr;
}

void Sprite::Draw(SDL_Renderer* renderer)
{
    SDL_Rect dst =
    {
        (int)x,
        (int)y,
        width,
        height
    };

    SDL_RenderCopy(renderer,
                   texture,
                   nullptr,
                   &dst);
}

void Sprite::SetPosition(float px, float py)
{
    x = px;
    y = py;
}
