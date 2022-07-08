#include <iomanip> //setw()
#include <iostream>   //  cout si cin 
#include <cstdlib>  // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> //_getch()
#include <cstring>  // string.h
#include <windows.h> //Sleep(ms)

using namespace std;

int main()
{
    srand(time(0));

    int a, b, c, n;
    int* pa, * pb, * pc, * pn;
    pa = &a;
    pb = &b;
    pc = &c;
    pn = &n;

    *pn = rand() % 10;

    int i;
    int* pi;
    pi = &i;
    *pi = 0;
    cout << *pn << endl;
    while (*pi < *pn)
    {
        *pa = rand() % 10;
        *pb = rand() % 10;
        *pc = rand() % 10;
        cout << *pa << " + " << *pb << " - " << *pc << " = " << *pa + *pb - *pc << endl;
        cout << *pi << endl;
        *pi += 1; //*pi++ - nu lucreaza
    }

    return 0;
}
/*
a+b-c , n ori  - prin pointeri
*/