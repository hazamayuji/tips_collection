#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    

}

//--------------------------------------------------------------
void ofApp::update(){

    //カメラの向きを常に(0,0,0)へ
    cam.lookAt(ofVec3f(0,0,0));
    cam.setPosition(mouseX-ofGetWidth()/2,mouseY-ofGetHeight()/2, 500);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
     cam.begin();
    
    ofBackground(0,0,0);
    
    ofPushMatrix();
    
    ofTranslate(0,0, -50);
    ofSetColor(0, 0, 250, 50);
    ofDrawRectangle(50, 50, -100, -100);
    ofDrawBitmapString("6", 0, 0);
    ofTranslate(0,0, 50);
    
    ofRotateX(ofGetFrameNum()/2);
    
    ofTranslate(0,0, -50);
    ofSetColor(0, 200, 200, 50);
    ofDrawRectangle(50, 50, -100, -100);
    ofDrawBitmapString("1", 0, 0);
    ofTranslate(0,0, 50);
    
    ofRotateY(ofGetFrameNum()*2);
    
    ofTranslate(0,0, -50);
    ofSetColor(200, 80, 200, 50);
    ofDrawRectangle(50, 50, -100, -100);
    ofDrawBitmapString("2", 0, 0);
    ofTranslate(0,0, 50);
    
    ofRotateY(ofGetFrameNum()/4);

    ofTranslate(0,0, -50);
    ofSetColor(200, 80, 200, 50);
    ofDrawRectangle(50, 50, -100, -100);
    ofDrawBitmapString("3", 0, 0);
    ofTranslate(0,0, 50);
    
    ofRotateY(ofGetFrameNum()*3);

    ofTranslate(0,0, -50);
    ofSetColor(80, 20, 200, 50);
    ofDrawRectangle(50, 50, -100, -100);
    ofDrawBitmapString("4", 0, 0);
    ofTranslate(0,0, 50);
    
    ofRotateX(ofGetFrameNum());
    
    ofTranslate(0,0, -50);
    ofSetColor(80, 200, 80, 50);
    ofDrawRectangle(50, 50, -100, -100);
    ofDrawBitmapString("5", 0, 0);
    ofTranslate(0,0, 50);
    
    
    ofPopMatrix();
    
     cam.end();
    
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
