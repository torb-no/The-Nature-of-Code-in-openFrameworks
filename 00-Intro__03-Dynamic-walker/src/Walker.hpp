//
//  Walker.hpp
//  00-Intro__03-Dynamic-walker
//
//  Created by Torbjørn Vik Lunde on 07/04/2019.
//

#ifndef Walker_hpp
#define Walker_hpp

#include <stdio.h>
#include "ofMain.h"

class Walker {
public:
    Walker();
    glm::vec2 pos;
    void drawAndUpdate();

};

#endif /* Walker_hpp */
