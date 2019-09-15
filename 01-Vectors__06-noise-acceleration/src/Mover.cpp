//
//  Walker.cpp
//  01-Vectors__06-noise-acceleration
//
//  Created by Torbjørn Vik Lunde on 13/09/2019.
//

#include "Mover.hpp"

Mover::Mover() {
    // Setup randomness
    srand(time(NULL));
    noiseOffset.x = ofRandom(0, 1000000);
    noiseOffset.y = ofRandom(0, 1000000);
    
    position.x = ofGetWidth() / 2;
    position.y = ofGetHeight() / 2;
}

void Mover::update() {
    // Noise acceleration
    noiseOffset += 0.02f;
    acceleration.x = ofNoise(noiseOffset.x)-0.5f;
    acceleration.y = ofNoise(noiseOffset.y)-0.5f;
    
    // Update and limit velocity
    velocity += acceleration;
    constexpr auto maxVelocity = 5.f;
    if (glm::length(velocity) > maxVelocity) {
        velocity = glm::normalize(velocity) * maxVelocity;
    }
    
    position += velocity;
    
    // Fall through edges
    if (position.x > ofGetWidth()) {
        position.x = 0;
    }
    else if (position.x < 0) {
        position.x = ofGetWidth();
    }
    if (position.y > ofGetHeight()) {
        position.y = 0;
    }
    else if (position.y < 0) {
        position.y = ofGetHeight();
    }
}

void Mover::draw() {
    ofDrawCircle(position, 20);
}
