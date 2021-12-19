#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define row 3
#define column 3

void F(int white[row][column], int orange[row][column], int yellow[row][column], int red[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = white[2][i];
	for (int i = 0;i < 3;i++)
		white[2][i] = orange[i][2];
	for (int i = 0;i < 3;i++)
		orange[i][2] = yellow[0][i];
	for (int i = 0;i < 3;i++)
		yellow[0][i] = red[i][0];
	for (int i = 0;i < 3;i++)
		red[i][0] = temp[i];
}
void F_inverted(int white[row][column], int orange[row][column], int yellow[row][column], int red[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = white[2][i];
	for (int i = 0;i < 3;i++)
		white[2][i] = red[i][0];
	for (int i = 0;i < 3;i++)
		red[i][0] = yellow[0][i];
	for (int i = 0;i < 3;i++)
		yellow[0][i] = orange[i][2];
	for (int i = 0;i < 3;i++)
		orange[i][2] = temp[i];
}
void R(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = green[i][2];
	for (int i = 0;i < 3;i++)
		green[i][2] = yellow[i][2];
	for (int i = 0;i < 3;i++)
		yellow[i][2] = blue[i][0];
	for (int i = 0;i < 3;i++)
		blue[i][0] = white[i][2];
	for (int i = 0;i < 3;i++)
		white[i][2] = temp[i];
}
void R_inverted(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = green[i][2];
	for (int i = 0;i < 3;i++)
		green[i][2] = white[i][2];
	for (int i = 0;i < 3;i++)
		white[i][2] = blue[i][0];
	for (int i = 0;i < 3;i++)
		blue[i][0] = yellow[i][2];
	for (int i = 0;i < 3;i++)
		yellow[i][2] = temp[i];
}
void U(int orange[row][column], int green[row][column], int blue[row][column], int red[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = orange[0][i];
	for (int i = 0;i < 3;i++)
		orange[0][i] = green[0][i];
	for (int i = 0;i < 3;i++)
		green[0][i] = red[0][i];
	for (int i = 0;i < 3;i++)
		red[0][i] = blue[0][i];
	for (int i = 0;i < 3;i++)
		blue[0][i] = temp[i];
}
void U_inverted(int orange[row][column], int green[row][column], int blue[row][column], int red[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = orange[0][i];
	for (int i = 0;i < 3;i++)
		orange[0][i] = blue[0][i];
	for (int i = 0;i < 3;i++)
		blue[0][i] = red[0][i];
	for (int i = 0;i < 3;i++)
		red[0][i] = green[0][i];
	for (int i = 0;i < 3;i++)
		green[0][i] = temp[i];
}
void B(int orange[row][column], int yellow[row][column], int red[row][column], int white[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = orange[i][0];
	for (int i = 0;i < 3;i++)
		orange[i][0] = white[0][i];
	for (int i = 0;i < 3;i++)
		white[0][i] = red[i][2];
	for (int i = 0;i < 3;i++)
		red[i][2] = yellow[2][i];
	for (int i = 0;i < 3;i++)
		yellow[2][i] = temp[i];
}
void B_inverted(int orange[row][column], int yellow[row][column], int red[row][column], int white[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = orange[i][0];
	for (int i = 0;i < 3;i++)
		orange[i][0] = yellow[2][i];
	for (int i = 0;i < 3;i++)
		yellow[2][i] = red[i][2];
	for (int i = 0;i < 3;i++)
		red[i][2] = white[0][i];
	for (int i = 0;i < 3;i++)
		white[0][i] = temp[i];
}
void L(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = white[i][0];
	for (int i = 0;i < 3;i++)
		white[i][0] = blue[i][2];
	for (int i = 0;i < 3;i++)
		blue[i][2] = yellow[i][0];
	for (int i = 0;i < 3;i++)
		yellow[i][0] = green[i][0];
	for (int i = 0;i < 3;i++)
		green[i][0] = temp[i];
}
void L_inverted(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = green[i][0];
	for (int i = 0;i < 3;i++)
		green[i][0] = yellow[i][0];
	for (int i = 0;i < 3;i++)
		yellow[i][0] = blue[i][2];
	for (int i = 0;i < 3;i++)
		blue[i][2] = white[i][0];
	for (int i = 0;i < 3;i++)
		white[i][0] = temp[i];
}
void D(int green[row][column], int red[row][column], int blue[row][column], int orange[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = green[2][i];
	for (int i = 0;i < 3;i++)
		green[2][i] = orange[2][i];
	for (int i = 0;i < 3;i++)
		orange[2][i] = blue[2][i];
	for (int i = 0;i < 3;i++)
		blue[2][i] = red[2][i];
	for (int i = 0;i < 3;i++)
		red[2][i] = temp[i];
}
void D_inverted(int green[row][column], int red[row][column], int blue[row][column], int orange[row][column])
{
	int temp[3];
	for (int i = 0;i < 3;i++)
		temp[i] = green[2][i];
	for (int i = 0;i < 3;i++)
		green[2][i] = red[2][i];
	for (int i = 0;i < 3;i++)
		red[2][i] = blue[2][i];
	for (int i = 0;i < 3;i++)
		blue[2][i] = orange[2][i];
	for (int i = 0;i < 3;i++)
		orange[2][i] = temp[i];
}
void Rotate(int random, int white[row][column], int orange[row][column], int yellow[row][column], int green[row][column], int blue[row][column], int red[row][column])
{
	switch (random)
	{
	case 1:
		F(white, orange, yellow, red);
		break;
	case 2:
		F_inverted(white, orange, yellow, red);
		break;
	case 3:
		R(green, yellow, blue, white);
		break;
	case 4:
		R_inverted(green, yellow, blue, white);
		break;
	case 5:
		U(orange, green, blue, red);
		break;
	case 6:
		U_inverted(orange, green, blue, red);
		break;
	case 7:
		B(orange, yellow, red, white);
		break;
	case 8:
		B_inverted(orange, yellow, red, white);
		break;
	case 9:
		L(green, yellow, blue, white);
		break;
	case 10:
		L_inverted(green, yellow, blue, white);
		break;
	case 11:
		D(green, red, blue, orange);
		break;
	case 12:
		D_inverted(green, red, blue, orange);
		break;
	}
}
void Print(int white[row][column], int orange[row][column], int yellow[row][column], int green[row][column], int blue[row][column], int red[row][column])
{
	
	for (int i = 0;i < row;i++)
	{
		cout << "\t";
		for (int j = 0;j < column;j++)
			cout << white[i][j] << " ";
		cout << endl;
	}
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
			cout << orange[i][j] << " ";
		cout << "\t";
		for (int j = 0;j < column;j++)
			cout << green[i][j] << " ";
		cout << "\t";
		for (int j = 0;j < column;j++)
			cout << red[i][j] << " ";
		cout << "\t";
		for (int j = 0;j < column;j++)
			cout << blue[i][j] << " ";
		cout << endl;
	}
	for (int i = 0;i < row;i++)
	{
		cout << "\t";
		for (int j = 0;j < column;j++)
			cout << yellow[i][j] << " ";
		cout << endl;
	}
}
