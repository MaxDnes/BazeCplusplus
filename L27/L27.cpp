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

    int *n = new int;
    cout << "n=";
    cin >> *n;
    int *v = new int[*n];

    system("cls");

    cout << "Vectorul initial:" << endl;
    for (int i = 0; i < *n; i++)
    {
        *(v+i) = rand() % 10;
        cout << "v["<<i<<"]="<<*(v+i) << endl;
    }

    cout << "\nVectorul sortat crescator:" << endl;

    for (int i = 0,*temp = new int; i < *n; i++)
    {
        for (int j = i + 1;j < *n;j++)
        {
            if (*(v + j) < *(v + i))
            {
                *temp = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = *temp;
            }
        }
    }
    
    for (int i = 0; i < *n; i++)
    {
        cout << "v[" << i << "]=" << *(v + i) << endl;
    }

    cout << "\nVectorul sortat descrescator:" << endl;

    for (int i = 0,*temp = new int; i < *n; i++)
    {
        for (int j = i + 1;j < *n;j++)
        {
            if (*(v + j) > *(v + i))
            {
                *temp = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = *temp;
            }
        }
    }

    for (int i = 0; i < *n; i++)
    {
        cout << "v[" << i << "]=" << *(v + i) << endl;
    }

    system("pause");
    system("cls");


    int *x = new int;

    do
    {
        system("cls");
        cout << "Cate elemente maxime doriti sa gasiti?" << endl;
        cin >> *x;
    } while (*x > *n || *x <= 0);
    


   /* int k, poz, pozMAX[100], max;
    bool q;
    int *pk, *ppoz, *ppozMAX, *pmax;
    bool *pq;*/

   /* pk = &k;
    ppoz = &poz;
    ppozMAX = pozMAX;
    pmax = &max;
    pq = &q;*/

   /* *pk = 0;*/

    int *k = new int;
    int *poz = new int;
    int *pozMax = new int[*n];
    int* max = new int;
    bool *q = new bool;

    *k = 0;

    while (*k < *x)
    {
        *max = INT_MIN;
        for (int i = 0; i < *n; i++)
        {
            if (*max < *(v+i))
            {
                *q = true;
                for (int j = 0; j < *k; j++)
                {
                    if (*(pozMax+j) == i) { *q = false; break; }
                }
                if (*q)
                {
                    *max = *(v+i);
                    *poz = i;
                }
            }
        }
        *(pozMax +*k) = *poz;
        cout << *k << "  max=" << *max << "  poz=" << *poz << endl;
        *k+=1;
    }

    return 0;
}
/*
a+b-c , n ori  - prin pointeri

suma R
Sa se contorizeze cate R au fost sunt egale cu x
x -> user
Suma elem vector

Sa se gaseasca valoarea maximala pt double si int

Din vectorul de baza vom creea alti 2 noi vectori
1 vector va contine toate valorile pare din vectorul de baza
2 vector toate valorile impare

Acasa:
Tot prin pointeri
Sa se creeze un vector de n elemente
1.Sa se sorteze crescator si descrescator (bubble sort)
2.x maximuri

*/