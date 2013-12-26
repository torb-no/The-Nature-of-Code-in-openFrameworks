#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup() {
    ofSetFrameRate(30);
    pixelBuffer.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_GRAYSCALE);
    ofSetColor(255);
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    float xoff;
    
    for (int x = 0; x < ofGetWidth(); x++) {
        float yoff;
        
        for (int y = 0; y < ofGetHeight(); y++) {
            float bright = ofMap(ofNoise(xoff, yoff, noiseTime), inputMin, inputMax, 0, 255);
            pixelBuffer.setColor(x+y*ofGetWidth(), ofColor(bright));
            yoff += yIncrement;
        }
        xoff += xIncrement;
    }
    pixelBuffer.update();
    pixelBuffer.draw(0, 0);
    
    noiseTime += 0.05;
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch (key) {
        case OF_KEY_UP:
            inputMax += .1;
            break;
        case OF_KEY_DOWN:
            inputMax -= .1;
            break;
        case OF_KEY_RIGHT:
            inputMin += .1;
            break;
        case OF_KEY_LEFT:
            inputMin -= .1;
            break;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    xIncrement = ( (float)x / (float)ofGetWidth() ) / 2;
    yIncrement = ( (float)y / (float)ofGetHeight() ) / 2;
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
