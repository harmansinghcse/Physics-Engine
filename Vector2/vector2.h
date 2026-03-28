#pragma once
#include <cmath>

struct Vector2
{
    float x;
    float y;

    Vector2(float x, float y) : x(x), y(y){};

    Vector2 operator+(const Vector2 &other) const;

    Vector2 operator-(const Vector2 &other) const;

    Vector2 operator*(const float &other) const;

    float magnitude() const;
            
    Vector2 normalize() const;
};