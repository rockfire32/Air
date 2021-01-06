#include <Object.hpp>

Air::Object::Object() { }

Air::Object::~Object()
{
    if ( texture != nullptr ) {
        SDL_DestroyTexture(texture);
    }
}
