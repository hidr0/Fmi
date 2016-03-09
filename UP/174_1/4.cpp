#include <iostream>
using namespace std;
bool is_prosto(int number){
	for (int i = 2; i < number; ++i)
	{
		if((number%i) == 0){
			return false;
		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
	for (int i = 10; i < 100; ++i)
	{
		if ( is_prosto( (i%10 + i/10) )){
			cout << i << " " ;
		}
	}
	cout << endl;
	return 0;
}