#pragma once

#include "ofMain.h"
#include "BgEffect.h"
#include "ofxBox2d.h"
#include "CustomCircle.h"

#include "ofxKinect.h"
#include "ofxOpenCv.h"





class KinectTest : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void exit();

		void keyPressed(int key);
		
		void drawBackground();

		void checkDepthUpdated();
	
        void drawPointCloud();
        void drawHands();


		void drawTitleScene();
		void drawPlayScene();


		void createBox2dObjects(float x,float y);
		void drawBox2dObjects();

		// Kinect
		ofxKinect kinect;
        int angle;

		ofxCvGrayscaleImage		binaryImage;
		ofxCvColorImage			colorImage;
        ofxCvGrayscaleImage 	grayImage;
		ofxCvGrayscaleImage		checkGrayImage;
        ofxCvContourFinder 		contourFinder;

        float				pointClowdRotate;

		
        int 				nearThreshold;
        int					farThreshold;

 

		// mode controll
		int					sceneNum; // 0:title, 1:play
		bool				useCameraImage;
        bool				showFullScreen;
        bool				debug;


		// for background
        float				backgroundPosition;
        float				drawPointCloudSize;
        vector <BgEffect *> bgEffects;

 
       // Box 2D
        ofxBox2d box2d;
        vector <ofxBox2dCircle *> box2dCircles;
        vector <ofxBox2dRect *> box2dRects;

        vector <ofxBox2dCircle *> contorParticles;

        vector    <shared_ptr<ofxBox2dRect> >   boxes;   

        //fonts
        ofTrueTypeFont		msgFont;

        // for timer
		int					detectingTime;
		bool				hasHuman;




		
};
