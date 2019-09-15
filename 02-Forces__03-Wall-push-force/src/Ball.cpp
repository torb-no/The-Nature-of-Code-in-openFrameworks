//
//  Ball.cpp
//  02-Forces__03-Wall-push-force
//
//  Created by Torbjørn Vik Lunde on 15/09/2019.
//

#include "Ball.hpp"

Ball::Ball() {
    mass = ofRandom(1, 10);
    
    location.x = ofGetWidth() / 3;
    location.y = ofGetHeight() / 3;
    
    color.set(ofRandom(255), ofRandom(255), ofRandom(255), 160);
    
}

void Ball::update() {
    acceleration = sumForces / mass;
    velocity += acceleration;
    location += velocity;
    
    sumForces *= 0;
}

void Ball::draw() {
    
    ofSetColor(color);
    auto radius = mass * 10.0f;
    ofDrawCircle(location, radius);
}

void Ball::applyForce(glm::vec2 force) {
    sumForces += force;
}
