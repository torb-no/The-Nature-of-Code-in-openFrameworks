//
//  Walker.cpp
//  0_Intro_Exercise_I_3
//
//  Created by Torbjørn Vik Lunde on 24.12.13.
//
//

#include "Walker.h"
#define SMALL_CHANCE 0.33
#define LARGE_CHANCE 0.66

Walker::Walker()
{
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
}

void Walker::step()
{
    float randomAxis = ofRandom(1);
    if (randomAxis < 0.5) {
        float randomX = ofRandom(1);
        if (mouseX > x) {
            if (randomX < LARGE_CHANCE) x++;
            else x--;
        }
        else {
            if (randomX < SMALL_CHANCE) x++;
            else x--;
        }
    }
    else {
        float randomY = ofRandom(1);
        if (mouseY > y) {
            if (randomY < LARGE_CHANCE) y++;
            else y--;
        }
        else {
            if (randomY < SMALL_CHANCE) y++;
            else y--;
        }
    }
}

void Walker::draw()
{
    ofRect(x, y, 1, 1);
}