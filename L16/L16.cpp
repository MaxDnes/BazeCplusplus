#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int v1[1000];
	double v2[1000];
	char v3[1000];
	int n1, n2, n3;

	do
	{
	cout << "Cate elemente va avea vectorul de tip int?(nu mai mult de 1000):" << endl;
	cin >> n1;
	if (n1 > 1000) cout << "Error prea multe elemente pentru vector" << endl;system("pause");system("cls");
	} while (n1 > 1000);
	
	do
	{
		cout << "Cate elemente va avea vectorul de tip double?(nu mai mult de 1000):" << endl;
		cin >> n2;
		if (n2 > 1000) cout << "Error prea multe elemente pentru vector" << endl;system("pause");system("cls");
	} while (n2 > 1000);

	do
	{
		cout << "Cate elemente va avea vectorul de tip char?(nu mai mult de 1000):" << endl;
		cin >> n3;
		if (n3 > 1000) cout << "Error prea multe elemente pentru vector" << endl;system("pause");system("cls");
	} while (n3 > 1000);

	system("cls");

	cout << "Inserarea valorilor pentru vectorul de tip int:\n\n\n" << endl;
	for (int i = 0;i < n1;i++)
	{
		cout << "Introduceti valoarea pentru vectorul[" << i << "]" << endl;
		cin >> v1[i];
	}

	system("cls");

	cout << "Inserarea valorilor pentru vectorul de tip double:\n\n\n" << endl;
	for (int i = 0;i < n2;i++)
	{
		cout << "Introduceti valoarea pentru vectorul[" << i << "]" << endl;
		cin >> v2[i];
	}

	system("cls");

	cout << "Inserarea valorilor pentru vectorul de tip char:\n\n\n" << endl;
	for (int i = 0;i < n3;i++)
	{
		cout << "Introduceti valoarea pentru vectorul[" << i << "]" << endl;
		cin >> v3[i];
	}

	int n;
	double Rv[1000];

	system("cls");

	do
	{
		cout << "De cate ori doriti sa calculati a+b-c?(nu mai mult de 1000):" << endl;
		cin >> n;
		if (n  > 1000) cout << "Error prea multe elemente pentru vector" << endl;system("pause");system("cls");
	} while (n > 1000);

	int i = 0,lg=0;

	for (double a,b,c,R;i < n; i++)
	{
		a = (rand() % 224  + 514)   / double(100); //  5.14 ... 7.38
		b = (rand() % 1056 - 241)  / double(100); // -2.41 ... 9.15
		c = (rand() % 984  - 759) / double(100); // -7.59 ... 2.25
		R = a + b - c;
		cout << a << " + " << b << " - " << c << " = " << R << endl;
		if (R >= 10 && R < 30) Rv[lg] = R; lg++;
	}
	for (int i1 = 0;i < lg;i1++)
	{
		cout << Rv[i1] << endl;
	}
	return 0;
}



/*
Acasa:
1.Sa se creeze 3 vectori de tip de date int,double,char (inserare,afisare)
2.a+b-c, de n ori,unde a,b,c => rand double, sa se salveze toate rezultatele intr-un vector daca intra in intervalul 10...30
*/
