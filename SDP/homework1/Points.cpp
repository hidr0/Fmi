#include <iostream>
#include <cmath>

struct Point
{
	double x, y;
};

struct Rectangle
{
	Point first,second;

	void input(){
		std::cout << "Please, enter x1: ";
		std::cin >> first.x;

		std::cout << "Please, enter y1: ";
		std::cin >> first.y;

		std::cout << "Please, enter x2: ";
		std::cin >> second.x;

		std::cout << "Please, enter y2: ";
		std::cin >> second.y;
	}

	void print(){
		std::cout << "The points are (" << first.x << "," << first.y <<"),("<< second.x << "," << second.y << ")" << std::endl;
	}

	void sides(){
		std::cout << "The sides are " << std::abs(first.x - second.x) <<" and "<< std::abs(first.y - second.y) << std::endl;
	}

	void face(){
		std::cout << "The face is " << std::abs(first.x - second.x) * std::abs(first.y - second.y) << std::endl;
	}
};

int main()
{
	Rectangle r;
	r.input();
	r.print();
	r.sides();
	r.face();
	return 0;
}