#pragma once
#ifndef _POINT_H
#define _POINT_H

class Point
{
private:
	int x, y;
public:
	Point();
	Point(int x, int y);
	Point(Point &p);

	~Point(void);

	void setX(int x);
	int getX();
	void setY(int y);
	int getY(); // Ligature statique 
	void afficher(); // Ligature dynamique
	void operator =(Point p);
	Point operator +(Point p);
	Point operator -(Point p);
	Point operator *(Point p);
	Point operator /(Point p);
};

#endif