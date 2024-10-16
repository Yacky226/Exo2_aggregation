#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point(double x = 0.0, double y = 0.0);
	Point(Point&);
	void Afficher_Point()const;
	double distance(const Point&) const;
	void translate(double dx, double dy);
	bool operator==(const Point&)const;
	~Point();
};

