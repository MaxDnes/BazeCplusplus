#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int v[100], n,Mx;
	
	do
	{
		cout << "Cate elemente doriti sa aiba vectorul?(nu mai putin de 0, nu mai mult de 100):" << endl;
		cin >> n;
	} while (n > 100 || n < 0);

	do
	{
		cout << "Cate elemente maximale din vector doriti sa aflati?(nu mai putin de 0, nu mai mult de 100):" << endl;
		cin >> Mx;
	} while (Mx > 100 || Mx < 0);

	for (int i = 0; i < n; i++) //Dam valori elementelor vectorului v
	{
		v[i] = rand() % 30+1;
		cout << "v[" << i << "] = " << v[i] << endl;
	}
 
	for (int i = 0;i < n;i++)
	{
		for (int i1 = i + 1,temp;i1 < n;i1++)
		{
			if (v[i] < v[i1]) //Sortam toate elementele in ordine descrescatoare folosind algoritmul de interschimb
			{
				temp = v[i];
				v[i] = v[i1];
				v[i1] = temp;
			}
		}
	}
	
	for (int i = 0; i < Mx; i++) //Afisam doar nr fixat de elemente maxime (putem folosi si alt vector daca e necesar)
	{
		cout << "Elementul maxim " << i << "  =  " << v[i] << endl;
	}
	return 0;
}

/*

Sa se creeze un vector v[],
de n elemente, sa se gaseasca x elemente maximale,
unde x se introduce de utilizator

Algoritmul de interschimb:
Daca este necesar sa schimbam cu locurile 2 valori se utilizeaza algoritmul de interschimb
x = 2,y=3 , x<=>
	temp = x
	x = y
	y = temp

*/