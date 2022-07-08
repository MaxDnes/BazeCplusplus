#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iomanip>

using namespace std;

int insertINT(const char mess[256])
{
    cout << mess;

    int x;
    cin >> x;

    return x;
}

int getrdvl()
{
    return rand() % 15;
}

void showText(const char mess[256])
{
    cout << mess << endl;
}

int abc()
{
    int* a = new int, * b = new int, * c = new int;
    *a = getrdvl();
    *b = getrdvl();
    *c = getrdvl();
    cout << '\n' << *a << " + " << *b << " - " << *c << " = " << *a + *b - *c << endl;
    return *a + *b - *c;
}

int sR(int R, int sR)
{
    return sR+=R;
}

int getmax(int R, int Rmaxc)
{
    if (R > Rmaxc) return R;
    else return Rmaxc;
}


void calc(int n)
{
    int* Rmax = new int;
    int* sr = new int;
    *sr = 0;
    *Rmax = INT_MIN;
    for (int i = 0,*R = new int; i < n; i++)
    {
        *R = abc();
        *sr = sR(*R, *sr);
        *Rmax = getmax(*R,*Rmax);
    }
    cout << " Suma raspunsurilor: " << *sr <<endl;
    cout << " Raspunsul maximal: " << *Rmax <<endl;
    delete Rmax,sr;
}

int main()
{
    srand(time(0));
    
    int* n = new int;
    *n = insertINT(" Enter n:");

    calc(*n);

    delete n;

    return 0;
}



/*

Sa se calculeze a+b-c

Acasa:
Sa se calculeze a+b-c
de n ori
Reiesind din urmatoarele conditii:
1.a,b,c primesc valori aleatorii din intervale indicat de programator (de noi)
2.Sa se calculeze suma raspunsurilor
3.Sa se gaseasca R maximal

*/
