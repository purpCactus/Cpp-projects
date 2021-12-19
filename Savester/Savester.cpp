#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int WelMenu()
{
	int choice;
	cout << "Hi Again! :)...Wellcome to Savester...'You can trust us with your files'..." << endl;
	cout << "	Do you want to \n		1.Add to Previous File\n		2.Overwrite on Previous File\n		3.Exit\n	> ";
	cin >> choice;
	system("cls");
	return choice;
}

void Append()
{
	int choice, num;
	float grd;
	string name;
	cout << "Enter the number of students: ";
	cin >> num;
	ofstream Grades("Grades.txt", ios::app);
	if (Grades)
	{
		cout << "\nFile Opened successfuly! you can now save your data safely :)..." << endl << endl;
		for (int i = 0;i < num;i++)
		{
			cin.ignore();
			cout << "Enter the name of the student : ";
			getline(cin, name);
			Grades << name << "		";
			cout << "Enter the student's grades : ";
			for (int i = 0;i < 3;i++)
			{
				cin >> grd;
				if (grd > 0)
					Grades << grd << " ";
				else
				{
					cout << "\nPlease Enter a Positive Numeber To Proceed." << endl;
					i--;
				}
			}
			Grades << endl;
		}
		cout << "\nData Saved Successfuly\n";
		system("pause");
	}
	else cout << "Failed! please restart the program...in case of having further problems contact 'esi.fury11@gmail.com' immediately!";
}

void Truncate()
{
	int choice, num;
	float grd;
	string name;
	cout << "Enter the number of students: ";
	cin >> num;
	ofstream Grades("Grades.txt", ios::trunc);
	if (Grades)
	{
		cout << "\nFile Opened successfuly! you can now save your data safely :)..." << endl << endl;
		for (int i = 0;i < num;i++)
		{
			cin.ignore();
			cout << "Enter the name of the student : ";
			getline(cin, name);
			cout << "Enter the student's grades : ";
			Grades << endl << name << "		";
			for (int i = 0;i < 3;i++)
			{
				cin >> grd;
				if (grd > 0)
					Grades << grd << " ";
				else
				{
					cout << "\nPlease Enter a Positive Numeber To Proceed." << endl;
					i--;
				}
			}
			Grades << endl;
		}
		cout << "\nData Saved Successfuly\n";
		system("pause");
	}
	else cout << "Failed! please restart the program...in case of having further problems contact 'esi.fury11@gmail.com' immediately!";
}
