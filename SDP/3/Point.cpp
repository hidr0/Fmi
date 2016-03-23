#include "Point.h"
#include <iostream>

Point::Point(double x, double y){
	this->x = x;
	this->y = y;
};

Point::Point(){
	this->x = 0;
	this->y = 0;
};

double Point::getX() const{
	return x;
}

double Point::getY() const{
	return x;
}

void Point::setX(double x){
	this->x = x;
}

void Point::setY(double y){
	this->y = y;
}

void Point::print() const{
	std::cout << "( " << this->getX() << " , " << this->getY()<< " )" << std::endl;
}

std::ostream& operator << (std::ostream& out, const Point p){
	out << "( " << p.getX() << " , " << p.getY()<< " )" ;
	return out;
}