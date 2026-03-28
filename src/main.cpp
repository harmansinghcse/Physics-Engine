#include <iostream>
#include "body.h"
#include "vector2.h"
#include "physics\collisions.h"

int main(){
    Vector2 gravity {0, -9.8};
    body B1 {{0,0}, {10,0}, 10, 10};   
    body B2 {{100,0}, {-10,0}, 10, 10};   

    int frame = 0;
    float dt = 0.016;

    while(frame++ < 1000){
        B1.position =  B1.position + B1.velocity * dt;
        B2.position =  B2.position + B2.velocity * dt;
    
        if(checkCollision(B1 , B2)){
            resolveCollision(B1, B2);
        }
        printf("B1:-(%f, %f)\n", B1.position.x, B1.position.y);
        printf("B2:-(%f, %f)\n", B2.position.x, B2.position.y);
        
        
    }
}