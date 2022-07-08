#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void clsps()
{
    system("pause");
    system("cls");
}


template <typename valtype>
valtype Insertval(const char mess[256], valtype x)
{
    cout << mess;
    cin >> x;
    return x;
}

template <typename T>
void showsetw(T x,T v)
{
    cout << setw(x)<< v;
}

template <typename T0>
void show(const char mess[256], T0 x)
{
    cout << mess << x << endl;
}

template <typename T1>
T1 InserT(T1 x,const char mess[256])
{
    cout << mess;
    cin >> x;
    return x;
}

template <typename T2>
void insertV(T2 v, int *n)
{
    cout << endl;
    for (int i = 0; i < *n; i++)
    {
        *(v + i) = InserT(1," ");
    }
}

template <typename T3>
void showV(T3* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        cout << setw(3) << *(v + i);
    }
    cout << endl;
}

template <typename T4>
void sortcr(T4* v, int* n)
{
    for (int i = 0; i < *n - 1; i++)
        for (int j = 0, temp; j < *n - i - 1; j++)
            if (v[j] > v[j + 1])
            {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
}

template <typename T5>
void sortdcr(T5* v, int* n)
{
    for (int i = 0; i < *n - 1; i++)
        for (int j = 0, temp; j < *n - i - 1; j++)
            if (v[j] < v[j + 1])
            {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
}

template <typename T6>
T6 getmax(T6* v, int* n)
{
    int* max = new int;
    *max = *v;

    for (int i = 1; i < *n; i++)
    {
        if (int(*(v + i)) > *max) *max = *(v + i);
    }
    return *max;
}

template <typename T6>
T6 getmin(T6* v, int* n)
{
    int* min = new int;
    *min = *v;

    for (int i = 1; i < *n; i++)
    {
        if (int(*(v + i)) < *min) *min = *(v + i);
    }
    return *min;
}

template <typename T7>
T7 insM(T7** M, int* n, int* m)
{
    for (int i = 0; i < *n; i++)
    {
        M[i] = new int[*m];
        for (int j = 0; j < *m; j++) M[i][j] = rand() % 10;
    }
}

template <typename T8>
T8 showM(T8 ** M, int* n, int* m)
{
    for (int i = 0; i < *n; i++)
    {
        M[i] = new int[*m];
        for (int j = 0; j < *m; j++) M[i][j];
    }
}

template <typename T9>
T9 sdgn(T9** M, int* n, int* m,bool x)
{
    T9 * sum = new T9;
    *sum = 0;
    if (x)
    {
        for (int i = 0; i < *n; i++)
        {
            for (int j = 0; j < *m; j++)
            {
                if (i == j) *sum += M[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < *n; i++)
        {
            for (int j = 0; j < *m; j++)
            {
                if (j == *m - 1 - i) *sum += M[i][j];
            }
            cout << endl;
        }
    }
    return *sum;

}

template <typename T10>
T10 sminmax_c1(T10 ** M, int *n,int *m,bool define)
{
    if (define == 0)
    {
        T10* s = new T10;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        T10* max = new T10;
        *max = M[0][0];
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        T10* min = new T10;
        *min = M[0][0];
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

template <typename T11>
T11 sminmax_c2(T11** M, int* n, int* m, bool define)
{
    if (define == 0)
    {
        T11* s = new T11;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        T11* max = new T11;
        *max = M[0][*m / 2];
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        T11* min = new T11;
        *min = M[0][*m / 2];
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

template <typename T12>
T12 sminmax_c3(T12 ** M, int* n, int* m, bool define)
{
    if (define == 0)
    {
        T12* s = new T12;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        T12* max = new T12;
        *max = M[*n / 2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        T12* min = new T12;
        *min = M[*n / 2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

template <typename T13>
T13 sminmax_c4(T13 ** M, int* n, int* m, bool define)
{
    if (define == 0)
    {
        T13* s = new T13;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        T13* max = new T13;
        *max = M[*n / 2][*m / 2];
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        T13* min = new T13;
        *min = M[*n / 2][*m / 2];
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

int main()
{
    int* n = new int;
    
    *n = Insertval("n=", *n);

    int* v = new int[*n];


    insertV(v, n);
    showV(v, n);


    show("max=", getmax(v, n));
    show("min=", getmin(v, n));

    sortcr(v, n);
    show("Vectorul sortat crescator:",' '); showV(v, n);

    sortdcr(v, n);
    show("Vectorul sortat descrescator:", ' '); showV(v, n);


    clsps();


    int* n1 = new int;
    *n1 = Insertval("n=", *n1);

    double* v1 = new double[*n1];


    insertV(v1, n1);
    showV(v1, n1);


    show("max=", getmax(v1, n1));
    show("min=", getmin(v1, n1));

    sortcr(v1, n1);
    show("Vectorul sortat crescator:", ' '); showV(v1, n1);

    sortdcr(v1, n1);
    show("Vectorul sortat descrescator:", ' '); showV(v1, n1);


    clsps();

    int * n2 = new int;
    *n2 = Insertval("n=", *n2);

    char* v2 = new char[*n2];


    insertV(v2, n2);
    showV(v2, n2);


    show("max=", getmax(v2, n2));
    show("min=", getmin(v2, n2));

    sortcr(v2, n2);
    show("Vectorul sortat crescator:", ' '); showV(v2, n2);

    sortdcr(v2, n2);
    show("Vectorul sortat descrescator:", ' '); showV(v2, n2);


    clsps();


    int* n3 = new int;
    *n3 = Insertval("n=", *n3);

    bool* v3 = new bool[*n3];


    insertV(v3, n3);
    showV(v3, n3);


    show("max=", getmax(v3, n3));
    show("min=", getmin(v3, n3));

    sortcr(v3, n3);
    show("Vectorul sortat crescator:", ' '); showV(v3, n3);

    sortdcr(v3, n3);
    show("Vectorul sortat descrescator:", ' '); showV(v3, n3);


    clsps();


    //----------------------------------------//

    int* m = new int, * m1 = new int, * m2 = new int, * m3 = new int;

    *n = Insertval("n=", 1);
    *m = Insertval("m=", 2);

    int** M = new int* [*n];

    show("Suma Dp=", sdgn(M,n,m,true));
    show("Suma Ds=", sdgn(M, n, m, false));

    cout << endl;

    show("Suma cadranul 1:", sminmax_c1(M, n, m, 0));
    show("Suma cadranul 2:", sminmax_c2(M, n, m, 0));
    show("Suma cadranul 3:", sminmax_c3(M, n, m, 0));
    show("Suma cadranul 4:", sminmax_c4(M, n, m, 0));

    cout << endl;

    show("Maximum cadranul 1:", sminmax_c1(M, n, m, 1));
    show("Maximum cadranul 2:", sminmax_c2(M, n, m, 1));
    show("Maximum cadranul 3:", sminmax_c3(M, n, m, 1));
    show("Maximum cadranul 4:", sminmax_c4(M, n, m, 1));

    cout << endl;

    show("Minimum cadranul 1:", sminmax_c1(M, n, m, 2));
    show("Minimum cadranul 2:", sminmax_c2(M, n, m, 2));
    show("Minimum cadranul 3:", sminmax_c3(M, n, m, 2));
    show("Minimum cadranul 4:", sminmax_c4(M, n, m, 2));

    clsps();

    *n1 = Insertval("n=", 1);
    *m1 = Insertval("m=", 2);

    double** M1 = new double* [*n1];

    show("Suma Dp=", sdgn(M1, n1, m1, true));
    show("Suma Ds=", sdgn(M1, n1, m1, false));

    cout << endl;

    show("Suma cadranul 1:", sminmax_c1(M1, n1, m1, 0));
    show("Suma cadranul 2:", sminmax_c2(M1, n1, m1, 0));
    show("Suma cadranul 3:", sminmax_c3(M1, n1, m1, 0));
    show("Suma cadranul 4:", sminmax_c4(M1, n1, m1, 0));

    cout << endl;

    show("Maximum cadranul 1:", sminmax_c1(M1, n1, m1, 1));
    show("Maximum cadranul 2:", sminmax_c2(M1, n1, m1, 1));
    show("Maximum cadranul 3:", sminmax_c3(M1, n1, m1, 1));
    show("Maximum cadranul 4:", sminmax_c4(M1, n1, m1, 1));

    cout << endl;

    show("Minimum cadranul 1:", sminmax_c1(M1, n1, m1, 2));
    show("Minimum cadranul 2:", sminmax_c2(M1, n1, m1, 2));
    show("Minimum cadranul 3:", sminmax_c3(M1, n1, m1, 2));
    show("Minimum cadranul 4:", sminmax_c4(M1, n1, m1, 2));

    clsps();

    *n2 = Insertval("n=", 1);
    *m2 = Insertval("m=", 2);

    char** M2 = new char* [*n2];

    show("Suma Dp=", sdgn(M2, n2, m2, true));
    show("Suma Ds=", sdgn(M2, n2, m2, false));

    cout << endl;

    show("Suma cadranul 1:", sminmax_c1(M2, n2, m2, 0));
    show("Suma cadranul 2:", sminmax_c2(M2, n2, m2, 0));
    show("Suma cadranul 3:", sminmax_c3(M2, n2, m2, 0));
    show("Suma cadranul 4:", sminmax_c4(M2, n2, m2, 0));

    cout << endl;

    show("Maximum cadranul 1:", sminmax_c1(M2, n2, m2, 1));
    show("Maximum cadranul 2:", sminmax_c2(M2, n2, m2, 1));
    show("Maximum cadranul 3:", sminmax_c3(M2, n2, m2, 1));
    show("Maximum cadranul 4:", sminmax_c4(M2, n2, m2, 1));

    cout << endl;

    show("Minimum cadranul 1:", sminmax_c1(M2, n2, m2, 2));
    show("Minimum cadranul 2:", sminmax_c2(M2, n2, m2, 2));
    show("Minimum cadranul 3:", sminmax_c3(M2, n2, m2, 2));
    show("Minimum cadranul 4:", sminmax_c4(M2, n2, m2, 2));

    clsps();


    *n3 = Insertval("n=", 1);
    *m3 = Insertval("m=", 2);

    bool** M3 = new bool* [*n];

    show("Suma Dp=", sdgn(M3, n3, m3, true));
    show("Suma Ds=", sdgn(M3, n3, m3, false));

    cout << endl;

    show("Suma cadranul 1:", sminmax_c1(M3, n3, m3, 0));
    show("Suma cadranul 2:", sminmax_c2(M3, n3, m3, 0));
    show("Suma cadranul 3:", sminmax_c3(M3, n3, m3, 0));
    show("Suma cadranul 4:", sminmax_c4(M3, n3, m3, 0));

    cout << endl;

    show("Maximum cadranul 1:", sminmax_c1(M3, n3, m3, 1));
    show("Maximum cadranul 2:", sminmax_c2(M3, n3, m3, 1));
    show("Maximum cadranul 3:", sminmax_c3(M3, n3, m3, 1));
    show("Maximum cadranul 4:", sminmax_c4(M3, n3, m3, 1));

    cout << endl;

    show("Minimum cadranul 1:", sminmax_c1(M3, n3, m3, 2));
    show("Minimum cadranul 2:", sminmax_c2(M3, n3, m3, 2));
    show("Minimum cadranul 3:", sminmax_c3(M3, n3, m3, 2));
    show("Minimum cadranul 4:", sminmax_c4(M3, n3, m3, 2));


    clsps();



};