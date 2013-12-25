//
//  Walker.cpp
//  0_Intro_Exercise_I_7
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#include "Walker.h"

Walker::Walker()
{
    nextPoint.x = ofGetWidth() / 2;
    nextPoint.y = ofGetHeight() / 2;
    
    xOffset = ofRandom(0, 100000);
    yOffset = ofRandom(0, 100000);
    
    cout << "xOffset:" << xOffset << endl;
    cout << "yOffset:" << yOffset << endl;
}

void Walker::step()
{
    prevPoint.x = nextPoint.x;
    prevPoint.y = nextPoint.y;
    
    float stepx = ofMap(ofNoise(xOffset), 0, 1, -10, 10);
    float stepy = ofMap(ofNoise(yOffset), 0, 1, -10, 10);
    
    nextPoint.x += stepx;
    nextPoint.y += stepy;
    
    xOffset += 0.01;
    yOffset += 0.01;
}

void Walker::draw()
{
    ofLine(prevPoint, nextPoint);
}