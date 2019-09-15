//
//  Walker.cpp
//  00-Intro__03-Dynamic-walker
//
//  Created by Torbjørn Vik Lunde on 07/04/2019.
//

#include "Walker.hpp"

Walker::Walker() {
    pos.x = ofGetWidth() / 2;
    pos.y = ofGetHeight() / 2;
}

void Walker::drawAndUpdate() {
    glm::vec2 mouse{ ofGetMouseX(), ofGetMouseY() };
    auto diff = mouse - pos;
    diff *= 0.001;
    
    for (auto i=0; i<15; i++) {
        pos.x += ofRandom(-1 + diff.x, 1 + diff.x);
        pos.y += ofRandom(-1 + diff.y, 1 + diff.y);
        
        ofDrawRectangle(pos, 1, 1);
    }
}
