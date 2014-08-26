#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //let's make our background white
    ofBackground(255); //set any color you like here using RGB values or shades of gray using only one alpha value: 0 == black, 255 == white.
    
    //setting initial position for our circle to be in the middle of the screen
    posX = ofGetWidth()*0.5; //this is the same as dividing by 2!
    posY = ofGetHeight()*0.5;
    
    //let's start with size 0.
    size = 0;
    
    //you can use this commmand to set circle resolution... try very high ones and very low ones... 3, 5, 12, 20, 50, 100
    ofSetCircleResolution(100);
    
    //below is a set of commands you can uncomment to make things more interesting
    
    //ofNoFill(); //you guessed it! Draws only the outlines
    //ofSetBackgroundAuto(false); //this makes the background to NOT erase all previous drawings
    //ofSetLineWidth(0.5); //makes the outline thicker or thinner

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //make our circle grow!
    size++; //this is the same as as saying size += 1 or size = size + 1
    
    //comment the line above and try also other values... 3, 6, 10...
    //size += 10;
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0); //let's make our ball black
    ofCircle(posX, posY, size);

    //let's draw to the screen the size of the circle
    ofDrawBitmapString("size:" + ofToString(size), 10, 20);
    
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
