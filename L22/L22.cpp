#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));

	/*int M[10][10];
	int n, m;

	do
	{
		cout << "Cate linii va avea matricea?" << endl;
		cin >> n;
	} while (n > 10 || n <= 0);

	do
	{
		cout << "Cate coloane va avea matricea?" << endl;
		cin >> m;
	} while (m > 10 || m <= 0);

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			M[i][j] = rand() % 15;
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}*/


	int n;

	do
	{
		cout << "Cati vectori doriti sa creati?(nu mai mult de 100 nu mai putin de 0)" << endl;
		cin >> n;
	} while (n > 100 || n <= 0);

	int M[100][100];

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < 100;j++)
		{
			M[i][j] = rand() % 100;
		}
	}

	int Lv[100]; //Lungimi aleatorii pt vectori
	for (int i = 0;i < n;i++)
	{
		Lv[i] = rand() % 100;
	}

	for (int i = 0;i < n;i++)
	{
		cout << "Vectorul " << i + 1 << " din " << Lv[i] << " elemente:" << endl; //Afisarea vectorilor fiecare rand a matricii este un vector
		for (int j = 0;j < Lv[i];j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}



		return 0;
	}
/*
Sa se creeze n vectori de dimensiuni diferite
n - introdus de utilizator
*/