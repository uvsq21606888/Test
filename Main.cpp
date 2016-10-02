#include<stdio.h>
#include "Point.h"
#include "Segment.h"

void exp01(){

	Point p1(10,15),p2(15,20),p3;

	p1.afficher();
	p3=p1+p2;
	p3.afficher();


	Segment s1(p1,p2);
	int l=s1.longueur();
	printf("longuer : %d",l);


}

void main(){

	exp01();

	//printf("Fin du programme\n");
	getchar();


}