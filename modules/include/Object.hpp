#ifndef AIR_OBJECT_HPP
#define AIR_OBJECT_HPP

#include <cstdint>
#include <SDL2/SDL.h>

namespace Air
{

class Object
{
public:
    Object();
    ~Object();

    void         SetTexture(SDL_Texture *texture);
    SDL_Texture *GetTexture();

    void SetPosition(uint32_t x, uint32_t y);
    void GetPosition(uint32_t &x, uint32_t &y);

protected:
    uint32_t     x = 0, y = 0;
    SDL_Texture *texture = nullptr;
};

}

#endif // AIR_OBJECT_HPP
