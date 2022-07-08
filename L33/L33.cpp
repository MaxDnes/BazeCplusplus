#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


int INSert(const char* mess,int *x)
{
    cout << mess;
    cin >> *x;
    return *x;
}

double INSert(const char* mess,double *x)
{
    cout << mess;
    cin >> *x;
    return *x;
}

char INSert(const char* mess, char* x)
{
    cout << mess;
    cin >> *x;
    return *x;
}

bool INSert(const char* mess, bool* x)
{
    cout << mess;
    cin >> *x;
    return *x;
}

void show(const char* mess, int* x)
{
    cout << mess << *x << endl;
}

void show(const char* mess, double* x)
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


void pause_cls()
{
    system("pause");
    system("cls");
}

int insertV(int* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        *(v + i) = rand() % 15;
    }
}

double insertV(double* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        *(v + i) = INSert("v_double = ",4.14);
    }
}

char insertV(char* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        *(v + i) = rand() % 15;
    }
}

bool insertV(bool* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        *(v + i) = rand() % 15;
    }
}

template <typename T1>
T1 suma(T1 v[], int n)
{
    T1 s = 0;
    for (int i = 0; i < n; i++) s += v[i];
    return s;
}

int main()
{
    srand(time(0));
    
    int* n = new int;

    int* Vint = new int[*n];
    double* Vdouble = new double[*n];
    char* Vchar = new char[*n];
    bool* Vbool = new bool[*n];

    insertV(Vint, n);

    return 0;
}
/*

Sa se creeze un V[] de n elemente
1.Suma
2.Max min
3.Sa se creeze si sa afiseze [][], n,m

Sa se calc a+b-c pt tipuri de date int si double

Sa se creeze un vector de n elemente int double char bool

Sa se calculeze suma cectorului

Acasa:

[] -> int,double,char
supraincarcare - template
1. max min
2.sort crescator si descrescator 
---------------------------------

[][]n -> int double char
supraincarcare - template
1.suma DP si DS 
2.suma,max,min, pt fiecare cadran

*/