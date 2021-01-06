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
    ~Graphics();

    void init();
    void init(uint16_t W, uint16_t H);

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

    void draw_objects();
};

}

#endif // AIR_GRAPHICS_HPP
