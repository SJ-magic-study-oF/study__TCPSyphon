/************************************************************
************************************************************/
#pragma once

/************************************************************
************************************************************/
#include "ofMain.h"
#include "ofxSyphon.h"

/************************************************************
************************************************************/
class ofApp : public ofBaseApp{
private:
	/****************************************
	****************************************/
	enum{
	/*
		WIDTH = 800,
		HEIGHT = 600,
	*/
		WIDTH = 1920,
		HEIGHT = 1080,
	};
	
	/****************************************
	****************************************/
	ofxSyphonServerDirectory dir;
	ofxSyphonClient client;
	ofxSyphonClient client_direct;
	int dirIdx;
	
	bool b_direct;
	
public:
	/****************************************
	****************************************/
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	void serverAnnounced(ofxSyphonServerDirectoryEventArgs &arg);
	void serverUpdated(ofxSyphonServerDirectoryEventArgs &args);
	void serverRetired(ofxSyphonServerDirectoryEventArgs &arg);
};
