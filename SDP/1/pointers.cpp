#include <iostream>

using namespace std;

int main(){
	int x = 5;
	int *px = &x;

	cout << x << endl;
	cout << px << endl;
	cout << *px << endl;
	cout << &px << endl;

	void f (int x){
		x++;
	}

	void f (int *x){
		(*x)++;
	}
	void f (int& x){
		x++;
	}
	void f (int x){
		x++;
	}
	return 0;
}