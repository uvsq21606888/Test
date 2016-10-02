#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Point.h"
#include "Segment.h"


Segment::Segment(){
}

Segment::Segment(Point p1,Point p2){
	this->p1=p1;
	this->p2=p2;
	
}
int Segment::longueur(){

	return p1.getX()+p2.getY();

}