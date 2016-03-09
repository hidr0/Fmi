#include <iostream>
using namespace std;

int plus(int matrix1[] ,int matrix2[] , int n){
	int returnMatrix[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			returnMatrix[i][j] = matrix1[i][j] + matrix2[i][j]
		}
	}
	return returnMatrix;
}

void print(int m1, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			count << m1[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int a[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int b[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int n = 3;
	int returnMatrix[n][n];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			returnMatrix[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << returnMatrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}