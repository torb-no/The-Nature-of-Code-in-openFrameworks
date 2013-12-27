//
//  Ball.cpp
//  1_Vectors_Exercise_1_3
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#include "Ball.h"

Ball::Ball() {
    space.x = ofGetWidth();
    space.y = ofGetHeight();
    space.z = 800;
    
    radius = 100;

    ofSeedRandom();
    position.x = ofRandom(radius, space.x-radius*2);
    position.y = ofRandom(radius, space.y-radius*2);
    position.z = ofRandom(radius, space.z-radius*2);
    
    acceleration.x = ofRandom(-10, 10);
    acceleration.y = ofRandom(-10, 10);
    acceleration.z = ofRandom(-10, 10);
}

void Ball::update() {
    // Make more acurate regarding depth (or at least look more right)
    
    if(position.x - radius < 0 || position.x + radius*2 > space.x) {
        acceleration.x = acceleration.x * -1;
    }
    if(position.y - radius < 0 || position.y + radius*2 > space.y) {
        acceleration.y = acceleration.y * -1;
    }
    if(position.z - radius < 0 || position.z + radius*2 > space.z) {
        acceleration.z = acceleration.z * -1;
    }
    
    position = position + acceleration;
}

void Ball::draw() {
    ofDrawSphere(position.x, position.y, position.z-space.z, radius);
}