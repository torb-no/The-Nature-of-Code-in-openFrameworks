//
//  RightMover.cpp
//  1_Vectors_Exercise_1_5
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#include "RightMover.h"

RightMover::RightMover() {
    location.x = ofGetWidth()/2;
    location.y = ofGetHeight()/2;
    
    velocity.x = 0;
    velocity.y = 0;
    
    acceleration.x = 1;
    
    topspeed = 25;
}

void RightMover::update() {
    velocity = velocity + acceleration;
    velocity.x = limit(velocity.x, 0, topspeed);
    location = location + velocity;
    checkEdges();
}

void RightMover::draw() {
    ofSetCircleResolution(3);
    ofCircle(location, 20);
}

void RightMover::checkEdges() {
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

float RightMover::limit(float value, float min, float max) {
    float newVal = value;
    if (value < min) {
        newVal = min;
    }
    else if (value > max) {
        newVal = max;
    }
    return newVal;
}