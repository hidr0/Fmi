#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int array[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> array[i];
	}
	int counter = 0;
	for (int i = 0; i < n; ++i)
	{
		if(array[i] < 0){
			counter++;
		}
	}
	cout << "The number of negative values = " << counter << endl;
	return 0;
}