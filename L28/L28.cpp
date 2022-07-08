#include <iomanip>
#include <iostream>   //  cout si cin 
#include <cstdlib>  // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> 
#include <cstring>  // string.h
#include <windows.h>

using namespace std;

int main()
{
	srand(time(0));
	
	/*int* a, * b, * c;
	int *n = new int;
	cout << "n=";
	cin >> *n;
	int *v = new int[*n];

	a = new int;
	b = new int;
	c = new int;

	for (int i = 0;i < *n;i++) *(v + i) = rand() % 10;
	
	*a = rand() % 10;
	*b = rand() % 10;
	*c = rand() % 10;
	cout << *a << " + " << *b << " - " << *c << " = " << *a + *b - *c << endl;
	
	
	delete a;
	delete b;
	delete c;
	delete
		[] v;*/

    int v[100], n;
    int* pv, * pn;
    int* v = new int[*n];
    int *n = new int[*n];

    pv = v;
    pn = &n;

    cout << "Cate elemente va avea vectorul?\n";
    cin >> *pn;

    system("cls");

    cout << "Vectorul initial:" << endl;
    for (int i = 0; i < *pn; i++)
    {
        *(pv + i) = rand() % 10;
        cout << "v[" << i << "]=" << *(pv + i) << endl;
    }

    cout << "\nVectorul sortat crescator:" << endl;

    for (int i = 0, temp, *ptemp; i < *pn; i++)
    {
        ptemp = &temp;
        for (int j = i + 1;j < *pn;j++)
        {
            if (*(pv + j) < *(pv + i))
            {
                *ptemp = *(pv + i);
                *(pv + i) = *(pv + j);
                *(pv + j) = *ptemp;
            }
        }
    }

    for (int i = 0; i < *pn; i++)
    {
        cout << "v[" << i << "]=" << *(pv + i) << endl;
    }

    cout << "\nVectorul sortat descrescator:" << endl;

    for (int i = 0, temp, *ptemp; i < *pn; i++)
    {
        ptemp = &temp;
        for (int j = i + 1;j < *pn;j++)
        {
            if (*(pv + j) > *(pv + i))
            {
                *ptemp = *(pv + i);
                *(pv + i) = *(pv + j);
                *(pv + j) = *ptemp;
            }
        }
    }

    for (int i = 0; i < *pn; i++)
    {
        cout << "v[" << i << "]=" << *(pv + i) << endl;
    }

    system("pause");
    system("cls");


    int x;
    int* px;

    px = &x;

    do
    {
        system("cls");
        cout << "Cate elemente maxime doriti sa gasiti?" << endl;
        cin >> *px;
    } while (*px > *pn || *px <= 0);



    int k, poz, pozMAX[100], max;
    bool q;
    int* pk, * ppoz, * ppozMAX, * pmax;
    bool* pq;

    pk = &k;
    ppoz = &poz;
    ppozMAX = pozMAX;
    pmax = &max;
    pq = &q;

    *pk = 0;


    while (*pk < *px)
    {
        *pmax = INT_MIN;
        for (int i = 0; i < *pn; i++)
        {
            if (*pmax < *(pv + i))
            {
                *pq = true;
                for (int j = 0; j < *pk; j++)
                {
                    if (*(ppozMAX + j) == i) { *pq = false; break; }
                }
                if (*pq)
                {
                    *pmax = *(pv + i);
                    *ppoz = i;
                }
            }
        }
        *(pozMAX + *pk) = *ppoz;
        cout << *pk << "  max=" << *pmax << "  poz=" << *ppoz << endl;
        *pk += 1;
    }

    return 0;

	return 0;
}
/*
Tema:
Alocarea dinamica de memorie:
Bubble sort la vector
Max elem 
*/