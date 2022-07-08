#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring> //<string.h>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0));

	
	char pass[100];
	int key,i=0,Cer=0;
	bool k = true;

	cout << "\n\n\t\t Enter password:";
	while (k)
	{
		
	key = _getch();
		
	if (key == 13)
	{
		pass[i] = '\0';
		if (strcmp(pass, "step") == 0) k = false;
		else
		{
			Cer++;
			if (Cer == 3) exit(0);
			cout << Cer;
			system("cls");
			cout << " \n\n\t Error incorrect password,remaining attemps: "<< 3-Cer << endl;
			system("pause");
			system("cls");
			cout << " \n\n\t Enter password :: ";
			i = 0;
		}
	}
	else if (key == 8)
	{
		if (i > 0) { cout << "\b \b"; i--; }
	}
	else
	{
		pass[i] = key;
		cout << "*";
		i++;
	}
	}
	system("cls");

	return 0;
}
/*
Sa se realizeze algoritmul de introducere a parolei
Utilizatorul are dreptul sa greseasca numai de 3 ori
a 4 oara aplicatia se inchide
*/