/*
* @File:    app-main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:25:42
* @Summary: test Point class
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-08 11:12:05
*/

#include <iostream>
#include "point.h"
#include "segment.h"
#include "triangle.h"
#include <vector>



int main()
{
    Point a=Point();
    Point b=Point(5,2);
    Segment seg=Segment(a,b);
    
    std::cout<< "seg créé\n";
    seg.setA(Point(6,5));
    std::cout<<std::to_string(seg.getLength())<<std::endl;

    std::cout<<"mid = "<<seg.middle().toString()<<std::endl;

    std::vector<Point> vect;
    vect.push_back(Point(2,2));
    vect.push_back(Point(2,4));
    vect.push_back(Point(5,3.2));
    Triangle tri(vect);
    std::cout<<std::to_string(tri.getAire())<<std::endl;



    return 0;
}