//
#include "Particle.hpp"
int a=125;
Particle::Particle()
{
	lifespan = 5.; // seconds
}

Particle::Particle(ofVec3f _pos)
{
	pos = _pos;
	vel.x = ofRandom(-2, 2);
	vel.y = ofRandom(-2, 2);
	lifespan = 2.;
    
}

void Particle::applyForce(ofVec3f force){
	acc += force;
}

void Particle::update(float timeDiff){ // how much time has passed since last frame?
	//vel += acc;
	pos += vel;
    if(pos.x < 0 || pos.x > ofGetWidth()){
        vel.x *= -1;
    }
    if(pos.y < 0 || pos.y > ofGetHeight()){
        vel.y *= -1;
    }
	acc *= 0;
    a=a-5;
    
	
	lifespan -= timeDiff;
	if (lifespan < 0.) lifespan = 0.;
}
void star(float x, float y, float radius1, float radius2, int npoints) {
    float angle = TWO_PI / npoints;
    float halfAngle = angle/2.0;
    ofBeginShape();
    for (float a = 0; a < TWO_PI; a += angle) {
        float sx = x + cos(a) * radius2;
        float sy = y + sin(a) * radius2;
        ofCurveVertex(sx, sy);
        sx = x + cos(a+halfAngle) * radius1;
        sy = y + sin(a+halfAngle) * radius1;
        ofCurveVertex(sx, sy);
    }
    ofEndShape();
}

void Particle::draw(){
	ofPushStyle();
	float hue = ofMap(lifespan, 0., 3., 0, 255);
    if(a < 0){
        a = 125;
    }
	ofSetColor(255,136,50,a);
    //ofSetColor(125,50,30);
	//ofDrawCircle(pos, 5);
    star(pos.x,pos.y, 10, 20, 7);
	ofPopStyle();
}

