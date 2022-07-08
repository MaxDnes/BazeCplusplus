#include <iostream>
#include <cstdlib> //<stdlib.h>
#include <ctime>  //<time.h>
#include <cmath> //<math.h>

using namespace std;

int main()
{
	srand(time(0));
	for (int a, b, c, R, i = 0, i2 = 1,n=4,d=0, R1,R2=0, lgth = 0,cr=0, Rfin = 0 ;i < n;i++, lgth = 0)
	{
		R = 256;
		R1 = R;
		
		do
		{
			lgth++;
			R1 /= 10;
		} while (R1 != 0);
		cout << "\n\n" << lgth << endl;
		do 
		{
			d = pow(10, i2);
			R1 = R % d; //12
			cout << "R1:" << R1 << endl;
			R2 = (R1-R2)/pow(10,i2-1);
			cout << "R2:" << R2 << endl;
			Rfin += R2;
			cout << "Rfin:" << Rfin << endl;
			i2++;
		} while (i2<lgth+1);
		cout << Rfin << endl;
		//cout << '\n' << lgth << endl;
	}
	return 0;
}

/*
<cmath>

Sa se calculeze a+b-c unde 
a primeste valori 10 - 20     10 = a < 20
b primeste valori -10 - 10   -10 = b < 10
c primeste valori 100 - 200  100 = c < 250
Algorimtul de generare a unei valori aleatori din functia rand()

1.Calculam nr de valori din interval valoarea_max-valoare_min   20-10 => 10
2.rand()%pas1 
3.Adaugam inceputul intervalului rand()%10+10
*/

/*
Acasa:
Sa se creeze si sa se calculeze o ecuatie cu minim 5 variabile int
Sa se realizeze urmatoarele conditii:
1.Variabilile vor primi valori aleatorii din diferite intervale
2.Sa se utlizize operatiile matematice simple + - * / si functiile din <cmath> minim 5 
3.Ecuatia se va calcula in minimum 20 subecuatii (optional rezolvarea intrun singur rand)

124
124
4 -. 124 - 120 = 4
24 -. 124 - 104
124
4 - 0
24 - 4
124 - 24
*/