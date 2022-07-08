#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int val1 = NULL, val2 = NULL, op = NULL, lgth = 0;

	X:
	switch (_getch())
	{
	case 48: cout << '0';
		if (lgth == 0) val1 = 0;
		else val1 = val1 * 10;
		lgth++;
		break;
	case 49: cout << '1';
		if (lgth == 0) val1 = 1;
		else val1 = val1 * 10 + 1;
		lgth++;
		break;
	case 50: cout << '2';
		if (lgth == 0) val1 = 2;
		else val1 = val1 * 10 + 2;
		lgth++;
		break;
	case 51: cout << '3';
		if (lgth == 0) val1 = 3;
		else val1 = val1 * 10 + 3;
		lgth++;
		break;
	case 52: cout << '4';
		if (lgth == 0) val1 = 4;
		else val1 = val1 * 10 + 4;
		lgth++;
		break;
	case 53: cout << '5';
		if (lgth == 0) val1 = 5;
		else val1 = val1 * 10 + 5;
		lgth++;
		break;
	case 54: cout << '6';
		if (lgth == 0) val1 = 6;
		else val1 = val1 * 10 + 6;
		lgth++;
		break;
	case 55: cout << '7';
		if (lgth == 0) val1 = 7;
		else val1 = val1 * 10 + 7;
		lgth++;
		break;
	case 56: cout << '8';
		if (lgth == 0) val1 = 8;
		else val1 = val1 * 10 + 8;
		lgth++;
		break;
	case 57: cout << '9';
		if (lgth == 0) val1 = 9;
		else val1 = val1 * 10 + 9;
		lgth++;
		break;

	case 43: cout << '+';
		if (val1 == NULL)
		{
			cout << "\nPlease enter the full ecuation again!" << endl;
			system("pause"); system("cls");
		}
		else op = 1; val2 = val1; val1 = NULL; lgth = 0;
		break;
	case 45: cout << '-';
		if (val1 == NULL)
		{
			cout << "\nPlease enter the full ecuation again!" << endl;
			system("pause"); system("cls");
		}
		else op = 2; val2 = val1; val1 = NULL; lgth = 0;
		break;
	case 42: cout << '*';
		if (val1 == NULL)
		{
			cout << "\nPlease enter the full ecuation again!" << endl;
			system("pause"); system("cls");
		}
		else op = 3; val2 = val1; val1 = NULL; lgth = 0;
		break;
	case 47: cout << '/';
		if (val1 == NULL)
		{
			cout << "\nPlease enter the full ecuation again!" << endl;
			system("pause"); system("cls");
		}
		else op = 4; val2 = val1; val1 = NULL; lgth = 0;
		break;
	case 94: cout << '^';
		if (val1 == NULL)
		{
			cout << "\nPlease enter the full ecuation again!" << endl;
			system("pause"); system("cls");
		}
		else op = 5; val2 = val1; val1 = NULL; lgth = 0;
		break;

	case 13: cout << '=';
		if (val1 == NULL || val2 == NULL || op == NULL)
		{
			cout << "\nPlease enter the numbers and operations before calculating!" << endl;
			system("pause"); system("cls");
		}
		else
		{
			switch (op)
			{
			lgth = 0;
			case 1: cout << val2 + val1 << endl; val1 = NULL; val2 = NULL; op = NULL; break;
			case 2: cout << val2 - val1 << endl; val1 = NULL; val2 = NULL; op = NULL; break;
			case 3: cout << val2 * val1 << endl; val1 = NULL; val2 = NULL; op = NULL; break;
			case 4:
				if (val1 == 0 && val2 != 0) cout << "Error can't divide by 0!" << endl;
				else if (val1 == 0 && val2 == 0) cout << "Error can't divide 0 by 0!" << endl;
				else cout << val2 / double(val1) << endl;
				val1 = 0;val2 = 0; op = NULL;
				break;
			case 5: cout << pow(val2, val1) << endl; val1 = NULL; val2 = NULL; op = NULL; break;
			}
			system("pause"); system("cls");
		}
			break;
	case 27: exit(0);
	}
	goto X;
}

/*
Tema pt acasa:
1.Calculator interactiv cu valori cifra si numar
goto etichete cicluri cr4
2.Sa se restrictioneze pasii din algoritm
*/