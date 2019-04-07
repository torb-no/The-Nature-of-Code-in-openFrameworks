//
//  Walker.cpp
//  00-Intro__01-Random-walker-down-right
//
//  Created by Torbjørn Vik Lunde on 07/04/2019.
//

#include "Walker.hpp"

Walker::Walker() {
    reset();
}

void Walker::reset() {
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2 ;
}

void Walker::updateAndDraw() {
    auto r = ofRandom(1);
    
    if (r < 0.28) x++;
    else if (r < 0.56) y++;
    else if (r < 0.75) x--;
    else y--;
    
    ofDrawRectangle(x, y, 1, 1);
}

