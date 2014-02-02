//
//  Mover.h
//  2_Forces_Exercise_2_3
//
//  Created by Torbjørn Vik Lunde on 02.02.14.
//
//

#ifndef ____Forces_Exercise_2_3__Mover__
#define ____Forces_Exercise_2_3__Mover__

#include <iostream>
#include "ofMain.h"

class Mover {
    
public:
    Mover();
    void update();
    void draw();
    void applyForce(ofVec2f force);
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float mass;
    float getRadius();
    
    ofColor color;
};

#endif /* defined(____Forces_Exercise_2_3__Mover__) */
