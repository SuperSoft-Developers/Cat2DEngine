#include "Engine.h"
#include <iostream>

bool Engine::Init()
{
    running = true;

    std::cout << "Cat2DEngine iniciada!" << std::endl;

    return true;
}

void Engine::Run()
{
    while(running)
    {
        // Loop principal
    }
}

void Engine::Shutdown()
{
    running = false;
}

bool Engine::Running() const
{
    return running;
}
