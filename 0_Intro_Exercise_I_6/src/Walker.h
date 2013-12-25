//
//  Walker.h
//  0_Intro_Exercise_I_6
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#ifndef ____Intro_Exercise_I_6__Walker__
#define ____Intro_Exercise_I_6__Walker__

#include <iostream>
#include "ofMain.h"

class Walker {
    
public:
    Walker();
    
    void step();
    void draw();
    
private:
    ofPoint prevPoint;
    ofPoint nextPoint;
    float squaredMontecarlo(float size);
};

#endif /* defined(____Intro_Exercise_I_6__Walker__) */
