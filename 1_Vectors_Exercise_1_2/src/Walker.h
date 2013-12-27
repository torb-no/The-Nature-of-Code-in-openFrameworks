//
//  Walker.h
//  1_Vectors_Exercise_1_2
//
//  Created by Torbjørn Vik Lunde on 27.12.13.
//
//

#ifndef ____Vectors_Exercise_1_2__Walker__
#define ____Vectors_Exercise_1_2__Walker__

#include <iostream>
#include "ofMain.h"

class Walker {
    
public:
    Walker();
    
    ofPoint position;
    
    void step();
    void draw();
};

#endif /* defined(____Vectors_Exercise_1_2__Walker__) */
