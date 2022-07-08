#include <iomanip>
#include <iostream>   //  cout si cin 
#include <cstdlib>  // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> 
#include <cstring>  // string.h
#include <windows.h>

using namespace std;

void show(const char mess[256], int x)
{
    cout << mess << x << endl;
}

int insertINT(const char mess[256])
{
    cout << mess;
    int x;
    cin >> x;
    return x;
}
int insertINTrand(int X)
{
    return rand() % X;
}

int suma(int s, int R)
{
    return s + R;
}

int maximum(int max, int R)
{
    return max < R ? R : max;
}


void insertVa(int v[], int n)
{
    for (int i = 0; i < n; i++)
        v[i] = insertINTrand(10);
}
void insertVm(int v[], int n)
{
    for (int i = 0; i < n; i++)
        v[i] = insertINT(" Insert element = ");
}
void showV(int v[], int n)
{
    for (int i = 0; i < n; i++)
        show("  ", v[i]);
}
void algV(int v[], int rez[], int n)
{
    for (int i = 0; i < n; i++)
    {
        show("  ", v[i]);
        rez[0] = maximum(rez[0], v[i]);
    }
}
int sumaV(int v[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i = suma(i, 1)) s += v[i]; // s = suma(s,v[i]);
    return s;
}
int maxV(int v[], int n)
{
    int s = v[0];
    for (int i = 1; i < n; i = suma(i, 1)) s = maximum(s, v[i]);
    return s;
}
bool ex_log(int x, int y)
{
    return x < y ? true : false;
}
bool ex_log_x(int x, int y)
{
    return x == y ? true : false;
}

void insertMa(int X[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            X[i][j] = insertINTrand(10);
}
void showM(int X[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << setw(3) << X[i][j];
        cout << endl;
    }
}

int sumaM(int X[][100], int m, int n)
{
    int sm = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sm = suma(sm,X[i][j]);
    return sm;
}

int main()
{
    srand(time(0));

    int M[100][100], n = insertINT("Enter n="), m = insertINT("Enter m="),sm;

    insertMa(M, n, m);
    showM(M, n, m);

    show("Suma matricii: ", sumaM(M, n, m));

    return 0;
}

/*



Sa se realizeze o functie care poate calcula si valoarea maxima si valoarea minima
Sa se apeleze pentru a depista si maximum si sa se apeleze si minimum (2 apelari)
(bool/contor ce max = func(V[],0/1)

Sa se creeze o functie care va afisa diagonala principala sau diagonala secundara 
similar o func 2 apeluri

*/