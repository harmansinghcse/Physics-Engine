#pragma once
#include "vector2.h"

struct body
{
    Vector2 position;
    Vector2 velocity;
    float radius;
    float mass;

    body(Vector2 position, Vector2 velocity, float radius, float mass) : position(position), velocity(velocity), radius(radius), mass(mass){};
};
