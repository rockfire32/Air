#ifndef AIR_VECTOR_HPP
#define AIR_VECTOR_HPP

template <typename T>
class Vector2
{
public:
    Vector2() { }
    Vector2(T x, T y) { this->x = x; this->y = y; }

    ~Vector2() { }

    const Vector2 operator+(const Vector2& value) {
        return Vector2((x + value.x), (y + value.y));
    }

    const Vector2 operator-(const Vector2& value) {
        return Vector2((x - value.x), (y - value.y));
    }

    bool operator==(const Vector2& value) {
        return ( x == value.x ) && ( y == value.y );
    }

    T x, y;
};

template <typename T>
class Vector3
{
public:
    Vector3() { }
    Vector3(T x, T y, T z) { this->x = x; this->y = y; this->z = z; }

    ~Vector3() { }

    const Vector3 operator+(const Vector3& value) {
        return Vector3((x + value.x), (y + value.y), (z + value.z));
    }

    const Vector3 operator-(const Vector3& value) {
        return Vector3((x - value.x), (y - value.y), (z - value.z));
    }

    bool operator==(const Vector3& value) {
        return ( x == value.x ) && ( y == value.y ) && ( z == value.z );
    }

    T x, y, z;
};

#endif // AIR_VECTOR_HPP
