#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	float x = 2;
	float polinom = 17*x*x*x - 15*x*x + 5*x - 11;

	cout << polinom << endl;

	x=-3.5;
	polinom = 17*x*x*x - 15*x*x + 5*x - 11;

	cout << polinom << endl;
	return 0;
}