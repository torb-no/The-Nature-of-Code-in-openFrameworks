//
//  Walker.cpp
//  0_Intro_Exercise_I_1
//
//  Created by Torbjørn Vik Lunde on 24.12.13.
//
//

#include "Walker.h"

Walker::Walker()
{
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
}

void Walker::step()
{
    float r = ofRandom(1);
    
    if (r < 0.28) {
        x++;
    }
    else if (r < 0.56) {
        y++;
    }
    else if (r < 0.75) {
        x--;
    }
    else {
        y--;
    }
}

void Walker::draw()
{
    ofRect(x, y, 1, 1);
}