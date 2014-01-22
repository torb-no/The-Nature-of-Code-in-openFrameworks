//
//  Mover.cpp
//  1_Vectors_Exercise_1_6
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
    
    // Seed random to mamke things less deterministic
    srand(time(NULL));
    xOffset = ofRandom(0, 100000);
    yOffset = ofRandom(0, 100000);
}

void Mover::update() {
    acceleration.x = ofMap(ofNoise(xOffset), 0, 1, -1, 1);
    acceleration.y = ofMap(ofNoise(yOffset), 0, 1, -1, 1);
    
    velocity = velocity + acceleration;
    location = location + velocity;
    
    checkEdges();
    
    xOffset += 0.01;
    yOffset += 0.01;
}

void Mover::draw() {
    ofCircle(location, 20);
}

void Mover::checkEdges() {
    if (location.x > ofGetWidth()) {
        location.x = 0;
    }
    else if (location.x < 0) {
        location.x = ofGetWidth();
    }
    
    if (location.y > ofGetHeight()) {
        location.y = 0;
    }
    else if (location.y < 0) {
        location.y = ofGetHeight();
    }
}

void Mover::limit(ofVec2f &vector, float max) {
    if (vector.length() > max) {
        vector.normalize();
        vector = vector * max;
    }
}