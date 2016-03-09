#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int number, curent;
	int sum = 0;
	int prod = 1;
	cin >> number;
	while (number != 0){
		curent = number%10;
		sum += curent;
		prod *= curent;
		number = number/10;
	}

	cout << "The sum is = " << sum << endl;
	cout << "The product is = " << prod << endl;
	return 0;
}