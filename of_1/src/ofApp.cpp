#include "ofApp.h"
#include "portrait.h"
#include "portrait.cpp"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    if(mouseY>0){
        ofSetColor(70,32,10);
        ofDrawCircle(100, 100, 100);
    }
    portrait.update();
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(248,215,223);
    ofFill();
    ofSetColor(70,32,10);
    ofDrawRectangle(350,350,300,320);

    ofSetColor(238,189,160);
    ofDrawEllipse(500,350,300,400);
    ofSetColor(44,20,4);
    ofDrawLine(500, 150, 500, 300);
    ofDrawLine(510, 152, 510, 300);
    ofDrawLine(490, 152, 490, 300);
    ofDrawLine(520, 154, 520, 300);
    ofDrawLine(480, 154, 480, 300);
    ofDrawLine(530, 156, 530, 300);
    ofDrawLine(470, 156, 470, 300);
    ofDrawLine(540, 158, 540, 300);
    ofDrawLine(460, 158, 460, 300);
    ofDrawLine(550, 162, 550, 300);
    ofDrawLine(450, 162, 450, 300);
    ofDrawLine(560, 170, 560, 300);
    ofDrawLine(440, 170, 440, 300);
    ofDrawLine(570, 176, 570, 300);
    ofDrawLine(430, 176, 430, 300);
    ofDrawLine(580, 182, 580, 300);
    ofDrawLine(420, 182, 420, 300);
    ofDrawLine(590, 188, 590, 300);
    ofDrawLine(410, 188, 410, 300);
    ofDrawLine(600, 204, 600, 300);
    ofDrawLine(400, 204, 400, 300);
    ofDrawLine(610, 220, 610, 300);
    ofDrawLine(390, 220, 390, 300);
    ofDrawLine(620, 236, 620, 300);
    ofDrawLine(380, 236, 380, 300);
    ofDrawLine(630, 258, 630, 300);
    ofDrawLine(370, 258, 370, 300);
    ofDrawLine(640, 284, 640, 300);
    ofDrawLine(360, 284, 360, 300);
    portrait.draw();
    ofSetColor(202,243,255);
    ofDrawEllipse(500,700,500,300);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    if(mouseY>600){
        ofDrawCircle(100, 100, 100);
    }
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
