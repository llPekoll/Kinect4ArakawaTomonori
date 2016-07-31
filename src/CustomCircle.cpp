/*
 *  CustomCircle.cpp
 *  arakawaVision
 *
 *  Created by Takashi on 11/02/21.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "CustomCircle.h"

void CustomCircle::setRandomColor() {
	fillColor = ofColor();
	fillColor.r = ofRandom(0, 200);
	fillColor.g = ofRandom(180, 255);
	fillColor.b = ofRandom(150, 255);
}

void CustomCircle::draw() {
	if(body == NULL) {
		return;
	}
	
	float radius = getRadius(); 
	glPushMatrix();
	glTranslatef(getPosition().x, getPosition().y, 0);
	ofFill();
	ofSetColor(fillColor.r, fillColor.g, fillColor.b, 50);
	ofCircle(0, 0, radius);
	ofNoFill();
	ofSetColor(fillColor.r, fillColor.g, fillColor.b, 255);
	ofCircle(0, 0, radius);
	ofFill();
	ofSetColor(fillColor.r, fillColor.g, fillColor.b, 150);
	ofCircle(0, 0, radius/3);
	glPopMatrix();
}


void CustomRect::setRandomColor() {
	fillColor = ofColor();
	fillColor.r = ofRandom(150, 255);
	fillColor.g = ofRandom(0, 200);
	fillColor.b = ofRandom(200, 255);	
}

void CustomRect::draw() {
	if(body == NULL) {
		return;
	}

	float width = getWidth();
	float height = getHeight();
	glPushMatrix();
	glTranslatef(getPosition().x,getPosition().y,0);
	ofRotate(getRotation());
	ofFill();
	ofSetColor(fillColor.r,fillColor.g,fillColor.b,50);
	ofDrawRectangle(0,0,width,height);
	ofNoFill();
	ofSetColor(fillColor.r,fillColor.g,fillColor.b,255);
	ofDrawRectangle(0,0,width,height);
	ofFill();
	ofSetColor(fillColor.r, fillColor.g, fillColor.b, 150);
	ofDrawRectangle((width/2)-((width/3)/2), (height/2)-((height/3)/2),width/3,height/3);
	 glPopMatrix();
	
}