#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int InsertINT(const char* mess)
{
    int* x = new int;
    cout << mess;
    cin >> *x;
    return *x;
}
void show(const char* mess, int* x)
{
    cout << mess << *x << endl;
}

void showintsetw(int* w, int* x)
{
    cout << setw(*w) << *x;
}

int randint(int* x)
{
    return rand() % *x;
}

void insertV(int* v, int* n)
{
    for (int i = 0; i < *n; i++) *(v + i) = randint(n);
}

void showV(int* v, int* n)
{
    for (int i = 0; i < *n; i++) cout << setw(3) << *(v + i);
}

int* MaxV(int* v, int* n)
{
    int* max = new int;
    *max = *(v);
    for (int i = 0; i < *n; i++) if (*max < *(v + i)) *max = *(v + i);
    return max;
}

int* MinV(int* v, int* n)
{
    int* min = new int;
    *min = *(v);
    for (int i = 0; i < *n; i++) if (*min > *(v + i)) *min = *(v + i);
    return min;
}

void insertM(int** M, int* n, int* m)
{
    int* r = new int;
    *r = 15;
    for (int i = 0; i < *n; i++)
    {
        M[i] = new int[*m];
        for (int j = 0; j < *m; j++) M[i][j] = randint(r);
    }
    delete r;
}

void showM(int** M, int* n, int* m)
{
    int* w = new int;
    *w = 3;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0,*tempp = new int; j < *m; j++)
        {
            *tempp = M[i][j];
            showintsetw(w, tempp);
        }
        cout << endl;
    }
    delete w;
}

int* sumv(int *v,int *n)
{
    int *s = new int;
    *s = 0;
    for (int i = 0; i < *n; i++) *s += *(v + i);
    cout << endl;
    return s;
}

void pause_cls()
{
    system("pause");
    system("cls");
}

int main()
{
    srand(time(0));

    int* n = new int;
    *n = InsertINT("n=");

    int* v = new int[*n];

    insertV(v, n);
    showV(v, n);

    show("Suma v = ", sumv(v, n));
    show("Maximum v = ", MaxV(v, n));
    show("Minimum v = ", MinV(v, n));

    pause_cls();


    int* m = new int;

    *n = InsertINT("n=");
    *m = InsertINT("m=");

    int** M = new int*[*n];

    insertM(M, n, m);
    showM(M, n, m);

    return 0;
}
/*

Sa se creeze un V[] de n elemente
1.Suma
2.Max min
3.Sa se creeze si sa afiseze [][], n,m

*/