#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	//a: 3.11 -> 5.91
	double a = (rand() % 280 + 311) / double(100);
	cout << "a=" << a << endl;

	//b:-2.41...8.15
	double b = (rand() % 1056 - 241) / double(100);
	cout << "b=" << b << endl;

	//c:-11.51...3.12
	double c = (rand() % 1463 - 1151) / double(100);
	cout << "c=" << c << endl;

	cout << int(a) << '+' << b << '-' << int(c) << '=' << int(a) + b - int(c) << endl;

	if (int(a) + b - int(c) > 10)
	{
		a = rand() % 35 - 2; //-2...33
		b = rand() % 35 - 2;
		c = rand() % 35 - 2;
	}
	else if (int(a) + b - int(c) < 10)
	{
		a = rand() % 6 + 37; //37..43
		b = rand() % 6 + 37;
		c = rand() % 6 + 37;
	}
	else
	{
		a = rand() % 106 - 27; //-27...79
		b = rand() % 106 - 27;
		c = rand() % 106 - 27;
	}
	//Calculam ecuatia din nou
	cout << a << '+' << b << '-' << c << '=' << a + b - c << endl;

	return 0;
}



/*
Acasa:
1.Sa se realizeze 20 de intervale intregi diferite si sa le afisam
cout<<"3..6"<<rand()%3+3<<endl;


2.a+b-c conditii rand()% doar cu int    rand()-int rand()-.double

2.1a,b,c - primesc valori aleatorii in format double      calculam cu rand()%

2.2 a si c participa la calculul ecuatii doar cu partea intreaga  (int(a)+int(c))

2.3 Daca raspunsul >  10 a,b,c = rand()%35-2     -2...33 si se calculeza a+b-c(din nou)
	Daca raspunsul <  10 a,b,c = rand()%6+37     37..43
	Daca raspunsul == 10 a,b,c = rand()%106-27   -27...79
*/