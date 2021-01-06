#ifndef AIR_ENGINE_HPP
#define AIR_ENGINE_HPP

#include <map>
#include <string>
#include <iostream>

#include <Vector.hpp>
#include <Object.hpp>
#include <Logics.hpp>
#include <Graphics.hpp>

namespace Air
{

class Air_Engine
{
public:
    Air_Engine();
    ~Air_Engine();

    int init();
    int init(uint16_t W, uint16_t H);

    void loop();

    void create_object(const std::string name, uint8_t texture_size, bool animated);
    void remove_object(const std::string name);

    void load_texture(const std::string name, const std::string path);
    void make_drawable(const std::string name);

protected:
    std::map<std::string, Object*> Objects;

    Air::Logics   Logics_module;
    Air::Graphics Graphics_module;
};

}

#endif // AIR_ENGINE_HPP
