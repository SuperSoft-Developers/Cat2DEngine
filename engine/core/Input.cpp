#include "Input.h"

bool Input::KeyDown(SDL_Scancode key)
{
    const Uint8* keyboard = SDL_GetKeyboardState(nullptr);

    return keyboard[key];
}
