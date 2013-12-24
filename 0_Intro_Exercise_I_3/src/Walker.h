//
//  Walker.h
//  0_Intro_Exercise_I_3
//
//  Created by Torbjørn Vik Lunde on 24.12.13.
//
//

#ifndef ____Intro_Exercise_I_3__Walker__
#define ____Intro_Exercise_I_3__Walker__

#include <iostream>
#include "ofMain.h"

class Walker {
    
public:
    Walker();
    
    int x;
    int y;
    
    void step();
    void draw();
    
    float mouseX;
    float mouseY;
};

#endif /* defined(____Intro_Exercise_I_3__Walker__) */
