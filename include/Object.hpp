#ifndef AIR_OBJECT_HPP
#define AIR_OBJECT_HPP

#include <cstdint>
#include <Point.hpp>
#include <SDL2/SDL.h>

enum OBJECT_SIZES
{
    SIZE_32X32 = 0,
    SIZE_32X64    ,
    SIZE_32X96    ,
    SIZE_32x128   ,
};

namespace Air
{

class Object : public Point
{
public:
    Object();
    ~Object();

    void init(uint8_t texture_size, bool animated);

    //   Texture
    void get_texture_size(uint32_t &h, uint32_t &w);
    void set_texture(SDL_Texture *texture);
    SDL_Texture *get_texture();

protected:
    bool animated = false;
    uint32_t h = 0, w = 0;

    SDL_Texture *texture = nullptr;
};

}

#endif // AIR_OBJECT_HPP
