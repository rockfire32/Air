#include <Object.hpp>

//   Air::Point
Air::Point::Point() { }
Air::Point::~Point() { }

//   Air::Object
Air::Object::Object() { }

Air::Object::~Object()
{
    if ( texture != nullptr ) {
        SDL_DestroyTexture(texture);
    }
}
