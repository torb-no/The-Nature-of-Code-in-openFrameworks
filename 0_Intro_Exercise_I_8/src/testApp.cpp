#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup() {
    ofSetFrameRate(15);
    pixelBuffer.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_GRAYSCALE);
    ofSetColor(255);
    generateMap(0.001, 0.001);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    pixelBuffer.draw(0, 0);
}

void testApp::generateMap(float xIncrement, float yIncrement) {
    float xoff;

    
    for (int x = 0; x < ofGetWidth(); x++) {
        float yoff;
        
        for (int y = 0; y < ofGetHeight(); y++) {
            float bright = ofMap(ofNoise(xoff, yoff), inputMin, inputMax, 0, 255);
            pixelBuffer.setColor(x+y*ofGetWidth(), ofColor(bright));
            yoff += yIncrement;
        }
        xoff += xIncrement;
    }
    pixelBuffer.update();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
//    if (key == OF_KEY_UP) inputMax += .1;
    
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
    float xIncrement = (float)mouseX / (float)ofGetWidth();
    float yIncrement = (float)mouseY / (float)ofGetHeight();
    generateMap(xIncrement/10, yIncrement/10);
    
    cout << "x " << xIncrement << endl;
    cout << "y " << yIncrement << endl;
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
