#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    
    posX = ofRandomWidth();
    posY = ofRandomHeight();
    
    speedX = ofRandom(5, 10);
    speedY = ofRandom(-5, -10);
    
    gravity = 0.5;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    posX += speedX;
    posY += speedY;
    
    speedY += gravity;
    
    if (posX <= 0 || posX >= ofGetWidth()) {
        speedX *= -0.95;
    }
    
    if (posY <= 0) {
        speedY *= -1;
    }
    
    if (posY >= ofGetHeight()) {
        posY = ofGetHeight();
        speedY *= -0.9;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    ofCircle(posX, posY, 10);

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
