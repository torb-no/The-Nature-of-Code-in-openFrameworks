//
//  Ball.hpp
//  02-Forces__03-Wall-push-force
//
//  Created by Torbjørn Vik Lunde on 15/09/2019.
//

#ifndef Ball_hpp
#define Ball_hpp

#include "ofMain.h"

class Ball {

    
public:
    glm::vec2 location;
    glm::vec2 velocity;
    glm::vec2 acceleration;
    
    glm::vec2 sumForces;
    float mass;
    
    ofColor color;
    
    Ball();
    void update();
    void draw();
    void applyForce(glm::vec2 force);
    
};

#endif /* Ball_hpp */
