#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Rotations.h"
using namespace std;

#define row 3
#define column 3

int main()
{
	int green[row][column] = { {0,0,0},{0,0,0},{0,0,0} }, red[row][column] = { {1,1,1},{1,1,1},{1,1,1} }, blue[row][column] = { {2,2,2},{2,2,2},{2,2,2} }, orange[row][column] = { {3,3,3},{3,3,3},{3,3,3} }, white[row][column] = { {4,4,4},{4,4,4},{4,4,4} }, yellow[row][column] = { {5,5,5},{5,5,5},{5,5,5} };
	int random,rot;
	cout << "How many rotation do you want to perform?" << endl;
	cin >> rot;
	srand((unsigned)time(0));
	for (int i = 0;i < rot;i++)
	{
		random = rand();
		random = 1 + random % 12;
		Rotate(random, white, orange, yellow, green, blue, red);
	}
	Print(white, orange, yellow, green, blue, red);
	system("pause>n");
}


