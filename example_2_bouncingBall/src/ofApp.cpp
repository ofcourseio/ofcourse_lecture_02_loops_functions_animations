#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //let's make our background white
    ofBackground(255); //set any color you like here using RGB values or shades of gray using only one alpha value: 0 == black, 255 == white.
    
    //setting initial position for our ball to be in the middle of the screen
    posX = ofGetWidth()*0.5; //this is the same as dividing by 2!
    posY = ofGetHeight()*0.5;
    
    //setting random speeds for X and Y axis
    speedX = ofRandom(-5.0, 5.0);
    speedY = ofRandom(-5.0, 5.0);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //updating positions according to speed
    posX += speedX; //this is the same as saying posX = posX + speedX
    posY += speedY;
    
    //making it bounce of the edges... if the position of the ball is beyond the edges, reverse the speed. Introducing || as "or" sign
    if (posX <= 0 || posX >= ofGetWidth()) {
        speedX *= -1;
    }
    
    if (posY <= 0 || posY >= ofGetHeight()) {
        speedY *= -1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0); //let's make our ball black
    ofCircle(posX, posY, 10);

    //let's draw to the screen our speeds!
    ofDrawBitmapString("speedX:" + ofToString(speedX), 10, 20);
    ofDrawBitmapString("speedY:" + ofToString(speedY), 10, 40);
    
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
