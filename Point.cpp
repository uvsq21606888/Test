#include <stdio.h>
#include "Point.h"


Point::Point(void) {
	printf("Constructeur Point()\n");
	x = 0;
	y = 0;
}

Point::Point(int x, int y) {
	printf("Constructeur Point(%d, %d)\n", x, y);
	this->x = x;
	this->y = y;
}

Point::Point(Point &p) {
	printf("Constructeur de copie Point()\n");
	this->x = p.getX();
	this->y = p.getY();
}

void Point::setX(int x) {
	this->x = x;
}

int Point::getX() {
	return x;
}

void Point::setY(int y) {
	this->y = y;
}

int Point::getY() {
	return y;
}

void Point::afficher() {
	printf("Point(%d, %d)\n", x, y);
}

Point::~Point(void)
{
}

void Point::operator =(Point p) {
	this->x = p.x + 1;
	this->y = p.y + 1;
}

Point Point::operator +(Point p) {
	Point s(x + p.x, y + p.y);
	return s;
}

Point Point::operator -(Point p) {
	Point s(x - p.x, y - p.y);
	return s;
}
	
Point Point::operator *(Point p) {
	Point s(x * p.x, y * p.y);
	return s;
}
	
Point Point::operator /(Point p) {
	int x1, y1;
	if (p.x != 0) x1 = x / p.x;
	else x1 = 0;
	if (p.y != 0) y1 = y / p.y;
	else y1 = 0;
	Point s(x1, y1);
	return s;
}
