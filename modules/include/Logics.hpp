#ifndef AIR_LOGICS_HPP
#define AIR_LOGICS_HPP

#include <SDL2/SDL.h>

namespace Air
{

class Logics
{
public:
    Logics();
    ~Logics();

    void events();
    bool GetStatus();

protected:
    bool      status = true;
    SDL_Event event;
};

}

#endif // AIR_LOGICS_HPP
