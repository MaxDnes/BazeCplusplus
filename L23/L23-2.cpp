#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    int CUB[50][10][10];

    for (int z = 0,s=0;z < 10;z++)
    {
        cout << "Matricea [" << z + 1 << "]" << endl;
        s = 0;
        for (int i = 0;i < 10;i++)
        {
            for (int j = 0;j < 10;j++)
            {
                CUB[z][i][j] = rand() % 10;
                cout << setw(3) << CUB[z][i][j];
                s += CUB[z][i][j];
            }
            cout << endl;
        }
        cout << "Suma pe matricea[" << z+1 << "]=" << s << endl;
        
    }
    

    for (int z = 0;z < 10;z++)
    {
        for (int i = 0, max;i < 10;i++)
        {
            max = -1;
            for (int j = 0;j < 10;j++)
            {
                if (max < CUB[z][i][j]) max = CUB[z][i][j];
            }
            cout << "\nMax V[" << i << "] = " << max << endl;
            cout << endl;
        }
    }
    return 0;
}
/*
Sa se calculeze suma fiecarei matrici
Valoarea maximala per matrice
*/