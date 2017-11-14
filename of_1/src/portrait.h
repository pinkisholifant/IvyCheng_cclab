//
//  portrait.h
//  portrait
//
//  Created by pinkisholifant on 2017/9/28.
//
//

#pragma once

#include"ofMain.h"

class Portrait{
public:
    
    Portrait();
    
    void update();
    
    void draw();
    
    float radius;
    ofColor color;
    float x;
    float y;
    float dirx,diry;//aka.velocity or speed
    ofVec2f pos;
    ofVec2f dir;
    ofVec2f acc;
    
};
