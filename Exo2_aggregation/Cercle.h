#pragma once
#include "Point.h"
class Cercle
{
private:
	const static double PI;
	int id;
	double rayon;
	Point *centre;
public:
	Cercle(int, double, Point *P);
	void Afficher()const;
	void Translate(double, double);
	void UpdateRadius(double);
	bool operator==(const Cercle&)const;
	bool appart(const Point&)const;
	double Surface() const;
	double Perimetre() const;
	~Cercle();
};

