﻿#include <iomanip>
#include <iostream>   //  cout si cin 
#include <cstdlib>  // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> 
using namespace std;
int main()
{
    srand(time(0));
    int a, b, c, R;
    bool Ba = false, Bb = false, Bc = false, BR = 0;
X:
    system("cls");
    cout << "\n\n\t MENIU " << endl;
    cout << "\t  1. Enter valoarea a " << endl;
    cout << "\t  2. Enter valoarea b " << endl;
    cout << "\t  3. Enter valoarea c " << endl;
    cout << "\t  4. Caluleaza a+b-c " << endl;
    cout << "\t  5. Afisati rezultatul " << endl;
    cout << "\tESC. Exit" << endl;
    switch (_getch())
    {
    case 49: cout << " Enter a="; cin >> a; Ba = true; BR = 0; break;
    case 50: cout << " Enter b="; cin >> b; Bb = true; BR = 0; break;
    case 51: cout << " Enter c="; cin >> c; Bc = true; BR = 0; break;
    case 52:
        if (Ba == false) cout << " Error:: Enter a !" << endl;
        if (!Bb) cout << " Error:: Enter b !" << endl;
        if (!Bc) cout << " Error:: Enter c !" << endl;
        if (!BR && Ba && Bb && Bc)
        {
            cout << "Sa calculat a+b-c  " << endl;
            R = a + b - c;
            BR = 1;
        }
        break;
    case 53:
        if (!BR) cout << " Error:: Ecexutati punctul 4 din meniu !" << endl;
        else cout << setw(3) << a << "+" << setw(3) << b << "-" << setw(3) << c << "=" << setw(3) << R << endl;
        break;
    case 27: exit(0);
    }
    system("pause");
    goto X;
    // prin alte 3 algoritmi 
    return 0;
}
/*
Sa se calculeze a+b-c
Cu ajutorul unui meniu
*/

/*
Acasa
Sa se realizeze a+b-c prin intermediul unui meniu cu ajutorul altor 3 algoritmi
int > 0 altfel resetam
say int > 2 afltef resetam 2
*/