//
//  Walker.h
//  0_Intro_Exercise_I_5
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#ifndef ____Intro_Exercise_I_5__Walker__
#define ____Intro_Exercise_I_5__Walker__

#include <iostream>
#include "ofMain.h"
#include "ofxGaussian.h"

class Walker {
    
public:
    Walker();
    
    void step();
    void draw();
    
private:
    ofPoint prevPoint;
    ofPoint nextPoint;
    
    ofxGuassian generator;
    
};

#endif /* defined(____Intro_Exercise_I_5__Walker__) */
