//Niloy Talukder Date:7/27/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// In class Assignment July 24: Adding two three dimensional points.

#include "threedimensionalpoint.h"

ThreeDimensionalPoint::ThreeDimensionalPoint():Point(0,0){
	
	setz(0);
}

ThreeDimensionalPoint::ThreeDimensionalPoint(int xin, int yin, int zin):Point(xin,yin){
	setz(zin);
}

int ThreeDimensionalPoint::getz(){
	return z;
}

void ThreeDimensionalPoint::setz(int zin){
	z = zin;
}

void ThreeDimensionalPoint::addPoints(ThreeDimensionalPoint pointin){
	setx(getx()+pointin.getx());
	sety(gety()+pointin.gety());
	z+=pointin.z;
}
