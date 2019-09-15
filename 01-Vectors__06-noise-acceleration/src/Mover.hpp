//
//  Walker.hpp
//  01-Vectors__06-noise-acceleration
//
//  Created by Torbjørn Vik Lunde on 13/09/2019.
//

#ifndef Walker_hpp
#define Walker_hpp

#include "ofMain.h"

class Mover {
    glm::vec2 noiseOffset;
    
    glm::vec2 position;
    glm::vec2 velocity;
    glm::vec2 acceleration;
    
public:
    Mover();
    void update();
    void draw();
};


#endif /* Walker_hpp */
