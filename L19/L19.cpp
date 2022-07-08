#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));
	int v[100], n;

	do
	{
		cout << "Cate elemente va avea vectorul?(nu mai putin de 0 nu mai mult de 100)" << endl;
		cin >> n;
	} while (n > 100 || n <= 0);


	for (int i = 0;i < n;i++)
	{
		v[i] = rand() % 15 + 1;
	}
		
	for (int i = 0;i < n;i++) cout << setw(3) << v[i];

	cout << endl;

	bool rep[100];

	for (int i = 0;i < n;i++) rep[i] = false;

	for (int i = 0,Crep=0; i < n; i++)
	{
		if (!rep[i]) //!false = true
		{
			Crep = 0;
			for (int i1 = 0; i1 < n; i1++)
				if (v[i1] == v[i])
				{
					Crep++;
					rep[i1] = true; // 4  4  2  6 10  4  4  8  4  4   4   6  10   8  6 Blocam pozitiile pe care elementul se repeta pt a nu le mai afisa din nou
				}					 // 7  7  1  3  2  7  7  2  7  7   7   3   2   2  3
									 // 7  -  1  1  2  -  -  2  -  -   -   -   -   -  -
									 // 0  1  2  3  4  5  6  7  8  9  10  11  12  13  14
			if (Crep > 1) cout << v[i] << " se repeta de " << Crep << " ori." << endl;
			else  cout << v[i] << " nu se repeta." << endl;
		}
	}


	return 0;
}

// 4  4  2  6 10  4  4  8  4  4   4   6  10   8  6
// 0  1  2  3  4  5  6  7  8  9  10  11  12  13 14
// 6  6  1  3  2  6  6  2  6  6   6   3   2   1  3


/*
Cv[1]
Acasa:
Sa se creeze un tablou unidimensional de n elemente 
Sa se contorizeze de cate ori se repeta fiecare valoare in vector 

Sa se schimbe cu locurile primul element cu ultim element
Sa se schimbe cu locurile valorile perechilor
Sa se creeze un vector din 10 elemente, sa se creeze vectorul A cu elementele poztiilor pare B - elem poz impare
Sa se schimbe cu locurile A si B

Acasa:
Sa se creeze un vector v[], de n elemente, sa se gaseasca x elemente maximale, unde x (x ca vector hz) se introduce de utilizator


//i = 0 1		2 3		4 5		6 7
for (int i = 0;i < n;i++)
	{
		if (i < n / 2)
		{
			if (i < n / 4) s1 += v[i];
			else s2 += v[i];
		}
		else
		{
			if (i >= n / 2 && i < n/2 + n / 4)  s3 += v[i];
			else s4 += v[i];
		}
	}*

	cout << "\n\ns1=" << s1 << endl;
	cout << "s2=" << s2 << endl;
	cout << "s3=" << s3 << endl;
	cout << "s4=" << s4 << endl;


0 1 2 3 4 5 6
1 2 4 1 9 8 5

for(i = 0; i<n; i++)
{
   for(i1 = i1+1; i1<10; i1++)
   {
	  if(a[i1] < a[i])
	  {
		 temp = a[i1];
		 a[i] = a[i1];
		 a[i1] = temp;
	  }
   }
}

4  4  2  6 10  4  4  8  4  4   4   6  10   8  6

2 4 4 4 4 4 4 4 4 6 6 6 8


Sa se creeze un tablou unidimensional de n elemente
Sa se aranjeze crescator j1
Si descrescator a doua jumatate a vectorului


Sa se creeze un tablou din elemente pare 
Sa se creeze vectorul X cu sumele perechilor 
X sa se aranjeze dupa dorinta utilizatorului


Alg int schimb:
temp = x;
x = y;
y = temp;
*/