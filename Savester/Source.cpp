#include <iostream>
#include "Savester.h"
using namespace std;

int main()
{
	while (true)
	{
		switch (WelMenu())
		{
		case 1:
			Append();
			system("cls");
			break;
		case 2:
			Truncate();
			system("cls");
			break;
		case 3:
			cout << "Come Back Soon...wE'Ll MiSs YOu :').\n\n		You can rate this program via 'esi.fury11@gmail.com'		\n	Send your ideas and thoughts about our program via 'esi.fury11@gmail.com'		\n\n				HAVE AN AWESOME DAY!\n\n";
			system("pause>n");
			exit(0);
		}
	}
}
