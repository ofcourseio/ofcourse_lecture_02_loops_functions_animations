#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    rotOne = 0;
    rotTwo = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    rotOne += 1;
    rotTwo += 4;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    
    ofTranslate(ofGetWidth()*0.5, ofGetHeight()*0.5);
    ofCircle(0, 0, 50);
    
    ofRotate(rotOne);
    ofTranslate(230, 0);
    ofCircle(0, 0, 20);
    
    ofRotate(rotTwo);
    ofTranslate(100, 0);
    ofCircle(0, 0, 10);

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
