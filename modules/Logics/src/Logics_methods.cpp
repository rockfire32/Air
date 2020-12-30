#include <Logics.hpp>

void Air::Logics::events()
{
    while ( SDL_PollEvent(&event) )
    {
        switch ( event.type )
        {
            case SDL_QUIT: status = false; break;

            case SDL_KEYDOWN: keyboard();  break;
            case SDL_MOUSEMOTION: mouse(); break;
        }
    }
}

bool Air::Logics::get_status() {
    return status;
}


void Air::Logics::set_mouse_handler(void (*f)()) {
    mouse = f;
}

void Air::Logics::set_keyboard_handler(void (*f)()) {
    keyboard = f;
}
