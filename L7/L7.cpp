#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int a,b,c,x,y;
	a = rand() % 10;
	b = rand() % 15;
	c = rand() % 20;
	x = rand() % 20;
	y = rand() % 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "x=" << x << endl;
	cout << "y=" << y << "\n\n";

	if ( (a%2 == 0 && a >= 10 && a < 20) || (a%2 != 0 && a>=20 && a <50) ) a = rand() % 10 - 10;
	else a = rand() % 10;

	if ((b%2 != 0 && b >= 5 && b < 15) || (b%2 != 0 && b >= 25 && b < 55)) b = rand() % 20 - 20;
	else b = rand() % 20;

	if (x < y)
	{
		if ((c % 2 == 0 && c >= x && c < y)) c = rand() % 30 - 30;
		else c = rand() % 30;
	}
	else if ( x > y )
	{
		if ((c % 2 == 0 && c >= y && c < x)) c = rand() % 30 - 30;
		else c = rand() % 30;
	}
	else
	{
		x = x + 1; //pentru a rezolva conflictul x=y, unde n-are sens intervalul x->y R nu poate sa fie >= si < ca un nr oarecare in acelasi timp
		if ((c % 2 == 0 && c == y)) c = rand() % 30 - 30;
		else c = rand() % 30;
	}
	
	cout << a << '+' << b << '-' << c << '=' << a + b - c << "\n\n";
	
	int R = a + b - c;
	
	if (x > y)
	{
		if ((R % 2 == 0 && R >= y && R < x))
		{
			a = rand() % 12 - 3;
			b = rand() % 55 - 12;
			c = rand() % 33 - 43;
		}
	}
	else if (x < y)
	{
		if ((R % 2 == 0 && R >= x && R < y))
		{
			a = rand() % 34 - 6;
			b = rand() % 63 - 41;
			c = rand() % 9 - 23;
		}
	}
	else
	{
		x = x + 1; //pentru a rezolva conflictul x=y, unde n-are sens intervalul x->y R nu poate sa fie >= si < ca un nr oarecare in acelasi timp
		if ((R % 2 == 0 && R == y))
		{
			a = rand() % 44-23;
			b = rand() % 84-12;
			c = rand() % 23-34;
		}
	}

	cout << a << '+' << b << '-' << c << '=' << a + b - c << endl;
	
	return 0;
}

/*
Acasa
x,y =>0...20
a+b-c reesind din urmatoarele conditii:
1.Daca a este par si intra in intervalul 10...20 sau a este impar si intra in intervalul 20...50 ,daca da a => -10...0 , daca nu a 0...10
2.Daca b este impar si intra in intervalul 5...15 sau intervalul 25..55 , daca da b= -20...0 daca nu b= 0..20
3.Daca c este par si intra in intervalul x..y,daca da c -30...0,daca nu c= 0...30
4.Daca raspunul este par si intra in intervalul x...y,daca da rezolvam iar a+b-c a,b,c - aleatorii
*/
// rand() % min-max   max+1
// min==x>max    max<min
// if ( (ceva lung) || )
