#pragma once
#include "Point.h"

class Segment{

private:
	Point p1;
	Point p2;

public:
	Segment();
	Segment(Point p1,Point p2);
	int longueur();
	//void estHorizontal();
	//void estVertical();
	//void estSurDiagonale();
	//void estCroise(const Segment &);

};