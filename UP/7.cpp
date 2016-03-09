#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,z;
	x = z = -1;
	y = -5;
	if ((x > 0) || (y > 0) || (z >0)){
		cout << "true 1" << endl;
	}else if ((x >= 2) && (x <= 4)){
		cout << "true 2" << endl;
	}else if ((y <= -4) || (x >= 2)){
		cout << "true 3" << endl;
	}else{
		cout << false << endl;
	}
	return 0;
}