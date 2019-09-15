//
//  Mover.cpp
//  01-Vectors__08-accelerate-towards-mouse
//
//  Created by Torbjørn Vik Lunde on 13/09/2019.
//

#include "Mover.hpp"

Mover::Mover() {
    position.x = ofGetWidth() / 2;
    position.y = ofGetHeight() / 2;
}

void Mover::update() {
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

void Mover::draw() {
    ofDrawCircle(position, 20);
}

void Mover::mouseMoved(int x, int y) {
    mouse.x = (float) x;
    mouse.y = (float) y;
}
