//
//  Ball.h
//  1_Vectors_Exercise_1_3
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#ifndef ____Vectors_Exercise_1_3__Ball__
#define ____Vectors_Exercise_1_3__Ball__

#include <iostream>
#include "ofMain.h"

class Ball {
    
public:
    Ball();
    void update();
    void draw();
    ofVec3f space;
    
private:
    ofVec3f position;
    ofVec3f acceleration;
    
    float radius;
};

#endif /* defined(____Vectors_Exercise_1_3__Ball__) */
