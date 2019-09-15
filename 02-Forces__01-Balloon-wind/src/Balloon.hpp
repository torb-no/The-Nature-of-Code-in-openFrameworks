//
//  Balloon.hpp
//  02-Forces__01-Balloon-wind
//
//  Created by Torbjørn Vik Lunde on 14/09/2019.
//

#ifndef Balloon_hpp
#define Balloon_hpp

#include <stdio.h>
#include "ofMain.h"

class Balloon {
    glm::vec2 location;
    glm::vec2 velocity;
    glm::vec2 acceleration;
    glm::vec2 accumulatedForce;
    float radius;
    
public:
    Balloon();
    void update();
    void draw();
    void applyForce(glm::vec2 force);
};

#endif /* Balloon_hpp */
