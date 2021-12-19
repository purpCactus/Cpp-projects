#include <iostream>
#include <limits>
#include <float.h>
using namespace std;

enum Data_Type {
	Char = 1, SignedChar, UnsignedChar, ShortInt, UnsignedShortInt,
	Int, UnsignedInt, LongInt, UnsignedLongInt, LongLongInt, UnsignedLongLongInt,
	Float, Double, LongDouble, WideChar, Bool, Exit
};

Data_Type Menu();
void Handler(Data_Type);
void char_info();
void signedchar_info();
void unsignedchar_info();
void shortint_info();
void unsignedshortint_info();
void int_info();
void unsginedint_info();
void longint_info();
void unsignedlongint_info();
void longlongint_info();
void unsignedlonglongint_info();
void float_info();
void double_info();
void longdouble_info();
void widechar_info();
void bool_info();

int main()
{
	Data_Type sel;
	for (;;)
	{
		sel = Menu();
		if (sel == Exit)
			exit(0);
		Handler(sel);
	}
}

Data_Type Menu()
{
	int sel;
	system("cls");
	cout << endl << " Enter the number of any data type to see their details : " << endl;
	cout << "	" << "1. Char" << endl;
	cout << "	" << "2. Signed Char" << endl;
	cout << "	" << "3. Unsigned Char" << endl;
	cout << "	" << "4. Short Int / Signed Short Int" << endl;
	cout << "	" << "5. Unsigned Short Int" << endl;
	cout << "	" << "6. Int / Signed Int" << endl;
	cout << "	" << "7. Unsigned Int" << endl;
	cout << "	" << "8. Long Int / Signed Long Int" << endl;
	cout << "	" << "9. Unsigned Long Int" << endl;
	cout << "	" << "10. Long Long Int" << endl;
	cout << "	" << "11. Unsigned Long Long Int" << endl;
	cout << "	" << "12. Float" << endl;
	cout << "	" << "13. Double" << endl;
	cout << "	" << "14. Long Double" << endl;
	cout << "	" << "15. Wide Char" << endl;
	cout << "	" << "16. Boolean" << endl;
	cout << "	" << "17. Exit" << endl;
	cout << endl<< "  > "; cin >> sel;
	return (Data_Type)sel;
}

void Handler(Data_Type sel)
{
	switch (sel)
	{
	case Char:
		system("cls");
		char_info();
		system("pause>n");
		break;
	case SignedChar:
		system("cls");
		signedchar_info();
		system("pause>n");
		break;
	case UnsignedChar:
		system("cls");
		unsignedchar_info();
		system("pause>n");
		break;
	case ShortInt:
		system("cls");
		shortint_info();
		system("pause>n");
		break;
	case UnsignedShortInt:
		system("cls");
		unsignedshortint_info();
		system("pause>n");
		break;
	case Int:
		system("cls");
		int_info();
		system("pause>n");
		break;
	case UnsignedInt:
		system("cls");
		unsginedint_info();
		system("pause>n");
		break;
	case LongInt:
		system("cls");
		longint_info();
		system("pause>n");
		break;
	case UnsignedLongInt:
		system("cls");
		unsignedlongint_info();
		system("pause>n");
		break;
	case LongLongInt:
		system("cls");
		longlongint_info();
		system("pause>n");
		break;
	case UnsignedLongLongInt:
		system("cls");
		unsignedlonglongint_info();
		system("pause>n");
		break;
	case Float:
		system("cls");
		float_info();
		system("pause>n");
		break;
	case Double:
		system("cls");
		double_info();
		system("pause>n");
		break;
	case LongDouble:
		system("cls");
		longdouble_info();
		system("pause>n");
		break;
	case WideChar:
		system("cls");
		widechar_info();
		system("pause>n");
		break;
	case Bool:
		system("cls");
		bool_info();
		system("pause>n");
	case Exit:
		break;
	default:
		cout << "Please enter a valid choice !";
		break;
	}
}

void char_info()
{
	cout << endl << "	" << "Type Name = char " << endl;
	cout << "	" << "Size in byte = " << sizeof(char) << endl;
	cout << "	" << "Minimum value = " << CHAR_MIN << endl;
	cout << "	" << "Maximum value = " << CHAR_MAX << endl;
}

void signedchar_info()
{
	cout << endl << "	" << "Type Name = signed char " << endl;
	cout << "	" << "Size in byte = " << sizeof(signed char) << endl;
	cout << "	" << "Minimum value = " << SCHAR_MIN << endl;
	cout << "	" << "Maximum value = " << SCHAR_MAX << endl;
}

void unsignedchar_info()
{
	cout << endl << "	" << "Type Name = unsigned char " << endl;
	cout << "	" << "Size in byte = " << sizeof(unsigned char) << endl;
	cout << "	" << "Minimum value = " << "0" << endl;
	cout << "	" << "Maximum value = " << UCHAR_MAX << endl;
}

void shortint_info()
{
	cout << endl << "	" << "Type Name = short int " << endl;
	cout << "	" << "Size in byte = " << sizeof(short int) << endl;
	cout << "	" << "Minimum value = " << SHRT_MIN << endl;
	cout << "	" << "Maximum value = " << SHRT_MAX << endl;
}

void unsignedshortint_info()
{
	cout << endl << "	" << "Type Name = unsigned short int " << endl;
	cout << "	" << "Size in byte = " << sizeof(unsigned short int) << endl;
	cout << "	" << "Minimum value = " << "0" << endl;
	cout << "	" << "Maximum value = " << USHRT_MAX << endl;
}

void int_info()
{
	cout << endl << "	" << "Type Name = int " << endl;
	cout << "	" << "Size in byte = " << sizeof(int) << endl;
	cout << "	" << "Minimum value = " << INT_MIN << endl;
	cout << "	" << "Maximum value = " << INT_MAX << endl;
}

void unsginedint_info()
{
	cout << endl << "	" << "Type Name = unsigned int " << endl;
	cout << "	" << "Size in byte = " << sizeof(unsigned int) << endl;
	cout << "	" << "Minimum value = " << "0" << endl;
	cout << "	" << "Maximum value = " << UINT_MAX << endl;
}

void longint_info()
{
	cout << endl << "	" << "Type Name = long int " << endl;
	cout << "	" << "Size in byte = " << sizeof(long int) << endl;
	cout << "	" << "Minimum value = " << LONG_MIN << endl;
	cout << "	" << "Maximum value = " << LONG_MAX << endl;
}

void unsignedlongint_info()
{
	cout << endl << "	" << "Type Name = unsigned long int " << endl;
	cout << "	" << "Size in byte = " << sizeof(unsigned long int) << endl;
	cout << "	" << "Minimum value = " << "0" << endl;
	cout << "	" << "Maximum value = " << ULONG_MAX << endl;
}

void longlongint_info()
{
	cout << endl << "	" << "Type Name = long long int " << endl;
	cout << "	" << "Size in byte = " << sizeof(long long int) << endl;
	cout << "	" << "Minimum value = " << LLONG_MIN << endl;
	cout << "	" << "Maximum value = " << LLONG_MAX << endl;
}

void unsignedlonglongint_info()
{
	cout << endl << "	" << "Type Name = unsigned long long int " << endl;
	cout << "	" << "Size in byte = " << sizeof(unsigned long long int) << endl;
	cout << "	" << "Minimum value = " << "0" << endl;
	cout << "	" << "Maximum value = " << ULLONG_MAX << endl;
}

void float_info()
{
	cout << endl << "	" << "Type Name = float" << endl;
	cout << "	" << "Size in byte = " << sizeof(float) << endl;
	cout << "	" << "Minimum value = " << FLT_MIN << endl;
	cout << "	" << "Maximum value = " << FLT_MAX << endl;
}

void double_info()
{
	cout << endl << "	" << "Type Name = doube " << endl;
	cout << "	" << "Size in byte = " << sizeof(double) << endl;
	cout << "	" << "Minimum value = " << DBL_MIN << endl;
	cout << "	" << "Maximum value = " << DBL_MAX << endl;
}

void longdouble_info()
{
	cout << endl << "	" << "Type Name = long double " << endl;
	cout << "	" << "Size in byte = " << sizeof(long double) << endl;
	cout << "	" << "Minimum value = " << LDBL_MIN << endl;
	cout << "	" << "Maximum value = " << LDBL_MAX << endl;
}

void widechar_info()
{
	cout << endl << "	" << "Type Name = wchar_t " << endl;
	cout << "	" << "Size in byte = " << sizeof(wchar_t) << endl;
	cout << "	" << "Minimum value = " << WCHAR_MIN << endl;
	cout << "	" << "Maximum value = " << WCHAR_MAX << endl;
}

void bool_info()
{
	cout << endl << "	" << "Type Name = bool " << endl;
	cout << "	" << "Size in byte = " << sizeof(bool) << endl;
	cout << "	" << "Minimum value = " << "0" << endl;
	cout << "	" << "Maximum value = " << "1" << endl;
}
