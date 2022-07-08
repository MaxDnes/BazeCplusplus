#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

template <typename T>
void showsetw(int w, T x)
{
    cout << setw(w) << x;
}

void showT(const char mess[256])
{
    cout << mess<<endl;
}

template <typename T>
T InserT(const char mess[256], T x)
{
    cout << mess;
    cin >> x;
    return x;
}

template <typename T>
void InserTM(T **M, int *n, int *m,int x,int itr)
{
    if (itr < x)
    {
        for (int i = 0; i < *n; i++)
        {
            M[i] = new int[*m];
            for (int j = 0; j < *m;j++)
                M[i][j] = rand() % 15;
        }
        InserTM(M, n, m, x, ++itr);
    }
}


template <typename T>
void ShoWM(T ** M, int* n, int* m, int x, int itr)
{
    if (itr < x)
    {
        for (int i = 0; i < *n; i++)
        {
            for (int j = 0; j < *m; j++)
            {
                showsetw(3, M[i][j]);
            }
            cout << endl;
        }
        ShoWM(M, n, m, x, ++itr);
    }
}

template <typename T>
void ShoWDgn(T** M, int* n, int* m, bool dgn, int x, int itr)
{
    if (itr < x)
    {
        if (dgn)
        {
            for (int i = 0; i < *n; i++)
            {
                for (int j = 0; j < *m; j++)
                {
                    if (i == j) showsetw(3, M[i][j]);
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
                    if (j == *m - 1 - i) showsetw(3, M[i][j]);
                }
                cout << endl;
            }
        }
        ShoWDgn(M, n, m, dgn, x, ++itr);
    }
}

int main()
{
    srand(time(0));

    int* n = new int, * m = new int;

    *n = InserT("n=", *n);
    *m = InserT("m=", *m);

    int** M = new int*[*n];

    InserTM(M, n, m, 1,0);

    ShoWM(M, n, m, 1, 0);

    showT("Diagonala pricipala: ");
    ShoWDgn(M, n, m, true, 1, 0);
    
    showT("Diagonala secundarsa: ");
    ShoWDgn(M, n, m, false, 1, 0);

    return 0;
}
