#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    rightMover.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    rightMover.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_UP) {
        rightMover.steer(0.333f);
    }
    else if (key == OF_KEY_DOWN) {
        rightMover.steer(-1.f);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    rightMover.steer(0);
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
