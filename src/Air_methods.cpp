#include <Air.hpp>

int Air::Air_Engine::init()
{
    try
    {
        Graphics_module.init();
    }
    catch (std::string err)
    {
        std::cerr << err << std::endl;
        return -1;
    }

    return 0;
}

void Air::Air_Engine::loop()
{
    while ( Logics_module.GetStatus() )
    {
        Logics_module.events();
        Graphics_module.draw();
    }
}

void Air::Air_Engine::create_object(const std::string name)
{
    if ( Objects.count(name) > 0 ) {
        return ;
    }

    Objects[name] = new Object;
}

void Air::Air_Engine::remove_object(const std::string name)
{
    if ( Objects.count(name) == 0 ) {
        return ;
    }

    delete Objects[name];
    Objects[name] = nullptr;

    Objects.erase(name);
}

void Air::Air_Engine::load_texture(const std::string name, const std::string path)
{
    if ( Objects.count(name) == 0 ) {
        return ;
    }

    try
    {
        Objects[name]->SetTexture(Graphics_module.create_texture(path));
    }
    catch (const std::string &path)
    {
        std::cerr << ("Error: Cannot find: ") << path << std::endl;
        throw path;
    }
}

void Air::Air_Engine::make_drawable(const std::string name)
{
    if ( Objects.count(name) == 0 ) {
        return ;
    }

    Graphics_module.load_texture(name, Objects[name]->GetTexture());
}
