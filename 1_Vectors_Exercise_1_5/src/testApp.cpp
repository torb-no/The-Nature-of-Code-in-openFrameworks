#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void testApp::update(){
    rightMover.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    rightMover.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {
    if (key == OF_KEY_UP) {
        rightMover.acceleration.x = .33;
    }
    else if (key == OF_KEY_DOWN) {
        rightMover.acceleration.x = -1;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key) {
    rightMover.acceleration.x = 0;
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
