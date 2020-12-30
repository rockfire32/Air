#include <Logics.hpp>

Air::Logics::Logics() { }
Air::Logics::~Logics() { }

void Air::Logics::events()
{
    while ( SDL_PollEvent(&event) )
    {
        switch ( event.type )
        {
            case SDL_QUIT: status = false; break;
        }
    }
}

bool Air::Logics::GetStatus() {
    return status;
}
