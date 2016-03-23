#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point
{
	public:
		Point();
		Point(double, double);
		double getX() const;
		double getY() const;
		void setX(double);
		void setY(double);
		void print() const;
	private:
	double x,y;
};

std::ostream& operator << (std::ostream&, const Point );

#endif