#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	for (int i = 0, n = rand() % 25, a,b,c, R, x, y, z; i < n ;i++)
	{
		a = rand() % 30;
		b = rand() % 30;
		c = rand() % 30;
		R = a + b - c;
		cout << a << '+' << b << '-' << c << '=' << R << endl;
		if (R >= 5 && R < 25)
		{
			for (int i1 = 0,n1 = rand()%5; i1 < n; i1++)
			{
				x = rand() % 10;
				y = rand() % 10;
				for (z = rand() % 10; z == 0;) z = rand() % 10; //Verificam ca z sa nu fie 0
				cout << x << '+' << y << '/' << z << '=' << x + y / double(z) << endl;
			}
		}
	}

	return 0;
}
/*
a+b-c de n ori
1. R => 5...25, x+y/z de rand()% ori
*/