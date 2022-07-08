#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int InsertINT(const char *mess)
{
    int* x = new int;
    cout << mess;
    cin >> *x;
    return *x;
}
void show(const char *mess, int* x)
{
    cout << mess << *x << endl;
}

int* calc(int* a, int *b, int *c)
{
    int* p = new int;
    *p = *a + *b - *c;
    return p;
}

int randint(int* x)
{
    return rand() % *x;
}

void insertV(int* v, int* n)
{
    for (int i = 0; i < *n; i++) *(v+i) = randint(n);
}

void showV(int* v, int* n)
{
    for (int i = 0; i < *n; i++) cout<<setw(3)<< * (v + i);
}

int main()
{
    srand(time(0));

    //show(p,&a);

    int* n = new int;
    *n = InsertINT("n=");

    int* v = new int[*n];

    insertV(v, n);
    showV(v, n);

    return 0;
}
/*
Sa se creeze un V[] de n elemente

Sa se creeze un V[] de n elemente
1.Suma
2.Max min
3.Sa se creeze si sa afiseze [][], n,m

*/