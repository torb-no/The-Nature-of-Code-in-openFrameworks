//
//  ofxGaussian.cpp
//  0_Intro_Exercise_I_5
//
//  Created by Torbjørn Vik Lunde on 25.12.13.
//
//

#include "ofxGaussian.h"

float ofxGuassian::nextGaussian() {
    if (haveNextNextGaussian){
        haveNextNextGaussian = false;
        return nextNextGaussian;
    }
    else {
        float v1, v2, s;
        do {
            v1 = 2 * ofRandomf() - 1;
            v2 = 2 * ofRandomf() - 1;
            s = v1 * v1 + v2 * v2;
        }
        while (s >= 1 || s == 0);
        
        float multiplier = sqrt(-2 * log(s)/s);
        nextNextGaussian = v2 * multiplier;
        haveNextNextGaussian = true;
        
        return v1 * multiplier;
    }
}


float ofxGuassian::getNormal(float standard, float mean) {
    float num = nextGaussian();
    return standard * num + mean;
}