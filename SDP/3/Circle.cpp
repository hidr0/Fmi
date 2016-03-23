#include "Circle.h"
#include <iostream>

Circle::Circle(){
	radius = 0;
}

Point Circle::getCenter() const{
	return center;
}
double Circle::getRadius() const{
	return radius;
}

void Circle::setCenter(Point p){
	this->center = p;
}
void Circle::setCenter(double x, double y){
	center.setX(x);
	center.setY(y);
}

void Circle::setRadius(double r){
	if(r > 0){
		this->radius = r;
	}else{
		this->radius = 0;
	}

}

void Circle::print() const{
	std::cout << center << "Radius = " << radius << std::endl;
}
