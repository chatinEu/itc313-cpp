#include "segment.h"
#include <cmath>


Segment::Segment(Point a,Point b):_pointA(a),_pointB(b){}
Segment::Segment(float xa,float ya,float xb,float yb){
	_pointA=Point(xa,ya);
	_pointB=Point(xb,yb);
}

double Segment::getLength()const{
	double dx=_pointA.x()-_pointB.x();
	dx*=dx;
	double dy=_pointA.y()-_pointB.y();
	dy*=dy;
	return (double)(sqrt(dx+dy));
}

Point Segment::middle()const{
	double x=_pointA.x()+_pointB.x();
	x/=2;

	double y=_pointA.y()+_pointB.y();
	y/=2;

	return Point(x,y);
}


















void Segment::setA(Point a){
	_pointA=a;
}
void Segment::setB(Point b){
	_pointB=b;
}

Point Segment::getA()const{
	return _pointA;
}
Point Segment::getB()const{
	return _pointB;
}	