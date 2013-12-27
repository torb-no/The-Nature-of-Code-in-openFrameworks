//
//  RightMover.h
//  1_Vectors_Exercise_1_5
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#ifndef ____Vectors_Exercise_1_5__RightMover__
#define ____Vectors_Exercise_1_5__RightMover__

#include <iostream>
#include "ofMain.h"

class RightMover {
    
public:
    RightMover();
    void update();
    void draw();
    
    void checkEdges();
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float topspeed;
    float limit(float value, float min, float max);
};

#endif /* defined(____Vectors_Exercise_1_5__RightMover__) */
