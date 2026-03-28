#include <iostream>
#include "body.h"
#include "vector2.h"
#include "physics/collisions.h"

int main(){
    Vector2 gravity {0, -9.8};
    body B1 {{0,0}, {1,0}, 10, 10};   
    body B2 {{100,0}, {-1,0}, 10, 10};   

    int frame = 0;
    float dt = 0.016;

    while(frame++ < 10000){
        B1.position =  B1.position + B1.velocity * dt;
        B2.position =  B2.position + B2.velocity * dt;
    
        
    }
}