//
//  RightMover.cpp
//  01-Vectors__05-car-brake
//
//  Created by Torbjørn Vik Lunde on 07/09/2019.
//

#include "RightMover.hpp"

RightMover::RightMover() {
    position.x = ofGetWidth() / 2;
    position.y = ofGetHeight() / 2;
    
    
}

void RightMover::update() {
    velocity += acceleration;
    velocity.x = glm::clamp(velocity.x, 0.f, 25.f);
    
    position += velocity;
    
    if (position.x > ofGetWidth()) {
        position.x = 0;
    }
}

void RightMover::draw() {
    ofSetCircleResolution(3);
    ofDrawCircle(position, 20);
}

void RightMover::steer(float x) {
    acceleration.x = x;
}
