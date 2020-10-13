
#ifndef SEGMENT_H
#define SEGMENT_H
#include "point.h"
class Segment
{

public:
	Segment(float xa,float ya,float xb,float yb);
	Segment(Point a ,Point b);

	void setA(Point a);
	void setB(Point b);
	Point getA()const;
	Point getB()const;
	double getLength() const;
	Point middle()const;
private:
	Point _pointA,_pointB;
};


#endif // SEGMENT_H