//
//  Mover.cpp
//  2_Forces_Exercise_2_3
//
//  Created by Torbjørn Vik Lunde on 02.02.14.
//
//

#include "Mover.h"

Mover::Mover() {
    
    mass = ofRandom(1, 5);
    
    location.x = ofGetWidth() / 3;
    location.y = ofGetHeight() / 3;
    
    velocity.x = 0;
    velocity.y = 0;
    
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Mover::update() {
    velocity += acceleration;
    location += velocity;
    acceleration *= 0;
}

void Mover::draw() {
    ofSetColor(color, 200);
    ofCircle(location, getRadius());
}

void Mover::applyForce(ofVec2f force) {
    acceleration += (force / mass);
}

float Mover::getRadius() {
    return mass * 10.0;
}