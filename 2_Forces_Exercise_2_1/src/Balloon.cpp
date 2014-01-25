//
//  Balloon.cpp
//  2_Forces_Exercise_2_1
//
//  Created by Torbjørn Vik Lunde on 25.01.14.
//
//

#include "Balloon.h"

Balloon::Balloon() {
    radius = 40;
    
    location.x = (ofGetWidth() / 10) * 2;
    location.y = (ofGetHeight() / 10) * 8;
    
    velocity.x = 0;
    velocity.y = 0;
    
    wind.x = 0.01;
    wind.y = 0;
    
    updrift.x = 0;
    updrift.y = -0.002;
}

void Balloon::update() {
    // Reset acceleration
    acceleration.x = 0;
    acceleration.y = 0;
    
    // Apply forces
    acceleration += wind;
    acceleration += updrift;
    
    // Check edges
    if (location.x > ofGetWidth()-radius ||
        location.x < radius) {
        velocity.x *= -1;
    }
    if (location.y > ofGetHeight()-radius ||
        location.y < radius) {
        velocity.y *= -1;
    }
    
    // Calculate velocity and location
    velocity += acceleration;
    location += velocity;
}

void Balloon::draw() {
    ofCircle(location, radius);
}

