#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;

int main()
{
	srand(time(0));

	int M[10][10];
	int n, m;

	do
	{
		cout << "Introduceti nr de linii(nu mai mult de 10 nu mai putin de 0):" << endl;
		cin >> n;
	} while (n > 10 || n <= 0);

	do
	{
		cout << "Introduceti nr de coloane(nu mai mult de 10 nu mai putin de 0):" << endl;
		cin >> m;
	} while (m > 10 || m <= 0);

	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			M[i][j] = rand() % 15 + 1;
		}
	}
	
	cout << endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			//cout << "M["<<i << "][" << j << "] = " << M[i][j] << endl;
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	int SdP = 0, SdS = 0;
	//cout << "\nDiagonala principala:" << endl;
	//for (int i = 0;i < n;i++)
	//{
	//	cout << setw(3) << M[i][i];
	//	SdP += M[i][i];
	//	SdS += M[n - i - 1][i];
	//}

	//cout << "\nDiagonala secundara:" << endl;
	//for (int i = 0;i < n;i++)
	//{
	//	//cout << setw(3) << M[n-i-1][i];
	//	cout << setw(3) << M[n - i - 1][i];
	//}
	
	cout << '\n' << endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (j >= i) cout << setw(3) << M[i][j];
			else cout << setw(3) << ' ';
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (j <= i) cout << setw(3) << M[i][j];
			else cout << setw(3) << ' ';
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == m-1)
			{
				cout << setw(3) << M[i][j];
				cout << ' ';
			}
			else
			{
				cout << setw(3)<<' ';
			}
		}
		cout << endl;
	}

	cout << "\nCadranul 1:" << endl;

	for (int i = 0;i < n/2;i++)
	{
		for (int j = 0;j < m/2;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "Dp cadran 1:" << endl;
	for (int i = 0;i < n / 2;i++)
	{
		cout << M[i][i] << endl;
	}

	cout << "\nDs cadran 1:" << endl;
	for (int i = 0;i < n / 2;i++)
	{
		cout << setw(3)<< M[n/2 - i - 1][i];
	}

	cout << endl;

	cout << "\nCadranul 2:" << endl;
	for (int i = 0;i < n/2;i++)
	{
		for (int j = m / 2;j < m;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << endl;

	cout << "Dp cadran 2:" << endl;
	for (int i = 0;i < n / 2;i++)
	{
		//cout << M[];
	}
	
	cout << endl;

	cout << "\nDs cadran 2:" << endl;
	for (int i = 0;i < n / 2;i++)
	{
		for (int j = m / 2;j < m;j++)
		{
			cout << M[i][m / 2 + i];
		}
	}

	cout << endl;

	cout << "\nCadranul 3:" << endl;
	for (int i = n/2;i < n;i++)
	{
		for (int j = 0;j < m/2;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << endl;

	cout << "Dp cadran 3:" << endl;
	for (int i =n/2;i < n;i++)
	{
		cout << setw(3) << M[i][i-m/2];
	}

	cout << endl;

	cout << "Ds cadran 3:" << endl;
	for (int i = n / 2;i < n;i++)
	{
		cout << setw(3) << M[ (n-1)-(i-(n/2)) ][i - m/2];
	}

	cout << endl;

	cout << "\nCadranul 4:" << endl;
	for (int i = n / 2;i < n;i++)
	{
		for (int j = m/2;j < m;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << endl;

	cout << "Dp cadran 4:" << endl;
	for (int i = n / 2;i < n;i++)
	{
		cout << setw(3) << M[i][i];
	}

	cout << endl;

	cout << "Ds cadran 4:" << endl;
	for (int i = n/2;i < n ;i++)
	{
		cout << setw(3) << M[(n - 1) - (i - (n / 2))][i];
	}

	cout << endl;

	/*for (int i = 0, temp;i < n;i++)
	{
		temp = M[i][i];
		M[i][i] = M[m-i-1][i];
		M[m - i - 1][i] = temp;
	}

	cout << "Suma diagonalei pricipale " << SdP << endl;
	cout << "Suma diagonalei secundare " << SdP << endl;*/

	return 0;
}
/*
Sa se creeze o matrice n pe m
								   ^
Diagonala principala a matricii - /

Sa se calculeze suma diagon principale si suma diagon secundare
Sa se schimbe cu locurile Dp cu Ds
Sa se afiseze triunghiul 1 si trigl 2
Sa se afiseze P nr 1
Sa se afiseze cadrane
Sa se afiseze diagon principala pt fiecare cadran si diagon secund fiecare cadran



Acasa:
1.Sa se afiseze P2

2.1 Sa se schimbe cu locurile cadranele I cu II, I cu III, I cu IV
2.2 Sa se schimbe cu locurile cadranele II cu I, II cu III, II cu IV
2.3 Sa se schimbe cu locurile cadranele III cu I, III cu II, III cu IV
2.4 Sa se schimbe cu locurile cadranele IV cu I, IV cu II, IV cu III



*/