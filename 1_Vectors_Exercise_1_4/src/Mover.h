//
//  Mover.h
//  1_Vectors_Exercise_1_4
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#ifndef ____Vectors_Exercise_1_4__Mover__
#define ____Vectors_Exercise_1_4__Mover__

#include <iostream>
#include "ofMain.h"

class Mover {
    
public:
    Mover();
    void update();
    void draw();
    
    void checkEdges();
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float topspeed;
    
    void limit(ofVec2f &_velocity, float _max);
};

#endif /* defined(____Vectors_Exercise_1_4__Mover__) */
