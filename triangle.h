#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>
#include "polygone.h"

class Triangle: Polygone
{
public:
	Triangle(std::vector<Point> &vect);
	Triangle(Point a,Point b,Point c);
	double getAire()const;

};
#endif