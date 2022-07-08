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
			M[i][j] = rand() % 15 + 1;
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << "\nPatratul 2:" << endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if ( (i == 1 || i == n - 2) && (j >= 1 && j <= m - 2) ) cout << setw(3) << M[i][j] << ' ';
			else if ( i > 1 && i < n - 2 && (j == 1 || j == m - 2) ) cout << setw(3) << M[i][j] << ' ' ;
			else cout << setw(3) << ' ';
		}
		cout << endl;
	}

	cout << "\nCadranul 1:" << endl;

	for (int i = 0;i < n / 2;i++)
	{
		for (int j = 0;j < m / 2;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "\nCadranul 2:" << endl;
	for (int i = 0;i < n / 2;i++)
	{
		for (int j = m / 2;j < m;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "\nCadranul 3:" << endl;
	for (int i = n / 2;i < n;i++)
	{
		for (int j = 0;j < m / 2;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "\nCadranul 4:" << endl;
	for (int i = n / 2;i < n;i++)
	{
		for (int j = m / 2;j < m;j++)
		{
			cout << setw(3) << M[i][j] << ' ';
		}
		cout << endl;
	}

	
	//pozl - pozitia linie
	//pozc - pozitia coloanei
	//Cl - contorul liniei (i) daca avem for unde i=n/2,pt a sti nr de iteratii efectuate
	//Cc - contorul coloanei (j) daca avem for unde j=m/2,pt a sti nr de iteratii efectuate

	cout << endl;

	for (int i = 0;i < n/2;i++)
	{
		for (int j = 0,temp,pozc;j < m/2;j++)
		{
			temp = M[i][j];
			M[i][j] = M[i][m / 2 + j];
			M[i][m / 2 + j] = temp;
		}
		cout << endl;
	}

	cout << "\nC1-C2:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	for (int i = 0;i < n / 2;i++)
	{
		for (int j = 0, temp, pozl;j < m / 2;j++)
		{
			pozl = n / 2 + i;
			temp = M[i][j];
			M[i][j] = M[pozl][j];
			M[pozl][j] = temp;
		}
		cout << endl;
	}

	cout << "\nC1-C3:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	for (int i = 0;i < n / 2;i++)
	{
		for (int j = 0, temp, pozl,pozc;j < m / 2;j++)
		{
			pozl = n / 2 + i;
			pozc = m / 2 + j;
			//cout << "pozc = " << pozc << endl;
			temp = M[i][j];
			M[i][j] = M[pozl][pozc];
			M[pozl][pozc] = temp;
			//cout << "M[" << i << "][" << pozc << "]=" << M[i][pozc] << endl;
		}
		cout << endl;
	}

	cout << "\nC1-C4:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0,Cl=0,Cc=0;i < n/2;i++,Cl++)
	{
		for (int j = m/2, temp;j < m;j++,Cc++)
		{
			temp = M[i][j];
			M[i][j] = M[Cl][Cc];
			M[Cl][Cc] = temp;
		}
		Cc = 0;
		cout << endl;
	}

	cout << "\nC2-C1:" << endl; //C2-C1 = C1-C2
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0,Cl=0,Cc=0;i < n/2;i++,Cl++)
	{
		for (int j = m/2,temp,pozl;j < m;j++,Cc++)
		{
			pozl = n / 2 + Cl;
			temp = M[i][j];
			M[i][j] = M[pozl][Cc];
			M[pozl][Cc] = temp;
		}
		Cc = 0;
		cout << endl;
	}

	cout << "\nC2-C3:" << endl; 
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0, Cl = 0, Cc = 0;i < n / 2;i++, Cl++)
	{
		for (int j = m / 2, temp, pozl,pozc;j < m;j++, Cc++)
		{
			pozl = n / 2 + Cl;
			pozc = m / 2 + Cc;
			temp = M[i][j];
			M[i][j] = M[pozl][pozc];
			M[pozl][pozc] = temp;
		}
		Cc = 0;
		cout << endl;
	}

	cout << "\nC2-C4:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = n/2,Cl=0;i < n ;i++,Cl++)
	{
		for (int j = 0, temp;j < m/2;j++)
		{
			temp = M[i][j];
			M[i][j] = M[Cl][j];
			M[Cl][j] = temp;
		}
		cout << endl;
	}

	cout << "\nC3-C1:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = n / 2,Cl=0;i < n;i++,Cl++)
	{
		for (int j = 0, temp, pozc;j < m / 2;j++)
		{
			pozc = m / 2 + j;
			temp = M[i][j];
			M[i][j] = M[Cl][pozc];
			M[Cl][pozc] = temp;
		}
		cout << endl;
	}

	cout << "\nC3-C2:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = n / 2;i < n;i++)
	{
		for (int j = 0, temp, pozl, pozc;j < m / 2;j++)
		{
			pozc = m / 2 + j;
			temp = M[i][j];
			M[i][j] = M[i][pozc];
			M[i][pozc] = temp;
		}
		cout << endl;
	}

	cout << "\nC3-C4:" << endl; 
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}


	cout << endl;

	for (int i = n / 2,Cl=0,Cc=0;i < n;i++,Cl++)
	{
		for (int j = m/2, temp;j < m;j++,Cc++)
		{
			temp = M[i][j];
			M[i][j] = M[Cl][Cc];
			M[Cl][Cc] = temp;
		}
		Cc = 0;
		cout << endl;
	}

	cout << "\nC4-C1:" << endl; 
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = n / 2, Cl = 0;i < n;i++, Cl++)
	{
		for (int j = m / 2, temp;j < m;j++)
		{
			temp = M[i][j];
			M[i][j] = M[Cl][j];
			M[Cl][j] = temp;
		}
		cout << endl;
	}

	cout << "\nC4-C2:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = n / 2, Cc = 0;i < n;i++)
	{
		for (int j = m / 2, temp;j < m;j++,Cc++)
		{
			temp = M[i][j];
			M[i][j] = M[i][Cc];
			M[i][Cc] = temp;
		}
		Cc = 0;
		cout << endl;
	}

	cout << "\nC4-C3:" << endl;
	//Afisarea dupa schimbul cu locul cadranelor
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	return 0;
}
/*

Acasa:
1.Sa se afiseze P2 ^

2.1 Sa se schimbe cu locurile cadranele I cu II, I cu III, I cu IV
2.2 Sa se schimbe cu locurile cadranele II cu I, II cu III, II cu IV
2.3 Sa se schimbe cu locurile cadranele III cu I, III cu II, III cu IV
2.4 Sa se schimbe cu locurile cadranele IV cu I, IV cu II, IV cu III

Alg de interschimb:
temp = x;
x = y;
y = temp;

*/
