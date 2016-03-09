#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int x = 12345;
	bool a = false;
	int odd, even = 0;
	int b,c,d,e,f ;

	odd = 0;
	odd += (((x % 10 ))%2);
	odd += (((x / 10 % 10 ))%2) ;
	odd += (((x / 100 % 10 ))%2) ;
	odd += (((x / 1000 % 10 ))%2) ;
	odd += (((x / 10000 % 10 ))%2) ;
	cout << odd << endl;

	b = ((x % 10 ));
	c = ((x / 10 % 10 ));
	d = ((x / 100 % 10 ));
	e = ((x / 1000 % 10 ));
	f = ((x / 10000 % 10 ));

	b = b * ((b % 2)-1);
	c = c * ((c % 2)-1);
	d = d * ((d % 2)-1);
	e = e * ((e % 2)-1);
	f = f * ((f % 2)-1);
	cout <<( b + c + d + e + f ) * -1 << endl;
	return 0;
}