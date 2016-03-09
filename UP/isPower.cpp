#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	bool t = true;
	while(n){
		if (n % 2 == 0){
			n = n%2;
		}else{
			t = false;
			break;
		}
	}
	cout << t << endl;
	return 0;
}