//
//  Mover.hpp
//  01-Vectors__08-accelerate-towards-mouse
//
//  Created by Torbjørn Vik Lunde on 13/09/2019.
//

#ifndef Mover_hpp
#define Mover_hpp

#include <stdio.h>
#include "ofMain.h"

class Mover {
    glm::vec2 position;
    glm::vec2 velocity;
    glm::vec2 acceleration;
    
    glm::vec2 mouse;
    
public:
    Mover() {
        position.x = ofGetWidth() / 2;
        position.y = ofGetHeight() / 2;
    }
    
    void update() {
        // Acceleration towards mouse
        auto difference = mouse - position;
        auto distance = glm::length(difference);
        auto direction = glm::normalize(difference);
        auto accelerationMagnitude = glm::clamp(distance/2000.f, 0.f, 2.f);
        acceleration = direction * accelerationMagnitude;
        
        velocity += acceleration;
        constexpr auto maxVelocity = 15.f;
        if (glm::length(velocity) > maxVelocity) {
            velocity = glm::normalize(velocity) * maxVelocity;
        }
        
        position += velocity;
    }
    
    void draw() {
        ofDrawCircle(position, 20);
    }
    
    void mouseMoved(int x, int y) {
        mouse.x = (float) x;
        mouse.y = (float) y;
    }
};

#endif /* Mover_hpp */
