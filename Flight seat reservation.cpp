#include <iostream>
using namespace std;

int MainMenu();
int FirstMenu(bool &flagfirst);
int SecondMenu(bool &flagsecond);
void OutPutMenu(int, bool, int, bool);

int seat[9] = { 0 };

int main()
{
	int choice = -1;
	bool bFirst = false, bSecond = false;
	int iFirst = 0, iSecond = 0;

	for (;choice != 3;)
	{
		choice = MainMenu();
		switch (choice) {
		case 1:
			iFirst = FirstMenu(bFirst);//function invocation
			break;
		case 2:
			iSecond = SecondMenu(bSecond);
			break;
		}

	}
	return 0;
}

int MainMenu()
{
	int selectbuf = -1,a, i = 0,j=0;
	bool bsecond, bfirst;
	system("cls");
	cout << "Please type 1 for 'first class'" << endl;
	cout << "Please type 2 for 'economy'" << endl;
	cout << "3-Exit		" << endl;
	for (i;i < 5;i++)
	{
		cout << seat[i]<<'\t';
	}
	cout << "first class section" << endl;
	for (i;i < 10;i++)
	{
		cout << seat[i] << '\t';
	}
	cout << "economy section" << endl<<endl;
	cout << "Choose a Section : ";
	cin >> selectbuf;
	if (selectbuf == 1)
	{
		for (i = 0;i < 5;i++)
		{
			if (seat[i] == 1)
				j++;
		}
		if (j == 5) 
		{
			cout << "This Section is Full Do You Want To Reserve a Seat in Economy Section? 1.Yes    2.No  "<<endl;
			cin>>a;
			if (a == 1)
			{
				SecondMenu(bsecond);
				selectbuf = -1;	
			}
			else
			{
				cout << "Next Flight Leaves in 3 Hours... " << endl;
				system("pause");
				MainMenu();
			}
		}
	}
	if (selectbuf == 2)
	{
		for (i = 5;i < 10;i++)
		{
			if (seat[i] == 1)
				j++;
		}
		if (j == 5)
		{
			cout << "This Section is Full Do You Want To Reserve a Seat in Firat Class Section? 1.Yes    2.No  " << endl;
			cin >> a;
			if (a == 1)
			{
				selectbuf = 0;
				FirstMenu(bfirst);

			}
			else
			{
				cout << "Next Flight Leaves in 3 Hours... "<<endl;
				system("pause");
				MainMenu();
			}
		}


	}
	//system("pause");
	return selectbuf;
}

int FirstMenu(bool &flagfirst)
{
	int i;
	system("cls");
	cout << "Please Enter Your Desired Seat Number From 1 to 5 : ";
	cin >> i;
	if (seat[i-1] == 0)
	{
		flagfirst = true;
		seat[i - 1] = 1;
		return i - 1;
	}
	else cout << "This Seat is Taken"<<endl;
	system("pause");
}

int SecondMenu(bool &flagsecond)
{
	int i;
	system("cls");
	cout << "Please Enter Your Desired Seat Number From 6 to 10 : ";
	cin >> i;
	if (seat[i-1] == 0)
	{
		flagsecond = true;
		seat[i - 1] = 1;
		return i - 1;
	}
	else cout << "This Seat is Taken"<<endl;
	system("pause");
}
