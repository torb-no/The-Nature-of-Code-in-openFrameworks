//
//  Mover.cpp
//  1_Vectors_Exercise_1_4
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#include "Mover.h"

Mover::Mover() {
    location.x = ofGetWidth()/2;
    location.y = ofGetHeight()/2;
    
    velocity.x = 0;
    velocity.y = 0;
    
    acceleration.x = -0.001;
    acceleration.y = 0.01;
    
    topspeed = 5;
}

void Mover::update() {
    velocity = velocity + acceleration;
    limit(velocity, topspeed);
    location = location + velocity;
    checkEdges();
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