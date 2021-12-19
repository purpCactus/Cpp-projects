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
