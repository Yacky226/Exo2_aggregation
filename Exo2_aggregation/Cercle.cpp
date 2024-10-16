#include "Cercle.h"
#include<iostream>
#include<cmath>
const double Cercle::PI = 3.14;

Cercle::Cercle(int id, double r, Point *P) :id(id), rayon(r),centre(P)
{
	
}

void Cercle::Afficher() const
{
	std::cout << "Id :" << this->id << std::endl;
	std::cout << "rayon :" << this->rayon << std::endl;
	this->centre->Afficher_Point();
}


void Cercle::Translate(double x, double y)
{
	this->centre->translate(x, y);
}

void Cercle::UpdateRadius(double R)
{
	this->rayon = R;
}

bool Cercle::operator==(const Cercle& C) const
{
	return this->rayon == C.rayon && this->centre == C.centre;
}

bool Cercle::appart(const Point& P) const
{
	return this->centre->distance(P) <= this->rayon;
}

double Cercle::Surface() const
{
	return PI * pow(this->rayon, 2);
}

double Cercle::Perimetre() const
{
	return 2 * PI * this->rayon;
}

Cercle::~Cercle()
{
	std::cout << "Entree au Destructeur Cercle" << std::endl;
}
