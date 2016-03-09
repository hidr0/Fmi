#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int x = 965;
	int a,b,c;
	a = 5;
	b = 12;
	c = 13;
	int p = ((a+b+c)/2);
	cout << sqrt( p*(p-a)*(p-b)*(p-c) ) << endl;
	return 0;
}