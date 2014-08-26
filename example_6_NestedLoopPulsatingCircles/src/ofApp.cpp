#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);

    size = 0;
    
    //we now have a variable to control how much our circle grows
    increment = 0.5;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    size += increment;
    
    if (size >= 50 || size <= 0) {
        increment *= -1;
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    
    //lets make a loop, inside a loop, to draw circles in 2 directions
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            ofCircle(i*100, j*100, size);
        }
    }

    //let's draw to the screen the size of the circle and the increment
    ofDrawBitmapString("size:" + ofToString(size), 10, 20);
    ofDrawBitmapString("increment:" + ofToString(increment), 10, 40);
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
