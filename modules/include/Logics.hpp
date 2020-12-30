#ifndef AIR_LOGICS_HPP
#define AIR_LOGICS_HPP

#include <SDL2/SDL.h>

namespace Air
{

void default_f();

class Logics
{
public:
    Logics();
    ~Logics();

    void events();
    bool get_status();

    void set_mouse_handler(void (*f)());
    void set_keyboard_handler(void (*f)());

private:
    bool status = true;
    SDL_Event event;

    void (*mouse)()    = default_f;
    void (*keyboard)() = default_f;
};

}

#endif // AIR_LOGICS_HPP
