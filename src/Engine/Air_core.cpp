#include <Air.hpp>

Air::Air_Engine::Air_Engine() { }

Air::Air_Engine::~Air_Engine()
{
    std::map<std::string, Object*>::iterator iter;

    for ( iter = Objects.begin(); iter != Objects.end(); iter++ ) {
        delete iter->second;
    }
}
