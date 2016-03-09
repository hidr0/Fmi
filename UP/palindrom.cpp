#include <iostream>

using namespace std;


int main(){
	int n;
	cin >> n;
	int counter = 0;
	int m = n;
	while(m){
		m = m/10;
		counter++;
	}

	if (counter % 2 == 0){
		cout << "Ne moje da e palindrom" << endl;
		return 0;
	}
	cout << counter / 2 << endl;
	int i, del;

	for ( del = 10, i = 0; i < (counter/2); ++i, del = del * 10){
		cout << "n = " << n << endl;
		cout << "del = " << del << endl;
		cout << "n/del = "<< n/del << endl;
		cout << "n\%del = "<< n%del << endl;
		if(n/del != n%del){
			cout << "False" << endl;
			break;
		}
	}
	return 0;
}