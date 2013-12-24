//
//  Walker.h
//  0_Intro_Exercise_I_1
//
//  Created by Torbjørn Vik Lunde on 24.12.13.
//
//

#ifndef ____Intro_Exercise_I_1__Walker__
#define ____Intro_Exercise_I_1__Walker__

#include <iostream>
#include "ofMain.h"

class Walker {
    
public:
    Walker();
    
    int x;
    int y;
    
    void step();
    void draw();
};

#endif /* defined(____Intro_Exercise_I_1__Walker__) */
