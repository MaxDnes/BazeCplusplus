#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int M[10][10];

	int n, m;

	do
	{
		cout << "Cate linii va avea matricea?(nu mai mult de 10 nu mai putin de 1:"<< endl;
		cin >> n;
	} while (n > 10 || n <= 0);

	do
	{
		cout << "Cate coloane va avea matricea?(nu mai mult de 10 nu mai putin de 1:"<<endl;
		cin >> m;
	} while (m > 10 || m <= 0);

	int x, y;

	cout << "Dati valoarea lui x:" << endl;
	cin >> x;

	cout << "\nDati valoarea lui y:" << endl;
	cin >> y;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			M[i][j] = rand() % 20+1;
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << "M["<<i<<"]["<<j<<"] = "<< M[i][j] <<endl;
		}
		cout << endl;
	}

	int sum=0,sumr[10],Cp=0,Cx=0,Cy=0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			sum += M[i][j];
			if (M[i][j] % 2 == 0) Cp++;
			
			if (i % 2 == 0 && M[i][j] == x) Cx++;
			else if (i % 2 != 0 && M[i][j] == y) Cy++;

		}
		sumr[i] = sum;
		//Alg de interschimb
	}

	cout << "\nSuma tuturor elementelor :" << sum << endl;

	for (int i = 0;i < n;i++)
	{
		cout << "Suma elementelor de pe linia " << i << " : "  << sumr[i] << endl;
	}

	cout << "\nIn matrice sunt " << Cp << " elemente pare si " << (n * m) - Cp << " elemente impare." << endl;

	cout << "x a corespuns cu valoarea elementelor de pe liniile pare de " << Cx << " ori." << endl;
	cout << "y a corespuns cu valoarea elementelor de pe liniile pare de " << Cy << " ori." << endl;

	return 0;
}
/*

Sa se creeze de n linii si m coloane

Suma matricii
Suma fiecarui rand
Sa se contorizeze cate elemente pare si elemente sunt in matrici impare 
Sa se contorizeze de cate ori pe liniile pare se gaseste valoare x,y inserata de catre utilizator si y pe linii impare 

Acasa:

1.Sa se schimbe cu locurile primul si ultimul element al fiecarui rand
2.Max si min din fiecare linie









10 * 3

if()

for (int i = 0;i < n;i++)
{
	for (int j = 0;j < m;j++)
	{
		sum += M[j][i];
	}
	cout<<"Suma elementelor pe colaoa
}

Suma pe coloane la matricele dreptunghice



*/