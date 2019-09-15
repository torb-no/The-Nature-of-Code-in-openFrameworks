#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    auto x = xDist(generator);
    auto y = yDist(generator);
    
    auto hue = hueDist(generator);
    auto color = ofColor::fromHsb(hue, 255, 255);
    ofSetColor(color, 120);
    
    ofDrawCircle(x, y, 20);
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
