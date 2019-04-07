//
//  Walker.hpp
//  00-Intro__01-Random-walker-down-right
//
//  Created by Torbjørn Vik Lunde on 07/04/2019.
//

#ifndef Walker_hpp
#define Walker_hpp

#include "ofMain.h"

class Walker {
public:
    Walker();
    
    float x;
    float y;
    
    void updateAndDraw();
    void reset();
};

#endif /* Walker_hpp */
