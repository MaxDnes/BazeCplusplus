#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));
    
    int M[100][100], n;
    cout << "Cati vectori doriti sa calculati:(nu mai mult de 100 nu mai putin de 0)"<<endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        M[i][0] = rand() % 10;
        for (int j = 1; j <= M[i][0]; j++)
        {
            M[i][j] = rand()%10;
            
        }
    }
    cout << endl;

    bool k;
    for (int i = 0, temp; i < n; i++)
    {
        k = true;
        while (k)
        {
            k = false;
            for (int j = 1; j <= M[i][0] - 1; j++)
            {
                if (M[i][j] > M[i][j + 1])
                {
                    temp = M[i][j];
                    M[i][j] = M[i][j + 1];
                    M[i][j + 1] = temp;
                    k = true;
                }
            }
        }
    }

    for (int i = 0,s,Crep; i < n; i++)
    {
        s = 0;
        Crep = 0;
        cout << " V" << i + 1 << "[" << M[i][0] << "] :: ";
        for (int j = 1; j <= M[i][0]; j++)
        {
            cout << setw(3) << M[i][j];
            s += M[i][j];
            if (M[i][j] == n) Crep++;
        }
        M[n][i] = s;
        M[n + 1][i] = Crep;
        cout << endl;
    }


    cout << "  Vsuma" << "[" << n << "] :: ";
    for (int j = 0; j < n; j++)
    {
        cout << setw(3) << M[n][j];
    }

    cout << "\nVrepeta" << "[" << n+1 << "] :: ";
    for (int j = 0; j < n; j++)
    {
        cout << setw(3) << M[n+1][j];
    }
    cout << endl;

    return 0;
}
/*
Sa se calculeze suma fiecarui vector 
Si sumele -> sa se salveze intr-un vector nou

Sa se contorizeze de cate ori se repeta valoarea nr de elemente in vector
Sa se aranjeze crescator toti vectorii


Sa se schimbe cu locurile 2 vectori
vectorul x si vectorul y 
unde x si y reprezinta valoarea introdusa de utilizator
*/