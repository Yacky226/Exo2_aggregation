#include "Point.h"
#include<iostream>
Point::Point(double x, double y) :x(x), y(y)
{
	std::cout << "Creation d'un point" << std::endl;
}

Point::Point(Point& P1)
{
	this->x = P1.x;
	this->y = P1.y;
}

void Point::Afficher_Point() const
{
	std::cout << "X: " << this->x << std::endl;
	std::cout << "Y: " << this->y << std::endl;
}

double Point::distance(const Point& P) const
{
	return sqrt(pow(this->x - P.x, 2) + pow(this->y - P.y, 2));
}

void Point::translate(double dx, double dy)
{
	this->x += dx;
	this->y += dy;
}

bool Point::operator==(const Point& P) const
{
	return this->x == P.x && this->y == P.y;
}

Point::~Point()
{
	std::cout << "Entree au Destructeur Point" << std::endl;
	//Destructeur
}
