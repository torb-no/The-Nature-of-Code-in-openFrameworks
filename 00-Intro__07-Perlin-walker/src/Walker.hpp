//
//  Walker.hpp
//  00-Intro__07-Perlin-walker
//
//  Created by Torbjørn Vik Lunde on 03/08/2019.
//

#ifndef Walker_hpp
#define Walker_hpp

#include "ofMain.h"

class Walker {
    
    glm::vec2 prevPos;
    glm::vec2 nextPos;
    
    float xOffset;
    float yOffset;
    
public:
    Walker():
        prevPos(ofGetWidth()/2, ofGetHeight()/2),
        nextPos(ofGetWidth()/2, ofGetHeight()/2),
        xOffset(ofRandom(0, 100000)),
        yOffset(ofRandom(0, 100000))
    {
        srand(time(NULL));
    };
    
    void step();
    void draw();
    
};

#endif /* Walker_hpp */
