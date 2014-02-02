#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    
    wind.x = 0.01;
    wind.y = 0;
    
    gravity.x = 0;
    gravity.y = 0.1;
    
    edgeForceSize = 100;
    edgeForceMultiplier = 1.5;
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i = 0; i < NBALLS; i++) {
        movers[i].applyForce(wind);
        movers[i].applyForce(gravity);
        
        edgeForce *= 0;
        if (movers[i].location.y + edgeForceSize > ofGetHeight()) {
            edgeForce.y = (movers[i].location.y / ofGetHeight()) * -edgeForceMultiplier;
        }
        else if (movers[i].location.y - edgeForceSize < 0) {
            edgeForce.y = (movers[i].location.y / ofGetHeight()) * edgeForceMultiplier;
        }
        
        if (movers[i].location.x + edgeForceSize > ofGetWidth()) {
            edgeForce.x = (movers[i].location.x / ofGetWidth()) * -edgeForceMultiplier;
        }
        else if (movers[i].location.x - edgeForceSize < 0) {
            edgeForce.x = (movers[i].location.x / ofGetWidth()) * edgeForceMultiplier;
        }
        
        movers[i].applyForce(edgeForce);
        
        movers[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i = 0; i < NBALLS; i++) {
        movers[i].draw();
    }
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
