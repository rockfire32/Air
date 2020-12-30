#include <Graphics.hpp>

Air::Graphics::Graphics()
{
    flags = IMG_INIT_PNG;
}

Air::Graphics::Graphics(uint16_t W, uint16_t H)
{
    this->W = W;
    this->H = H;
}

Air::Graphics::~Graphics()
{
    std::map<std::string, SDL_Texture*>::iterator iter;

    for ( iter = textures.begin(); iter != textures.end(); iter++ ) {
        if ( iter->second != nullptr ) {
            SDL_DestroyTexture(iter->second);
        }
    }

    if ( renderer != nullptr ) {
        SDL_DestroyRenderer(renderer);
    }

    if ( window != nullptr ) {
        SDL_DestroyWindow(window);
    }

    IMG_Quit();
    SDL_Quit();
}
