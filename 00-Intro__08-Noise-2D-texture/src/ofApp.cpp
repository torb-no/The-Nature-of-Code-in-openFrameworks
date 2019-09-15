#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(15);
    pixelBuffer.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_GRAYSCALE);
    ofSetColor(255);
    generateMap(0.001, 0.001);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    pixelBuffer.draw(0, 0);
}

void ofApp::generateMap(float xIncrement, float yIncrement) {
    float xoff = 0.0;
    
    for (int x=0; x<ofGetWidth(); x++) {
        float yoff = 0.0;
        
        for (int y=0; y<ofGetHeight(); y++) {
            float bright = ofMap(ofNoise(xoff, yoff), 0, 1, 0, 255);
            pixelBuffer.setColor(x, y, ofColor(bright));
            yoff += yIncrement;
        }
        xoff += xIncrement;
    }
    pixelBuffer.update();
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
    float xIncrement = (float)mouseY / (float)ofGetWidth() / 10.0f;
    float yIncrement = (float)mouseX / (float)ofGetHeight() / 10.f;
    generateMap(xIncrement, yIncrement);
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
