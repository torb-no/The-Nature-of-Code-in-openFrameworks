//
//  Walker.cpp
//  1_Vectors_Exercise_1_2
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#include "Walker.h"

Walker::Walker()
{
    position.x = ofGetWidth() / 2;
    position.y = ofGetHeight() / 2;
}

void Walker::step()
{
    float r = ofRandom(1);
    
    if (r < 0.28) {
        position.x++;
    }
    else if (r < 0.56) {
        position.y++;
    }
    else if (r < 0.75) {
        position.x--;
    }
    else {
        position.y--;
    }
}

void Walker::draw()
{
    ofRect(position, 1, 1);
}