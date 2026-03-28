#include "vector2.h"

Vector2 Vector2::operator+(const Vector2 &other) const{
    return Vector2{x + other.x, y + other.y};
}

Vector2 Vector2::operator-(const Vector2 &other) const{
    return Vector2{x - other.x, y - other.y};
}

Vector2 Vector2::operator*(const float &other) const{
    return Vector2{x * other, y * other};
}

float Vector2::magnitude() const{
    return sqrt(x*x + y*y);
}

Vector2 Vector2::normalize() const{
    float mag = magnitude();
    if(mag == 0){
        return *this;
    }
    return Vector2{x / mag, y / mag};
}

float Vector2::dot(const Vector2 &other) const{
    return x * other.x + y * other.y;
}


