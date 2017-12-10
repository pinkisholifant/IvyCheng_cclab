#include "ofApp.h"
ofSerial mySerial ;
int myByte ;
//--------------------------------------------------------------
void ofApp::setup(){
	
	ofBackground(0);
//    ofSerial mySerial;
//    mySerial.setup(0, 9600);
    //mySerial.setup(0, 57600);
    int baud = 9600;
//    mySerial.setup(0, baud); //open the first device
    //serial.setup("COM4", baud); // windows example
    //serial.setup("/dev/tty.usbserial-A4001JEC", baud); // mac osx example
    //serial.setup("/dev/ttyUSB0", baud); //linux example
    mySerial.setup("/dev/cu.usbmodem1421", baud);


}

//--------------------------------------------------------------
void ofApp::update(){
//    ofSerial mySerial;
//    mySerial.setup(0, 9600);
//    
//    int myByte = 0;
    if(mySerial.available() > 0) {
        myByte = mySerial.readByte()+2;
        cout<< myByte << endl ;
    }
//    printf("myByte is %d", myByte);


}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofSerial mySerial;
//    mySerial.setup(0, 9600);
//    
//    int myByte = 0;
//    int a=98-myByte;
//    myByte = mySerial.readByte()+2;
//    printf("myByte is %d", myByte);

	
	//set origin 0,0 to center of the screen
	ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
	
	//LISSAJOUS EXAMPLE
	//http://en.wikipedia.org/wiki/Lissajous_curve
	
	ofSetColor(255);
	
	//Lets make the curves out of a series of points
	
	ofPolyline line;
	

	// the frequencies will represent the # of times the curve "bends" in x and y
	
	float xFreq = ofMap( ofGetMouseX(), 0, ofGetWidth(), 0, myByte*100);		// x frequency is tied to mouse x
	float yFreq = ofMap( ofGetMouseY(), 0, ofGetHeight(), 0, myByte*100);		// y frequency is tied to mouse y

	
	// add 1000 points to line
	
	for(int i = 0; i < 1000; i++){
		
		// figure out the percent of this point on the line
		
		float pct = float(i) / 1000.;
		
		// find the x and y of the point based on the sin and cos
		
		float x =  sin( pct * xFreq ) * 900.;	// sin gives (-1, 1) range, so multiply by 1/2 "box" dimensions//900
		float y =  cos( pct * yFreq ) * 500.;//500
		
		line.addVertex(x,y);	// add this point to the curve
	}
	
	// here we draw the curve
	
	line.draw();

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
