//
//  Walker.cpp
//  00-Intro__05-Guassian-walker
//
//  Created by Torbjørn Vik Lunde on 03/08/2019.
//

#include "Walker.hpp"

void Walker::step() {
    prevPos = nextPos;
    
    theta += 0.01;
    
    // Periodic "randomness size"
    float stepsize = sin(theta) * 35;
    
    nextPos.x += ofRandom(-stepsize, stepsize);
    nextPos.y += ofRandom(-stepsize, stepsize);
}

void Walker::draw() {
    ofDrawLine(prevPos, nextPos);
}
