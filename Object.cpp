//#include "stdafx.h"
#include "Object.h"

Object::Object()
{
	//set values for default constructor
	setType("Object");
	setColor(Scalar(0, 0, 0));

}

Object::Object(string name) {

	setType(name);

	if (name == "light blue") {

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(84, 135, 77));
		setHSVmax(Scalar(109, 256, 256));

		//BGR value for Blue:
		setColor(Scalar(255, 255, 255));

	}
	if (name == "light green") {

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(44, 56, 16));
		setHSVmax(Scalar(70, 256, 256));

		//BGR value for Green:
		setColor(Scalar(255, 255, 255));

	}
	if (name == "yellow") {

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(19,165,154));
		setHSVmax(Scalar(47,256,256));

		//BGR value for Yellow:
		setColor(Scalar(255, 255, 255));

	}
	if (name == "red") {

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,163,186));
		setHSVmax(Scalar(11,256,256));

		//BGR value for Red:
		setColor(Scalar(255, 255, 255));

	}
	if (name == "dark blue") {

		setHSVmin(Scalar(105,167,151));
		setHSVmax(Scalar(126, 256 ,217));


		setColor(Scalar(255, 255, 255));

	}
	if (name == "normal green") {

		setHSVmin(Scalar(28,200,68));
		setHSVmax(Scalar(88,256,82));


		setColor(Scalar(255, 255, 255));

	}
	if (name == "dark green") {

		setHSVmin(Scalar(58, 230, 54));
		setHSVmax(Scalar(91,256,82));


		setColor(Scalar(255, 255, 255));

	}
	if (name == "purple") {

		setHSVmin(Scalar(128,16,161));
		setHSVmax(Scalar(158,77,256));


		setColor(Scalar(255, 255, 255));

	}


}

Object::~Object(void)
{
}

int Object::getXPos() {

	return Object::xPos;

}

void Object::setXPos(int x) {

	Object::xPos = x;

}

int Object::getYPos() {

	return Object::yPos;

}

void Object::setYPos(int y) {

	Object::yPos = y;

}

Scalar Object::getHSVmin() {

	return Object::HSVmin;

}
Scalar Object::getHSVmax() {

	return Object::HSVmax;
}

void Object::setHSVmin(Scalar min) {

	Object::HSVmin = min;
}


void Object::setHSVmax(Scalar max) {

	Object::HSVmax = max;
}
