#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    
    wind.x = 0.01;
    wind.y = 0;
    
    gravity.x = 0;
    gravity.y = 0.1;
    
    edgeForceSize = 150;
}

//--------------------------------------------------------------
void testApp::update(){
    mover.applyForce(wind);
    mover.applyForce(gravity);
    
    edgeForce *= 0;
    if (mover.location.y + edgeForceSize > ofGetHeight()) {
        edgeForce.y = -(mover.location.y / ofGetHeight());
    }
    else if (mover.location.y - edgeForceSize < 0) {
        edgeForce.y = mover.location.y / ofGetHeight();
    }
    
    if (mover.location.x + edgeForceSize > ofGetWidth()) {
        edgeForce.x = -(mover.location.x / ofGetWidth());
    }
    else if (mover.location.x - edgeForceSize < 0) {
        edgeForce.x = mover.location.x / ofGetWidth();
    }
    
    mover.applyForce(edgeForce);
    
    mover.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    mover.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

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
