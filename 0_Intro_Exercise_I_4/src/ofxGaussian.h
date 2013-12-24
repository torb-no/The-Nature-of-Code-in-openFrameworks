//
//  ofxGaussian.h
//  0_Intro_Exercise_I_4
//
//  Created by Torbjørn Vik Lunde on 24.12.13.
//
//

#ifndef ____Intro_Exercise_I_4__ofxGaussian__
#define ____Intro_Exercise_I_4__ofxGaussian__

#include <iostream>
#include "ofMain.h"

class ofxGuassian {
    
public:
    float nextGaussian();
    
private:
    bool haveNextNextGaussian = false;
    float nextNextGaussian;
    
};

#endif /* defined(____Intro_Exercise_I_4__ofxGaussian__) */
