#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class ParticleSystem {
public:
	
	ParticleSystem(){}
	
	ParticleSystem(ofVec3f _pos);
	void update(ofVec3f force, float timeDiff);
	void draw();
	
	vector<Particle> particles;
	ofVec3f pos;
	
	float lifespan;
	
};
