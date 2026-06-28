#include "Window.h"

Window::Window()
{
    window = nullptr;
}

bool Window::Create(const std::string& title, int width, int height)
{
    window = SDL_CreateWindow(
        title.c_str(),
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        width,
        height,
        SDL_WINDOW_SHOWN
    );

    return window != nullptr;
}

void Window::Destroy()
{
    if(window)
    {
        SDL_DestroyWindow(window);
        window = nullptr;
    }
}

SDL_Window* Window::GetWindow()
{
    return window;
}
