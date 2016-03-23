#include "Point.h"
#include "Circle.h"
#include <iostream>

int main(int argc, char const *argv[])
{

	Point p;
	std::cout << p << p << std::endl;

	Circle c;
	c.print();
	return 0;
}