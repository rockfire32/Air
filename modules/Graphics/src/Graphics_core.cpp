#include <Graphics.hpp>

Air::Graphics::Graphics()
{
    flags = IMG_INIT_PNG;
    viewpoint.set_position(0, 0);
}

Air::Graphics::~Graphics()
{
    if ( renderer != nullptr ) {
        SDL_DestroyRenderer(renderer);
    }

    if ( window != nullptr ) {
        SDL_DestroyWindow(window);
    }

    IMG_Quit();
    SDL_Quit();
}
