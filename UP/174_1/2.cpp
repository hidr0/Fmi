#include <iostream>
using namespace std;

bool is_our_number(int number){
	int sum = 0;
	for (int i = 1; i < number; ++i)
	{
		if ((number % i) == 0){
			sum += i;
		}
	}
	if (sum == number ){
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int a,b,min,max;
	cin >> a;
	cin >> b;
	if ((a - b) > 0){
		min = b;
		max = a;
	}else{
		min = a;
		max = b;
	}

	for (int i = min; i <= max; ++i)
	{
		if (is_our_number(i)){
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}