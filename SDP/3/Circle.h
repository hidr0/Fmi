#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle
{
public:

	Circle();

	void print() const;

	Point getCenter() const;
	double getRadius() const;

	void setCenter(Point);
	void setCenter(double = 0, double = 0);

	void setRadius(double);

private:
	Point center;
	double radius;
};

// std::ostream& operator << (std::ostream&, const Point );

#endif