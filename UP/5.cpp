#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 965;
	int a,b,c;
	a = x % 10;
	b = x % 100 / 10;
	c = x / 100;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << (a + b + c)/ 3.0 << endl;
	return 0;
}