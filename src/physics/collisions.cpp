#include "physics/collisions.h"
#include "body.h"
#include "vector2.h"

bool checkCollision(body& A, body& B){
    if((B.position - A.position).magnitude() <= A.radius + B.radius) {
        return true;
    }
    return false;
}

void resolveCollision(body& A, body& B){
    Vector2 normal = A.position - B.position;
    Vector2 normal_unit = normal.normalize();
    Vector2 rv = A.velocity - B.velocity;
    float velocity_along_normal = rv.dot(normal_unit);
    if(velocity_along_normal < 0){
        Vector2 temp = A.velocity;
        A.velocity = B.velocity;
        B.velocity = temp; 
        float overlap = A.radius + B.radius - normal.magnitude();
        if(overlap > 0){
            A.position = A.position + normal_unit * (overlap / 2);
            B.position = B.position - normal_unit * (overlap / 2);
        }
    }
    
}