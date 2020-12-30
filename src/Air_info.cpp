#include <Air.hpp>

void Air::Air_Engine::info_object()
{
    std::map<std::string, Object*>::iterator iter;

    for ( iter = Objects.begin(); iter != Objects.end(); iter++ ) {
        std::cout << ("Object: ") << iter->first << (" ") << (size_t*)iter->second << std::endl;
    }
}
