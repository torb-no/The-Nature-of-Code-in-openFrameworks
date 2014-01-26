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
    
    updrift.x = 0;
    updrift.y = -0.002;
    
    srand(time(NULL));
    windNoiseOffsetX = ofRandom(0, 10000);
    windNoiseOffsetY = ofRandom(0, 10000);
}

void Balloon::update() {
    windNoiseOffsetX += 0.01;
    windNoiseOffsetY += 0.01;
    wind.x = ofMap(ofNoise(windNoiseOffsetX), 0, 1, -0.15, 0.15);
    wind.y = ofMap(ofNoise(windNoiseOffsetY), 0, 1, -0.007, 0.003);
    
    // Reset acceleration
    acceleration.x = 0;
    acceleration.y = 0;
    
    // Apply forces
    acceleration += wind;
    acceleration += updrift;
    
    // Check edges
    if (location.x > ofGetWidth()-radius) {
        velocity.x = -abs(velocity.x * 0.85);
    }
    else if (location.x < radius) {
        velocity.x = abs(velocity.x * 0.85);
    }
    if (location.y > ofGetHeight()-radius) {
        velocity.y = -abs(velocity.y * 0.85);
    }
    else if (location.y < radius) {
        velocity.y = abs(velocity.y * 0.85);
    }
    
    // Calculate velocity and location
    velocity += acceleration;
    location += velocity;
}

void Balloon::draw() {
    ofCircle(location, radius);
}

