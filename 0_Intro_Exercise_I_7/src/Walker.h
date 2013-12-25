//
//  Walker.h
//  0_Intro_Exercise_I_7
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#ifndef ____Intro_Exercise_I_7__Walker__
#define ____Intro_Exercise_I_7__Walker__

#include <iostream>
#include "ofMain.h"
#include <ctime>

class Walker {
    
public:
    Walker();
    
    void step();
    void draw();
    
private:
    ofPoint prevPoint;
    ofPoint nextPoint;
    
    float xOffset;
    float yOffset;
};


#endif /* defined(____Intro_Exercise_I_7__Walker__) */
