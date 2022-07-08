#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int a, b, c, C = 0,Rpoz=0,Rneg=0;
	int cxa =-1, cxb = -1, cxc = -1;
	int n,R;
	int intera = 0, interb = 0, interc = 0;
	cout << "De cate ori doriti sa calculati a+b-c?" << endl;
	cin >> n;

	Eticheta:
	
	C++;
	
	XA:
	cxa++;
	a = rand() % 100;
	if (a % 2 != 0) goto XA;
	
	XB:
	cxb++;
	b = rand() % 100;
	if (b % 2 != 0) goto XB;
	
	XC:
	cxc++;
	c = rand() % 100;
	if (c % 2 != 0) goto XC;
	R = a + b - c;
	cout << a << '+' << b << '-' << c << '=' << R << endl;
	
	if (a >= 0 && a < 20) intera++;
	if (b >= 20 && b < 50) interb++;
	if (c >= 50 && c < 100) interc++;

	if (R > 0) Rpoz++;
	else if (R < 0) Rneg++;
	
	if (R >= -10 && R < 10) n++;
	else if (R >= 20 && R < 50) n--; 

	if (C < n) goto Eticheta;
	
	cout << "a primit valori incorecte de:" << cxa << " ori\n" << "b primit valori incorecte de:" << cxb << " ori\n" << "c primit valori incorecte de:" << cxc << " ori" << endl;
	cout << "a a facut parte din intervalul 0...20 de:" << intera << " ori\n" << "b a facut parte din intervalul 20...50 de:" << interb << " ori\n" << "c a facut parte din intervalul 50...100 de:" << interc << " ori" << endl;
	cout << "Raspunul a fost pozitiv de:" << Rpoz << " ori,si a fost negativ de: " << Rneg << " ori" << endl;
	cout << "a+b-c a fost efectuat de " << n << " ori." << endl;
	return 0;
}
/*
Acasa:
Calculam a+b-c de n ori din urmatoarele conditii:
a,b,c 0...100
1.a,b,c -> primesc doar valori pare
2.Sa se contorizeze de cate ori a b si c au primit valori incorecte

3.Sa se contorizeze de cate ori raspunul a fost pozitiv si raspuns negativ
4.Sa se contorizeze de cate ori a apartine intervalui 0...20,b apartine intervalui 20...50,c apartine intervalui 50...100
5.Daca raspunsul apratine intervalului -10...10 => nr de iteratii +1,daca R pozitiv si apartine intervalului 20...50 nr de executii -1
*/