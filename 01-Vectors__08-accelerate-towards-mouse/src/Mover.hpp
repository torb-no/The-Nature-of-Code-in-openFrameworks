//
//  Mover.hpp
//  01-Vectors__08-accelerate-towards-mouse
//
//  Created by Torbjørn Vik Lunde on 13/09/2019.
//

#ifndef Mover_hpp
#define Mover_hpp

#include <stdio.h>
#include "ofMain.h"

class Mover {
    glm::vec2 position;
    glm::vec2 velocity;
    glm::vec2 acceleration;
    
    glm::vec2 mouse;
    
public:
    Mover();
    void update();
    void draw();
    void mouseMoved(int x, int y);
};

#endif /* Mover_hpp */
