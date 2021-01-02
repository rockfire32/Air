#ifndef AIR_GRAPHICS_HPP
#define AIR_GRAPHICS_HPP

#include <map>
#include <string>
#include <cstdint>
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <Object.hpp>
#include <ErrorMessages.hpp>

namespace Air
{

class Graphics
{
public:
    Graphics();
    Graphics(uint16_t W, uint16_t H);

    ~Graphics();

    void init();
    void draw();
    void load_object(const std::string name, Object *obj);

    SDL_Texture *create_texture(const std::string path);

protected:
    Point viewpoint;

    SDL_Window   *window   = nullptr;
    SDL_Renderer *renderer = nullptr;

    std::map<std::string, Object*> Objects;
private:
    int flags = 0;

    uint16_t W = 360,
             H = 240;
};

}

#endif // AIR_GRAPHICS_HPP
