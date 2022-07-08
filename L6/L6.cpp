#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int a = rand() % 30;
	int b = rand() % 25;
	int c = rand() % 20;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	if (a >= b) a = rand() % 15 + 15;

	if (b <= 10) b = rand() % 5 + 3;
	else b = rand() % 12 + 9;

	if (c > 3) c = rand() % 3;
	else if (c < 3) c = rand() % 3 + 3;
	else c = rand() % 3 + 6;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "a+b-c=" << a + b - c << endl;

	return 0;
}
/*
Acasa:
1.Sa se realizeze 20 de intervale intregi diferite si sa le afisam
cout<<"3..6"<<rand()%3+3<<endl;


2.a+b-c conditii rand()% doar cu int    rand()-int rand()-.double

2.1a,b,c - primesc valori aleatorii in format double      calculam cu rand()% si dupa /10 391/10=3.91

2.2 a si c participa la calculul ecuatii doar cu partea intreagea  (int(a)+int(c))

2.3 Daca raspunsul >  10 a,b,c = rand()%35-2     -2...33 si se calculeza a+b-(don nou)
    Daca raspunsul <  10 a,b,c = rand()%6+37     37..43
	Daca raspunsul == 10 a,b,c = rand()%106-27   -27...79
*/