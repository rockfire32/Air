#include <Object.hpp>

//   Air::Point
void Air::Point::set_position(uint32_t x, uint32_t y)
{
    this->x = x;
    this->y = y;
}

void Air::Point::get_position(uint32_t &x, uint32_t &y)
{
    x = this->x;
    y = this->y;
}

//   Air::Object
void Air::Object::init(uint8_t size, bool animated)
{
    switch ( size )
    {
        case 0: h = 32; w = 32;  break;
        case 1: h = 32; w = 64;  break;
        case 2: h = 32; w = 96;  break;
        case 3: h = 32; w = 128; break;
    }

    this->animated = animated;

    if ( h == 32 && w == 32 ) {
        animated = false;
    }
}

void Air::Object::get_texture_size(uint32_t &h, uint32_t &w)
{
    h = this->h;
    w = this->w;
}

void Air::Object::set_texture(SDL_Texture *texture) {
    this->texture = texture;
}

SDL_Texture * Air::Object::get_texture() {
    return texture;
}
