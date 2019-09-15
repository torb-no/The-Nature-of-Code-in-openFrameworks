//
//  Walker.hpp
//  00-Intro__05-Guassian-walker
//
//  Created by Torbjørn Vik Lunde on 03/08/2019.
//

#ifndef Walker_hpp
#define Walker_hpp

#include "ofMain.h"
#include <random>

class Walker {
    
    glm::vec2 prevPos;
    glm::vec2 nextPos;
    std::default_random_engine generator;
    std::normal_distribution<double> normDist;
  
public:
    Walker():
        prevPos(ofGetWidth()/2, ofGetHeight()/2),
        nextPos(ofGetWidth()/2, ofGetHeight()/2),
        normDist(20, 2)
    {};
    
    void step();
    void draw();

};

#endif /* Walker_hpp */
