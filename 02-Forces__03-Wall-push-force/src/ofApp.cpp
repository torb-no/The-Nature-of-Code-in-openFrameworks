#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofEnableAlphaBlending();
    
    midPoint.x = ofGetWidth() / 2;
    midPoint.y = ofGetHeight() / 2;
    
    pushTreshold.x = ofGetWidth() / 2.5;
    pushTreshold.y = ofGetHeight() / 2.5;
    
    wind.x = 0.01;
    gravity.y = 0.1;
    
    for (int i=0; i<15; i++) {
        Ball b;
        balls.push_back(b);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (auto & b : balls) {
        b.applyForce(gravity);
        b.applyForce(wind);
        
        // Edge forces
        glm::vec2 edgeForces;
        
        auto constexpr edgeMultiplier = 0.005f;
        auto diff = midPoint - b.location;
        if (abs(diff.y) > pushTreshold.y) {
            edgeForces.y = diff.y * edgeMultiplier;
        }
        if (abs(diff.x) > pushTreshold.x) {
            edgeForces.x = diff.x * edgeMultiplier;
        }
        b.applyForce(edgeForces);
        
        b.update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (auto & b : balls) {
        b.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
