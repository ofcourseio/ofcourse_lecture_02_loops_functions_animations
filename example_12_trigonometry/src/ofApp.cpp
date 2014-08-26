#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowShape(600, 200);
    ofBackground(127);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofSetColor(255);
    ofCircle(ofGetWidth()/8, 75, radius);
    
    // rotates rectangle around circle
    px = ofGetWidth()/8 + cos(ofDegToRad(angle))*(radius);
    py = 75 + sin(ofDegToRad(angle))*(radius);
    
    ofSetColor(0);
    
    //draw rectangle
    ofRect (px, py, 5, 5);
    ofSetColor(100);
    ofLine(ofGetWidth()/8, 75, px, py);
    ofSetColor(200);
    
    // keep reinitializing to 0, to avoid
    // flashing during redrawing
    angle2 = 0;
    
    // draw static curve - y = sin(x)
    for (int i = 0; i< ofGetWidth(); i++){
        px2 = ofGetWidth()/8 + cos(ofDegToRad(angle2))*(radius);
        py2 = 75 + sin(ofDegToRad(angle2))*(radius);
        ofRect(ofGetWidth()/8+radius+i, py2, 1, 1);
        angle2 -= frequency2;
    }
    
    // send small ellipse along sine curve
    // to illustrate relationship of circle to wave
    ofCircle((ofGetWidth()/8)+radius+x, py, 4);
    angle -= frequency;
    x+=1;
    
    // when little ellipse reaches end of window
    // reinitialize some variables
    if (x>= ofGetWidth()-60) {
        x = 0;
        angle = 0;
    }
    
    // draw dynamic line connecting circular
    // path with wave
    ofSetColor(50);
    ofLine(px, py, ofGetWidth()/8+radius+x, py);
    
    // output some calculations
    ofDrawBitmapString("y = sin x", 35, 185);
    ofDrawBitmapString("px = " + ofToString(px), 115, 185);
    ofDrawBitmapString("py = " + ofToString(py), 225, 185);

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
