#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

template <typename T>
T InserT(const char mess[256], T x)
{
    cout << mess;
    cin >> x;
    return x;
}

template <typename T>
void ShoW(const char mess[256], T x)
{
    cout << mess << x << endl;
}

int grvlint(int n)
{
    return rand() % n;
}


int maxminsabc(int* v, int* n, int act)
{
    if (act == 0)
    {
        int* sum = new int;
        *sum = *v;
        for (int i = 1; i < *n; i++)
            *sum += *(v + i);
        return *sum;
    }
    else if (act == 1)
    {
        int* max = new int;
        *max = *v;
        for (int i = 1; i < *n; i++)
        {
            if (*max < *(v + i)) *max = *(v + i);
        }
        return *max;
    }
    else
    {
        int* min = new int;
        *min = *v;
        for (int i = 1; i < *n; i++)
        {
            if (*min > *(v + i)) *min = *(v + i);
        }
        return *min;
    }
}

struct abc
{
    int a;
    int b;
    int c;
    int R;
};

int main()
{
    srand(time(0));

    abc ABC;

    int* n = new int;
    *n = InserT("n=", 4);

    int* tvals = new int[*n];

    ABC.a = grvlint(5);
    ABC.b = grvlint(5);
    ABC.c = grvlint(5);
    cout << ABC.a << " + " << ABC.b << " - " << ABC.c << " = " << ABC.a + ABC.b - ABC.c << endl;
    ABC.R = ABC.a + ABC.b - ABC.c;
    tvals[0] = ABC.R;

    for (int i = 1; i < *n; i++)
    {
        ABC.a = grvlint(25);
        ABC.b = grvlint(25);
        ABC.c = grvlint(25);
        cout << ABC.a << " + " << ABC.b << " - " << ABC.c << " = " << ABC.a + ABC.b - ABC.c << endl;
        tvals[i] = ABC.a + ABC.b - ABC.c;
    }

    ShoW("Suma= ", maxminsabc(tvals, n, 0));
    ShoW("Max= ", maxminsabc(tvals, n, 1));
    ShoW("Min= ", maxminsabc(tvals, n, 2));

    return 0;
}


/*



*/