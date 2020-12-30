#include <Object.hpp>

//   Air::Object

void Air::Object::set_texture(SDL_Texture *texture) {
    this->texture = texture;
}

SDL_Texture * Air::Object::get_texture() {
    return texture;
}

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
