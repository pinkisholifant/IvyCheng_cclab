#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofBackground(0);
	
	gravity = ofVec2f(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));
	
	lastUpdateTime = ofGetElapsedTimef();

}

//--------------------------------------------------------------
void ofApp::update(){
	
	// time elapsed since last frame
	float timeDiff = ofGetElapsedTimef() - lastUpdateTime;
	
	// update the particle systems
	
	for (int i=0; i<systems.size(); i++)
	{
		systems[i].update(gravity, timeDiff);	// update
	}
		
	lastUpdateTime = ofGetElapsedTimef();

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofBackgroundGradient(ofColor::grey, ofColor::black);
	
	for (int i=0; i<systems.size(); i++)
	{
		systems[i].draw();
	}
	
}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	
	systems.push_back( ParticleSystem(ofVec2f(x,y)) );	// construct new particle system

}

