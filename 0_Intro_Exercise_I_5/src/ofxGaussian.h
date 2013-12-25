//
//  ofxGaussian.h
//  0_Intro_Exercise_I_5
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#ifndef ____Intro_Exercise_I_5__ofxGaussian__
#define ____Intro_Exercise_I_5__ofxGaussian__

#include <iostream>
#include "ofMain.h"

class ofxGuassian {
    
public:
    float nextGaussian();
    float getNormal(float standard, float mean);
    
private:
    bool haveNextNextGaussian = false;
    float nextNextGaussian;
    
};

#endif /* defined(____Intro_Exercise_I_5__ofxGaussian__) */
