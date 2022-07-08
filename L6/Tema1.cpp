#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	cout << "3...6 :"      << rand() % 3 + 3     << endl;
	cout << "3...5 :"      << rand() % 2 + 3     << endl;
	cout << "-3...8 :"     << rand() % 11 - 3    << endl;
	cout << "-12...-4 :"   << rand() % 8 - 12    << endl;
	cout << "-2...8 :"     << rand() % 10 - 2    << endl;
	cout << "-117...211 :" << rand() % 328 - 117 << endl;
	cout << "33..96 :"     << rand() % 63 + 33   << endl;
	cout << "-17...17 :"   << rand() % 34 - 17   << endl;
	cout << "12...99 :"    << rand() % 87 + 12   << endl;
	cout << "-95...-60 :"  << rand() % 35 - 95   << endl;
	cout << "-609..-501 :" << rand() % 108 - 609 << endl;
	cout << "312..641 :"   << rand() % 329 + 312 << endl;
	cout << "75..116 :"    << rand() % 41 + 75   << endl;
	cout << "-94..50 :"    << rand() % 144 - 94  << endl;
	cout << "-91...-1 :"   << rand() % 90 - 91   << endl;
	cout << "-12...0 :"    << rand() % 12 - 12   << endl;
	cout << "-93...11 :"   << rand() % 104 - 93  << endl;
	cout << "4...15 :"     << rand() % 11 + 4    << endl;
	cout << "-4...28 :"    << rand() % 32 - 4    << endl;
	cout << "0...99 :"     << rand() % 99        << endl;
	cout << "13...51 :"    << rand() % 38 + 13   << endl;
	cout << "-41...71 :"   << rand() % 112 - 41  << endl;
	cout << "95...99 :"    << rand() % 4 + 95    << endl;

	return 0;
}



/*
Acasa:
1.Sa se realizeze 20 de intervale intregi diferite si sa le afisam
cout<<"3..6"<<rand()%3+3<<endl;


2.a+b-c conditii rand()% doar cu int    rand()-int rand()-.double

2.1a,b,c - primesc valori aleatorii in format double      calculam cu rand()%

2.2 a si c participa la calculul ecuatii doar cu partea intreagea  (int(a)+int(c))

2.3 Daca raspunsul >  10 a,b,c = rand()%35-2     -2...33 si se calculeza a+b-c(din nou)
	Daca raspunsul <  10 a,b,c = rand()%6+37     37..43
	Daca raspunsul == 10 a,b,c = rand()%106-27   -27...79
*/