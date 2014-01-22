//
//  Mover.h
//  1_Vectors_Exercise_1_6
//
//  Created by Torbjørn on 22.01.14.
//
//

#ifndef ____Vectors_Exercise_1_6__Mover__
#define ____Vectors_Exercise_1_6__Mover__

#include <iostream>
#include "ofMain.h"
#include <ctime>

class Mover {
    
public:
    Mover();
    void update();
    void draw();
    
    void checkEdges();
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    
    void limit(ofVec2f &_velocity, float _max);
    
private:
    float xOffset;
    float yOffset;
    
};


#endif /* defined(____Vectors_Exercise_1_6__Mover__) */
