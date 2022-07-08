#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int n, CRP = 0, CRa = 0, CRb = 0, CRc = 0;
	cout << "n="; cin >> n;
	for (int a, b, c, R, i = 0,i2=1,d=0,R1,R2=0,lgth=0,Rfin=0;i < n;i++,lgth=0,Rfin=0,R2=0,i2=0)
	{
		a = rand() % 100;
		b = rand() % 100;
		c = rand() % 100;
		R = a + b - c;
		if (R % 2 == 0) CRP++;
		if (R == a) CRa++;
		if (R == b) CRb++;
		if (R == c) CRc++;
		cout << "\n\n" << a << " + " << b << " - " << c << " = " << R <<endl;
		R1 = R;
		do
		{
			lgth++;
			R1 /= 10;
		} while (R1 != 0);
		R1 = R;
		do
		{
			d = pow(10, i2);
			R1 = R % d; 
			R2 = (R1 - R2) / pow(10, i2 - 1);;
			Rfin += R2;
			i2++;
		} while (i2 < lgth + 1);
		cout << "\nSuma cifrelor raspunsului:" << R <<" este: "<<abs(Rfin) << endl;
	}
	cout << "\n\nRaspunsul a fost par de: "     << CRP<< " ori." << endl;
	cout << "a -> a coincis cu raspunsul de "   << CRa << " ori." << endl;
	cout << "b -> b a coincis cu raspunsul de " << CRa << " ori." << endl;
	cout << "c -> c a coincis cu raspunsul de " << CRa << " ori." << endl;
	return 0;
}
/*
Acasa:
Sa se calculeze a+b-c de n ori

1.Sa se contorizeze de cate ori, R -> par 
2.Sa se contorizeze de cate ori, R -> a coincis cu variabila a,b,c
3.Sa se calculeze suma cifrelor din R per iteratie

*/