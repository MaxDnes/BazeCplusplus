#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int n;
	int v[10000],max1=-51,max2=-51;
	
	do
	{
		cout << "Cate elemente doriti sa aiba vectorul?(nu mai mult de 10000 si nu mai putin de 0):" << endl;
		cin >> n;
		if (n > 1000 || n < 0) cout << "Vectorul nu poatea avea " << n << " elemente." << endl; system("pause"); system("cls");
	} while (n > 1000 || n < 0);
	
	int j1 = n / 2, j2 = n - j1;
	
	for (int i = 0;i < n;i++)
	{
		v[i] = rand() % 100 - 50; // -50...50
		cout << "v[" << i << "] = " << v[i] << endl;
	}
	
	for (int i = 0; i < j1;i++)
	{
		if (max1 < v[i]) max1 = v[i];
	} //jum1
	for (int i = j2;i < n;i++)
	{
		if (max2 < v[i]) max2 = v[i];
	} //jum2

	cout << "Max jum1=" << max1 << endl;
	cout << "Max jum2=" << max2 << endl;

	// n/2 ; 9 - 4 5
	
	//Alogritmul Valoarea maximala
	//Sa se gaseasca elementul maximal
	/*int v[100],n=10+5;
	cout << "n=" << n << endl;
	for (int i = 0;i < n;i++)
	{
		v[i] = rand() % 10;
		cout << v[i] << endl;
	}*/
	/*
	1.Max - v[0] for !!!(int i = 1;i < n;i++)
	2.Max - INT_MIN
	3.Max - valoarea minima prin calcul  -1
	rand()%10 - val minima - 0; 0-1=-1
	*/
	return 0;
}

/*
a+b-c de n ori, sa se realizeze:
1.Rezultatele se vor pastra intr-un tablou unidimensional
2.Sa se calculeze suma elementelor
3.Suma elementelor impare si pare
4.Suma elementelor pare de pe pozitiile imapre , sum elem pare de pe pos pare
5.Sa se contorizeze de cate ori se repeta valoarea ultimului element din vector
6.Sa se afiseze coincidenta daca valoarea elementului coincide cu pozitia
7.Suma primei si a si a doua jumatate a vectorului

Acasa:
Sa se creeze un tablou unidimensional din n elemente
1.Sa se gaseasca val max din prima si a doua jumatate

*/