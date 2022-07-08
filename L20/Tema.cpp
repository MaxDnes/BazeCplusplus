#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	
	int M[10][10];
	int n, m;

	do
	{
		cout << "Cate linii va avea matricea?(nu mai mult de 10 nu mai putin de 1):" << endl;
		cin >> n;
	} while (n > 10 || n <= 0);

	do
	{
		cout << "Cate coloane va avea matricea?(nu mai mult de 10 nu mai putin de 1):" << endl;
		cin >> m;
	} while (m > 10 || m <= 0);



	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			M[i][j] = rand() % 20 + 1;
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << "M[" << i << "][" << j << "] = " << M[i][j] << endl;
		}
		cout << endl;
	}

	int Vmax[10],Vmin[10];
	for (int i = 0,temp,max,min;i < n;i++)
	{
		max = INT_MIN;
		min = INT_MAX;
		for (int j = 0;j < m;j++)
		{
			if (max < M[i][j]) max = M[i][j];
			if (min > M[i][j]) min = M[i][j];
		}
		
		Vmax[i] = max;
		Vmin[i] = min;

		temp = M[i][0];
		M[i][0] = M[i][m-1];
		M[i][m - 1] = temp;

	}

	cout << endl;

	for (int i = 0;i < n;i++) cout << "Valoarea maximala din randul " << i << " = " << Vmax[i] << endl;

	cout << '\n' << endl;

	for (int i = 0;i < n;i++) cout << "Valoarea minimala din randul " << i << " = " << Vmin[i] << endl;

	cout << endl;

	cout << "Dupa schimbarea cu locul a primului si ultimului element din fiecare rand:\n" << endl;

	for (int i = 0;i < n;i++) //Afisarea dupa schimbarea cu locul
	{
		for (int j = 0;j < m;j++)
		{
			cout << "M[" << i << "][" << j << "] = " << M[i][j] << endl;
		}
		cout << endl;
	}


	return 0;
}