#pragma once

#include "ofMain.h"
#define MARGIN 50

class testApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();
	
    int frameCount = 0;
    
    float theta;
    float radi;
    float rmulti;
    float hue;
    
    void spiralingCircles();
    void randomizePos(float r);
    void circleCircle(float ellipseSize);
    
    ofVec2f pos;
    ofVec2f rndPos;
};
