#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	
	int a, b, c, d, x, y;

	a = rand() % 10 + 10;
	b = rand() % 10 + 20;
	c = rand() % 20 - 10;
	d = rand() % 20; //un nr random pt compararea cu rezultatul final
	x = rand() % 26;
	y = rand() % 35;

	//Fara a=1 programul va face a=a in 100% de cazuri
	a < 15 ? a=1 : a ;
	
	b >= x ? b=rand()%x : b=rand()%y;

	c == 0 ? c=1 : a=2;

	bool z = a + b - c > d ? 1 : 0;

	cout << (z ? "Da,raspunsul e mai mare ca un nr din intervalul 0..20" : "Nu,raspunsul e mai mic ca un nr din intervalul 0..20") << "\nRaspunsul fiind:"<<a+b-c<<"\nNr din intervalul 0..20 este:" << d << endl;

	return 0;
}
