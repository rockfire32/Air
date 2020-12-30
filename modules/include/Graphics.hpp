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

    SDL_Texture *create_texture(const std::string path);
    void         load_texture(const std::string name, SDL_Texture *texture);

protected:
    std::map<std::string, SDL_Texture*> textures;

    SDL_Window   *window   = nullptr;
    SDL_Renderer *renderer = nullptr;

private:
    int flags = 0;

    uint16_t W = 360,
             H = 240;
};

}

#endif // AIR_GRAPHICS_HPP
