#pragma once

#include <SDL2/SDL.h>
#include <string>

class Window
{
public:
    Window();

    bool Create(const std::string& title, int width, int height);

    void Destroy();

    SDL_Window* GetWindow();

private:
    SDL_Window* window;
};
