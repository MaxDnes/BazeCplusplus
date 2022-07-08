#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int insertINT(const char mess[256])
{
    int x;
    cout << mess;
    cin >> x;
    return x;
}

int randINT(int x)
{
    return rand() % x;
}

int suma(int v1, int v2)
{
    return v1 + v2;
}

void show(const char mess[256], int x)
{
    cout << mess << x;
}

void showTxt(const char mess[256])
{
    cout << mess;
}

void insertV(int v[], int n)
{
    for (int i = 0; i < n; i = suma(i, 1)) v[i] = randINT(10);
}

void showV(int v[], int n)
{
    for (int i = 1; i < n; i = suma(i, 1)) show(" ", v[i]);
}

int minmaxV(int v[],int n, bool m)
{
    if (m)
    {
        int min = v[0];
        for (int i = 1; i < n; i = suma(i, 1))
        {
            if (min > v[i]) min = v[i];
        }
        return min;
    }
    else
    {
        int max = v[0];
        for (int i = 1; i < n; i = suma(i, 1))
        {
            if (v[i] > max) max = v[i];
        }
        return max;
    }
}

void insertM(int X[][100], int n, int m)
{
    for (int i = 0; i < n; i = suma(i, 1))
        for (int j = 0; j < m; j = suma(j,1)) X[i][j] = randINT(10);
}
void showM(int X[][100], int n, int m)
{
    for (int i = 0; i < n; i = suma(i, 1))
    {
        for (int j = 0; j < m; j = suma(j, 1)) cout << setw(3) << X[i][j];
        cout << endl;
    }
}

void showdgn(int M[][100], int n, int m, bool d)
{
    if (d)
    {
        for (int i = 0; i < n; i = suma(i, 1))
        {
            for (int j = 0; j < m; j = suma(j, 1))
            {
                if (i == j) show("   ", M[i][i]);
                else showTxt("   ");
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i = suma(i,1))
        {
            for (int j = 0; j < m; j = suma(j, 1))
            {
                if (j == m - 1 - i) show("   ", M[i][j]);
                else showTxt("   ");
            }
            cout << endl;
        }
    }
}

int main()
{
    srand(time(0));
	int v[100];

    int n = insertINT("Enter n:");
    insertV(v, n);
    showV(v, n);


    show("\nMinimul vectorului: ", minmaxV(v, n, true));

    show("\nMaximul vectorului: ", minmaxV(v, n, false));

    int M[100][100];

    n = insertINT("\n\nEnter n:");
    int m = insertINT("Enter m:");
    insertM(M, n, m);
    showM(M, n, m);

    showTxt("\nDiagonala principala:\n");
    showdgn(M, n, m, true);

    showTxt("\nDiagonala secundara:\n");
    showdgn(M, n, m, false);

}
/*

Sa se realizeze o functie care poate calcula si valoarea maxima si valoarea minima
Sa se apeleze pentru a depista si maximum si sa se apeleze si minimum (2 apelari)
(bool/contor ce max = func(V[],0/1)

Sa se creeze o functie care va afisa diagonala principala sau diagonala secundara
similar o func 2 apeluri


*/
