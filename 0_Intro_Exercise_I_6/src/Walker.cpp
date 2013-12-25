//
//  Walker.cpp
//  0_Intro_Exercise_I_6
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
    
    float stepsize = squaredMontecarlo(10);
    
    float stepx = ofRandom(-stepsize, stepsize);
    float stepy = ofRandom(-stepsize, stepsize);
    
    nextPoint.x += stepx;
    nextPoint.y += stepy;
}

void Walker::draw()
{
    ofLine(prevPoint, nextPoint);
}

float Walker::squaredMontecarlo(float size) {
    while (true) {
        float r1 = ofRandom(size);
        float probability = r1*r1;
        float r2 = ofRandom(size);
        
        if (r2 < probability) {
            return r1;
        }
    }
}

