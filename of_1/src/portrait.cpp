//
//  portrait.cpp
//  portrait
//
//  Created by pinkisholifant on 2017/9/28.
//
//

#include "portrait.h"
Portrait::Portrait(){
    //ofBackground(0);
    pos.x=ofRandom(0,ofGetWidth()-radius);
    pos.y=ofRandom(0,ofGetHeight()-radius);
    dir.x=10;
    dir.y=10;
    //acc=ofVec2f(0,1);//gravity
    
}
void Portrait::update(){
    
//    acc.y= ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 1);
//    //dir+=acc;
//    pos+=dir;
//    //    pos.x+=dir.x;
//    //
//    //    pos.y+=dir.y;
//    
//    
//    
//    
//    if (pos.x<=radius || pos.x >= ofGetWidth()-radius){
//        dir.x=-1*dir.x;
//        
//    }
//    if (pos.y<=radius || pos.y >= ofGetHeight()-radius){
//        dir.y=-1*dir.y;
//        
//    }
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        color=ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    }
    
    
}
void Portrait::draw(){
    ofSetColor(color);
    ofDrawCircle(425, 380, radius);
    radius=30;
    //color=ofColor(ofRandom(255),0,255);
    ofSetColor(color);
    ofDrawCircle(575, 380, radius);
    
}
