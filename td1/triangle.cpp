#include "triangle.h"
#include "segment.h"

Triangle::Triangle(std::vector<Point> vect):Polygone(vect){}

double Triangle::getAire()const{
	std::vector<Point> vect=getListSommet();
	Point a=vect.at(0);
	Point b=vect.at(1);
	Point c=vect.at(2);

	double base=a.distance(b);
	Point midBase=Segment(a,b).middle();
	double hauteur=c.distance(midBase);
	return base*hauteur/2;
}