#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <cmath>

using namespace std;

int main()
{
	srand(time(0));
	int a, b, c;
	a = rand() % 20;
	b = rand() % 10+10;
	c = rand() % 20+20;
	cout << 'a' << '=' << a <<endl;
	cout << 'b' << '=' << b << endl;
	cout << 'c' << '=' << c << "\n\n";
	
	a = a > 10 ? 1 : -1;
	
	b = b == 13 ? a : rand() % 20;
	//1
	c = c != 30 ? a * b : b;
	//2
	a + c >= b ? c = 1 : b = 1;
	
	cout << 'a' << '=' << a << endl;
	cout << 'b' << '=' << b << endl;
	cout << 'c' << '=' << c << endl;
	
	cout << a << '+' << b << '-' << c << '=' << a + b - c << endl;
	
	//3
	//cout << "\n R > 10 ="<< (a + b - c > 10 ? " DA " : " NU ")<<endl;
	//a + b - c > 10 ? cout << " DA " : cout << " NU ";

	bool x = 0;
	
	a + c >= b ? 1 : 0;

	cout << "\n R > 10 =" << (x ? " da" : " nu") << endl;
	//(x ? " da" : " nu")=>(true/false ? " da" : " nu")=>true ? false :
	return 0;
}
/*
Sa se calculeze a+b-c
Reesing din urmatoarele conditii:
1.Daca a > 10 => a=1 in caz contrar a=-1
2.Daca b = 13 => b=a in caz contrar b=rand()%a
3.Daca c != 30 => c=a*b in caz contrar c=b

Acasa:
a  10=..a..<20
b  20=...b...<30
c  -10=...c...<10
Sa se calculeze a+b-c reesind din urmatoarele conditii:
1.Daca a intra in intervalul 10-15 (10=a<15) daca da a=1 daca nu nu primeste nimic;
2.Daca b >= x,daca da b=rand()%x , daca nu rand()&y    x,y-la dorinta
3.Daca c == 0, daca da c=1,daca nu a =2
4.Daca raspunul > rand()%0...20,daca da DA, NU
0...20 variable
*/
