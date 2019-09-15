//
//  Walker.cpp
//  00-Intro__05-Guassian-walker
//
//  Created by Torbjørn Vik Lunde on 03/08/2019.
//

#include "Walker.hpp"

void Walker::step() {
    prevPos = nextPos;
    
    float r = ofRandom(1);
    float length = normDist(generator);
    
    if (r < 0.25) { nextPos.x += length; }
    else if (r < 0.50) { nextPos.x -= length; }
    else if (r < 0.75) { nextPos.y += length; }
    else { nextPos.y -= length; }
}

void Walker::draw() {
    ofDrawLine(prevPos, nextPos);
}
