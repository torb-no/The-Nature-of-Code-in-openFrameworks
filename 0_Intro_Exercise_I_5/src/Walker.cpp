//
//  Walker.cpp
//  0_Intro_Exercise_I_5
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#include "Walker.h"

Walker::Walker()
{
    nextPoint.x = ofGetWidth() / 2;
    nextPoint.y = ofGetHeight() / 2;
}

void Walker::step()
{
    prevPoint.x = nextPoint.x;
    prevPoint.y = nextPoint.y;
    
    float r = ofRandom(1);
    float length = ofRandom(1) * 10;
    
    if (r < 0.25) {
        nextPoint.x += length;
    }
    else if (r < 0.50) {
        nextPoint.x -= length;
    }
    else if (r < 0.75) {
        nextPoint.y += length;
    }
    else {
        nextPoint.y -= length;
    }
}

void Walker::draw()
{
    ofLine(prevPoint, nextPoint);
}