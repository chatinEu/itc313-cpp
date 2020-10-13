
#ifndef POLYGONE_H
#define POLYGONE_H
#include <vector>
#include "point.h"
class Polygone
{

public:
	Polygone(std::vector<Point> &vect);
	std::vector<Point> getListSommet()const;
	void setListSommet(std::vector<Point> &vect);

private:
	std::vector<Point> listSommet;



};





#endif