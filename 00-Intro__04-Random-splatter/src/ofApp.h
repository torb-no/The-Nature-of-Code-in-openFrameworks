#pragma once

#include "ofMain.h"
#include <random>

class ofApp : public ofBaseApp {
    
    float positionStandard = 120;
    std::default_random_engine generator;
    std::normal_distribution<double> xDist;
    std::normal_distribution<double> yDist;
    
    std::normal_distribution<double> hueDist;
    
    public:
    
        ofApp():
            xDist(ofGetWidth()/2, positionStandard),
            yDist(ofGetHeight()/2, positionStandard),
            hueDist(255/2, 30)
        {};

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
};
