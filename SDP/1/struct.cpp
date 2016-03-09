#include <iostream>
#include <cmath>

using namespace std;


struct Coord{
	int x;
	int y;
	void up(){
		x++;
	}
	void print(){
		cout << x << " " << y << endl;
	}
	double dist(Coord c1){
		return sqrt((c1.x - x)*(c1.x - x) + (c1.y - y)*(c1.y - y));
	}
};

double dist(Coord c1,Coord c2){
	return sqrt((c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y - c2.y));
}

int main(){
	Coord c1 = {0,1};
	Coord c2 = {0,0};

	cout << dist(c1,c2) << endl;
	cout << c1.dist(c1) << endl;
	return 0;
}