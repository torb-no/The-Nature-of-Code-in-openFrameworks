//
//  Mover.h
//  1_Vectors_Exercise_1_8
//
//  Created by Torbjørn on 22.01.14.
//
//

#ifndef ____Vectors_Exercise_1_8__Mover__
#define ____Vectors_Exercise_1_8__Mover__

#include <iostream>
#include "ofMain.h"

class Mover {
    
public:
    Mover();
    void update();
    void draw();
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    
    ofBaseApp* parent;
    
    float highest;
};

#endif /* defined(____Vectors_Exercise_1_8__Mover__) */
