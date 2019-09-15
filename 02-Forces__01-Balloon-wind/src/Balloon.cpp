//
//  Balloon.cpp
//  02-Forces__01-Balloon-wind
//
//  Created by Torbjørn Vik Lunde on 14/09/2019.
//

#include "Balloon.hpp"

Balloon::Balloon() {
    radius = 40;
    
    location.x = (ofGetWidth() / 10) * 2;
    location.y = (ofGetHeight() / 10) * 8;
}

void Balloon::update() {
    acceleration = accumulatedForce;
    
    velocity += acceleration;
    location += velocity;
    
    // Check edges
    auto constexpr bounceForce = 0.85;
    if (location.x > ofGetWidth()-radius) {
        velocity.x = -abs(velocity.x * bounceForce);
    }
    else if (location.x < radius) {
        velocity.x = abs(velocity.x * bounceForce);
    }
    if (location.y > ofGetHeight()-radius) {
        velocity.y = -abs(velocity.y * bounceForce);
    }
    else if (location.y < radius) {
        velocity.y = abs(velocity.y * bounceForce);
    }
    
    // Reset force
    accumulatedForce *= 0;
}

void Balloon::draw() {
    ofDrawCircle(location, radius);
}

void Balloon::applyForce(glm::vec2 force) {
    accumulatedForce += force;
}
