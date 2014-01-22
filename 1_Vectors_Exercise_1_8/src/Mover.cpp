//
//  Mover.cpp
//  1_Vectors_Exercise_1_8
//
//  Created by Torbjørn on 22.01.14.
//
//

#include "Mover.h"

Mover::Mover() {
    location.x = ofGetWidth()/2;
    location.y = ofGetHeight()/2;
    
    velocity.x = 0;
    velocity.y = 0;
    
    acceleration.x = 0;
    acceleration.y = 0;
    
    highest = 0;
}

void Mover::update() {
    ofVec2f mouse;
    mouse.x = parent->mouseX;
    mouse.y = parent->mouseY;
    ofVec2f direction = mouse - location;
    direction.normalize();
    
    float distance = mouse.distance(location);
    if (distance < 350) {
        float closePart = 350 - distance;
        float closeMulti = closePart/350;
        closeMulti *= 0.75;
        distance *= closeMulti;
        
    }
    else {
        distance *= 0.05;
    }
    
    
    //direction *= 0.25;
    acceleration = direction;
    
    velocity = velocity + acceleration;
    location = location + velocity;
}

void Mover::draw() {
    ofCircle(location, 20);
}