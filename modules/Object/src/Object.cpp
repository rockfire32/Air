#include <Object.hpp>

Air::Object::Object() { }

Air::Object::~Object()
{
    if ( texture != nullptr ) {
        SDL_DestroyTexture(texture);
    }
}

/*   Methods   */

void Air::Object::SetTexture(SDL_Texture *texture) {
    this->texture = texture;
}

SDL_Texture * Air::Object::GetTexture() {
    return texture;
}

void Air::Object::SetPosition(uint32_t x, uint32_t y)
{
    this->x = x;
    this->y = y;
}

void Air::Object::GetPosition(uint32_t &x, uint32_t &y)
{
    x = this->x;
    y = this->y;
}
