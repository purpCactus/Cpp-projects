#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

#define row 10
#define col 10

class Society 
{
public:
	int people[row][col] = { 0 }, result[row] = { 0 }, deceased = 0, infected = 0, healthy = 0, days = 0;
	Society();
	~Society();
	void Infect(int);
	void Report();
};

Society::Society() 
{
	ifstream input("matrix.txt");
	for (int i = 0;i < row;i++)
		for (int j = 0;j < col;j++)
			input >> people[i][j];
}

void Society::Infect(int startrow) 
{
	{
		srand((unsigned)time(0));
		for (int j, cnt = 0;cnt < days;cnt++) 
		{
			for (startrow;startrow < row;startrow++)
				for (j = 0;j < col;j++)
					if (people[startrow][j] == 1) 
					{
						result[startrow] = rand() % 11;
					}
			if (startrow == 5)startrow = 0;
		}
	}
}

void Society::Report()
{
	for (int i = 0;i < row;i++) 
	{
		if (result[i] == -1)
			deceased++;
		else if (result[i] == 0)
			healthy++;
		else infected++;
	}
	cout << "\n\t" << "Report:" << endl << "\t\t" << "We are here to inform you that after " << days << " days here are the statistics: " << endl;
	cout << "\t\t" << "Number of HEALTHY  People: " << healthy << "\t:D" << endl;
	cout << "\t\t" << "Number of INFECTED People: " << infected << "\t:(" << endl;
	cout << "\t\t" << "Number of Deceased People: " << deceased << "\t='(" << endl;
}

Society::~Society() {
	ofstream output("report.txt", ios::trunc);
	output << "\n\t" << "Report:" << endl << "\t\t" << "We are here to inform you that after " << days << " days here are the statistics: " << endl;
	output << "\t\t" << "Number of HEALTHY  People: " << healthy << "\t:D" << endl;
	output << "\t\t" << "Number of INFECTED People: " << infected << "\t:(" << endl;
	output << "\t\t" << "Number of Deceased People: " << deceased << "\t='(" << endl;
	output.close();
}

class Person 
{
public:
	bool flag = false;
	int startrow = 0, kill = 0;
	//initialization
	void Initialization(int&);
	void Kill(int[]);
};

void Person::Initialization(int& days) 
{
	//optional initialization
	cout << "Enter The Number of Days: ";
	cin >> days;
	while (!flag)
	{
		cout << "Enter The Desired Number 0-" << col - 1 << " To Start The INFECTION Or You Can Let Us Choose, In this case, Enter 0: ";
		cin >> startrow;
		if (startrow >= 0 && startrow < 5) flag = true;
		//random initialization
		if (startrow == 0)
		{
			srand((unsigned)time(0));
			startrow = rand() % row;
		}
	}
}

void Person::Kill(int result[]) 
{
	srand((unsigned)time(0));
	for (int i = 0;i < row;i++)
		if (result[i] > 6) 
		{
			kill = rand() % 2;
			if (kill == 1)
				result[i] = -1;
		}
}

int main() {
	Society sct;
	Person prs;
	prs.Initialization(sct.days);
	sct.Infect(prs.startrow);
	prs.Kill(sct.result);
	sct.Report();
}
