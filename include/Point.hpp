#ifndef AIR_POINT_HPP
#define AIR_POINT_HP

#include <cstdint>

namespace Air
{

class Point
{
public:
    Point();
    ~Point();

    //   Position
    void set_position(uint32_t x, uint32_t y);
    void get_position(uint32_t &x, uint32_t &y);

protected:
    uint32_t x = 0,
             y = 0;
};

}

#endif // AIR_POINT_HPP
