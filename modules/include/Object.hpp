#ifndef AIR_OBJECT_HPP
#define AIR_OBJECT_HPP

#include <cstdint>
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

class Point
{
public:
    Point();
    ~Point();

    //   Position
    void set_position(uint32_t x, uint32_t y);
    void get_position(uint32_t &x, uint32_t &y);

protected:
    uint32_t x = 0,
             y = 0;
};


class Object : public Point
{
public:
    Object();
    ~Object();

    void init(uint8_t texture_size, bool animated);

    //   Texture
    void         set_texture(SDL_Texture *texture);
    SDL_Texture *get_texture();

protected:
    bool animated = false;
    uint8_t h = 0, w = 0;

    SDL_Texture *texture = nullptr;
};

}

#endif // AIR_OBJECT_HPP
