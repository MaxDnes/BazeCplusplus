#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int n;
	cout << "Enter n:";
	cin >> n;
	cout << '\n';
	for (int i = 0, a, b, c, R, i1; i < n; i++)
	{
		i1 = -1;
		do
		{
			a = rand() % 100;
			i1++;
		} while (a % 2 != 0);
		do
		{
			b = rand() % 100;
		} while (b % 2 == 0 && ( b < 10 || b >= 20 ));
		do
		{
			c = rand() % 100;
		} while ( c < 22 || (c >=44 && c < 55) || c >= 77);
		R = a + b - c;
		cout << "Ecuatia nr " << i+1 << '\n' << a << " + " << b << " - " << c << " = " << R << endl;
		for (int i2 = 0, x, y, z, n1=rand()%5; R % 2 == 0 && i2 < n1;i2++)
		{
			x = rand() % 15;
			y = rand() % 15;
			z = rand() % 15;
			cout << '\n' << x << " + " << y << " - " << z << " = " << x + y - z << endl;
		}
		cout << "a -> a primit valori impare de " << i1 << " ori.\n\n" << endl;
	}
	return 0;
}
/*
Sa se calculeze a+b-c de n ori
1.a => pare 0...100
2.b => 0...100, impare din 10...20
3.c => 0...100, c poate primi valori 22...44 sau 55...77
4.R => par se calculeaza x+y-z de rand ori
5.Sa se contorizeze de cate ori a -> a primit valori impare pentru fiecare iteratie
*/
