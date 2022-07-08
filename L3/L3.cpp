#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Introduceti a:";
    cin >> a;

    cout << "Introduceti b:";
    cin >> b;

    cout << "Introduceti c:";
    cin >> c;
    int r1 = a + b - c;
    double r2 = double(r1) / (a - c);
    double r3 = (c + b) / double(a);
    double r4 = r2 * r3;
    int r5 = c+b-a;
    double r6 = r4 / r5;
    //cout << ((double)(a + b - c) / (a - c) * (double(c) + b / a)) / (c + b - a) << endl;
    cout << r6 << endl;
    //cout << d / e << endl;
    return 0;
}

/*
Sa se rezolve urmatoarea ecuatie
((a+b-c/a-c) * (c+b/a))  / c+b-a
*/

/*
Acasa:
Sa se creeze o ecuatie cu minim 5 var. Ecuatia trebuie sa contina minim 
5 +
10 -
10*
5/

Sa se realizeze calculul prin extragerea subecuatiilor.

*/
