#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(15);
    pixelBuffer.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_GRAYSCALE);
    ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float xoff = 0.0;
    
    for (int x = 0; x < ofGetWidth(); x++) {
        float yoff = 0.0;
        
        for (int y = 0; y < ofGetHeight(); y++) {
            float bright = ofMap(ofNoise(xoff, yoff, noiseTime), 0, 1, 0, 255);
            pixelBuffer.setColor(x, y, ofColor(bright));
            yoff += yIncrement;
        }
        xoff += xIncrement;
    }
    pixelBuffer.update();
    pixelBuffer.draw(0, 0);
    
    noiseTime += 0.05;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 's') {
        ofImage img;
        img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
        img.save("image.png");
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    xIncrement = ( (float)x / (float)ofGetWidth() ) / 2;
    yIncrement = ( (float)y / (float)ofGetHeight() ) / 2;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
