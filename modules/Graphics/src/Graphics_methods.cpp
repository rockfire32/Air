#include <Graphics.hpp>

void Air::Graphics::init()
{
    if ( SDL_Init( SDL_INIT_VIDEO ) != 0 )
    {
        std::cerr << SDL_GetError() << std::endl;
        throw SDL_INIT_ERROR;
    }

    if ( SDL_CreateWindowAndRenderer(W, H, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC, &window, &renderer) != 0 )
    {
        std::cerr << SDL_GetError() << std::endl;
        throw SDL_CREATE_WINDOW_ERROR;
    }

    if ( !(IMG_Init(flags) & flags ))
    {
        std::cerr << IMG_GetError << std::endl;
        throw IMG_INIT_ERROR;
    }
}

void Air::Graphics::draw()
{
    std::map<std::string, SDL_Texture*>::iterator iter;

    SDL_RenderClear(renderer);

    for ( iter = textures.begin(); iter != textures.end(); iter++ ) {
        SDL_RenderCopy(renderer, iter->second, NULL, NULL);
    }

    SDL_RenderPresent(renderer);
}

SDL_Texture *Air::Graphics::create_texture(const std::string path)
{
    SDL_Texture *Texture = nullptr;
    SDL_Surface *Surface = nullptr;

    Surface = IMG_Load(path.c_str());
    if ( Surface == nullptr ) {
        throw path;
    }

    Texture = SDL_CreateTextureFromSurface(renderer, Surface);
    if ( Texture == nullptr ) {
        throw path;
    }

    SDL_FreeSurface(Surface);

    return Texture;
}

void Air::Graphics::load_texture(const std::string name, SDL_Texture *texture) {
    textures[name] = texture;
}
