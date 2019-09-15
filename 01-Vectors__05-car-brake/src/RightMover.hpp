//
//  RightMover.hpp
//  01-Vectors__05-car-brake
//
//  Created by Torbjørn Vik Lunde on 07/09/2019.
//

#ifndef RightMover_hpp
#define RightMover_hpp

#include <stdio.h>
#include "ofMain.h"

class RightMover {
    glm::vec2 position;
    glm::vec2 velocity;
    glm::vec2 acceleration;

public:
    RightMover();
    void update();
    void draw();
    
    void steer(float x);
};

#endif /* RightMover_hpp */
