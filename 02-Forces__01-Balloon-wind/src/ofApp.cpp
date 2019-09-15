#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetCircleResolution(30);
    
    updrift.y = -0.002;
    
    srand(time(NULL));
    windNoiseOffset.x = ofRandom(10000);
    windNoiseOffset.y = ofRandom(10000);
}

//--------------------------------------------------------------
void ofApp::update(){
    windNoiseOffset += 0.01;
    wind.x = ofMap(ofNoise(windNoiseOffset.x), 0, 1, -0.15, 0.15);
    wind.y = ofMap(ofNoise(windNoiseOffset.y), 0, 1, -0.007, 0.003);
    
    balloon.applyForce(wind);
    balloon.applyForce(updrift);
    
    balloon.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    balloon.draw();
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
