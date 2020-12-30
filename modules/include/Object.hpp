#ifndef AIR_OBJECT_HPP
#define AIR_OBJECT_HPP

#include <cstdint>
#include <SDL2/SDL.h>

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

    //   Texture
    void         set_texture(SDL_Texture *texture);
    SDL_Texture *get_texture();

protected:
    SDL_Texture *texture = nullptr;
};

}

#endif // AIR_OBJECT_HPP
