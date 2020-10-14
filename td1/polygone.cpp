#include "polygone.h"

using std::vector;

Polygone::Polygone(vector<Point> vect):listSommet(vect){}


vector<Point> Polygone::getListSommet()const{
	return listSommet;
}

void Polygone::setListSommet(vector<Point> vect){
	listSommet=vect;
}
