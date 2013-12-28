#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    theta = 0;
    radi = 0;
    rmulti = 0.00001;
    hue = 100;
    
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofSetColor(100, 100, 255, 120);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    // Wait Õtil third frame before drawing (once). Previous frames are cleared by OFÉ
    if (frameCount == 3) {
        pos.x = ofGetWidth() / 2;
        pos.y = ofGetHeight() / 2 + ofGetHeight() / 8;
        spiralingCircles();
    }
    frameCount++;
}

void testApp::spiralingCircles() {
    if (pos.x > ofGetWidth()-MARGIN || pos.y > ofGetHeight()-MARGIN) return;
    
    
    ofSetColor(ofColor::fromHsb(hue, 200, 230), 175);
    
    float radi2 = (radi * radi) * 8;
    float ellipseSize = radi * 3;
    randomizePos(radi2);
    circleCircle(ellipseSize);
    
    theta += 0.01;
    radi += rmulti;
    rmulti += 0.000005;
    hue += 0.075;
    
    pos.x = pos.x + radi * cos(theta);
    pos.y = pos.y + radi * sin(theta);
    
    spiralingCircles();
}

void testApp::circleCircle(float ellipseSize) {
    for (float theta2 = 0; theta2 <= 5.5; theta2 += 1.25) {
        float x = rndPos.x + ellipseSize * cos(theta2);
        float y = rndPos.y + ellipseSize * sin(theta2);
        ofCircle(x, y, ellipseSize/2);
    }
}

void testApp::randomizePos(float r) {
    rndPos.x = pos.x + ofRandom(-r, r);
    rndPos.y = pos.y + ofRandom(-r, r);
}