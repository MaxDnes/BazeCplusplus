#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>



using namespace std;



int main()
{
	srand(time(0));



	int M[100][100], n;
	do
	{
		cout << "Cati vectori doriti sa calculati:(nu mai mult de 100 nu mai putin de 0)" << endl;
		cin >> n;
	} while (n >= 100 || n <= 0);



	int x, y;
	do
	{
		cout << "Care vectori doriti sa-l schimbati cu alt vector:(nu mai mare de 100 nu mai putin de 0)" << endl;
		cin >> x;
	} while (x >= 100 || x < 0);



	do
	{
		cout << "Care este al doilea vector ce v-a schimbat cu locul:(nu mai mare de 100 nu mai putin de 0)" << endl;
		cin >> y;
	} while (y >= 100 || y < 0 || x == y);

	x -= 1;
	y -= 1;

	bool chg = false;
	for (int i = 0, lr; i < n; i++)
	{
		M[i][0] = rand() % 10 + 1;
		if ( (i == x || i == y) && chg == false)
		{
			chg = true;
			lr = rand() % 10;
			M[x][0] = lr;
			M[y][0] = lr;
		}
		for (int j = 1; j <= M[i][0]; j++)
		{
			M[i][j] = rand() % 10;
		}
	}
	cout << endl;



	for (int i = 0; i < n; i++)
	{
		cout << "V" << i + 1 << "[" << M[i][0] << "] :: ";
		for (int j = 1; j <= M[i][0]; j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}



	for (int i = 0, temp1; i < n; i++)
	{
		if (i == x)
		{
			temp1 = M[x][0];
			M[x][0] = M[y][0];
			M[y][0] = temp1;
			for (int j = 1, temp2; j <= M[i][0]; j++)
			{
				temp2 = M[x][j];
				M[x][j] = M[y][j];
				M[y][j] = temp2;
			}
		}
	}



	for (int i = 0; i < n; i++)
	{
		cout << "V" << i + 1 << "[" << M[i][0] << "] :: ";
		for (int j = 1; j <= M[i][0]; j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}



	return 0;
}
/*
Sa se schimbe cu locurile 2 vectori
vectorul x si vectorul y
unde x si y reprezinta valoarea introdusa de utilizator
*/