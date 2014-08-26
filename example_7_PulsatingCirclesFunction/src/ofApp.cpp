#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);

    size = 0;
    maxSize = 50;
    
    //we now have a variable to control how much our circle grows
    increment = 0.5;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    size += increment;
    
    if (size >= maxSize || size <= 0) {
        increment *= -1;
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    
    //call your function in the draw
    drawCircles(10, 10);

}

//--------------------------------------------------------------
void ofApp::drawCircles(int rows, int columns){
    
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            ofCircle(i*(maxSize*2), j*(maxSize*2), size);
        }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
