//
//  Walker.cpp
//  00-Intro__07-Perlin-walker
//
//  Created by Torbjørn Vik Lunde on 03/08/2019.
//

#include "Walker.hpp"

void Walker::step() {
    prevPos = nextPos;
    
    float stepX = ofMap(ofNoise(xOffset), 0, 1, -10, 10);
    float stepY = ofMap(ofNoise(yOffset), 0, 1, -10, 10);
    
    nextPos.x += stepX;
    nextPos.y += stepY;
    
    xOffset += 0.01;
    yOffset += 0.01;
}

void Walker::draw() {
    ofDrawLine(prevPos, nextPos);
}
