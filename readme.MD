Kinect4ArakawaTomonori
======================

Fork from git://github.com/hagino3000/Kinect4ArakawaTomonori.git 
I love that plug in so I've try to update it into the latest version of openFrqmeworks
I am not a really good coder so,
My version is not as good as the original one

I try to install ofxUI and ofxGUI but it does have some diplay bug for some reason
test on OSX

Addons
	ofxBox2d
	ofxKinect
	ofxOpenCv
	ofxXmlSettings

To compile
	open terminal

	cd $ofxRoot/apps/Kinect4ArakawaTomonori
	make
	make RunRelease


Many thanks to the autor
https://github.com/hagino3000/

I still plan to work on it a little more

============================================


Kinect4ArakawaTomonori
======================

You can play this interaction using mac and Kinect.

Demo
----
See on Youtube
  http://www.youtube.com/watch?v=jt69ilMVN-c

Screen shot
  .. image:: http://hagino3k.appspot.com/img/arakawa/sc3.png
     :scale: 50%
  

How to build
------------
This application tested on MacOSX only.

Get a Kinect

1. Buy it!!
2. Connect your mac with USB connector.

Get OpenFrameworks

1. git clone git://github.com/openframeworks/openFrameworks.git

Deploy this source

1. cd $ofxRoot/apps/examples
2. git clone git://github.com/hagino3000/Kinect4ArakawaTomonori.git 

Get Box2d for openFrameworks

1. cd $ofxRoot/addon
2. Get box2d addon from http://code.google.com/p/vanderlin/downloads/list

Open Project by xcode

1. open arakawaVision.xcodeproj
2. Build and Run

note
----

This program used following libraries. And license files are placed at Resources directory.

libfreenect
  Great works by OpenKinect project.  https://github.com/OpenKinect/libfreenect
OpenCV
  via http://opencv.willowgarage.com/wiki/
openFrameworks 
  via http://www.openframeworks.cc/
ofxKinect 
  via ofTheo(https://github.com/ofTheo/ofxKinect)
ofxBox2d 
  via Vanderlin (http://code.google.com/p/vanderlin/)
ofxSimpeGuiToo 
  via The Mega Super Awesome Visuals Company

  
Contact
-------
Twitter `@hagino3000`__

__ http://twitter.com/hagino3000
