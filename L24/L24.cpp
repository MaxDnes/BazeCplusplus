#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    int SET[24][10][10][10];

    int qn, zn, n, m;

    do
    {
        cout << "Enter nr cub = ";
        cin >> qn;
    } while (qn > 24 || qn <= 0);
    
    do
    {
        cout << "Enter nr matrici = ";
        cin >> zn;
    } while (zn > 10 || zn <= 0);

    do
    {
        cout << "Enter nr linii = ";
        cin >> n;
    } while (n > 10 || n <= 0);

    do
    {
        cout << "Enter nr coloane = ";
        cin >> m;
    } while (m > 10 || m <= 0);

    int x,y;

    do
    {
        cout << "Enter x = ";
        cin >> x;
    } while (x > 10 || x <= 0);

    do
    {
        cout << "Enter y = ";
        cin >> y;
    } while (y > 10 || y <= 0);
    
    //Afisam setul prima oara inainte de schimbarea cuburilor x<=>y
    for (int q = 0;q < qn;q++)
    {
        cout << "\n\nCUB[" << q + 1 << "] " << endl;
        for (int z = 0;z < zn;z++)
        {
            cout << "\nMatricea [" << z + 1 << "]" << endl;
            for (int i = 0;i < n;i++)
            {

                for (int j = 0;j < m;j++)
                {
                    SET[q][z][i][j] = rand() % 10;
                    cout << setw(3) << SET[q][z][i][j];
                }
                cout << endl;
            }
        }
    }
    
    for (int z = 0,temp;z < zn;z++)
    {
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < m;j++)
            {
                temp = SET[x-1][z][i][j];
                SET[x - 1][z][i][j] = SET[y - 1][z][i][j];
                SET[y - 1][z][i][j] = temp;
            }
            cout << endl;
        }
    }


    //Dupa schimbarea cuburilor x<=>y
    for (int q = 0;q < qn;q++)
    {
        cout << "\n\nCUB[" << q + 1 << "] " << endl;
        for (int z = 0;z < zn;z++)
        {
            cout << "\nMatricea [" << z + 1 << "]" << endl;
            for (int i = 0;i < n;i++)
            {

                for (int j = 0;j < m;j++)
                {
                    SET[q][z][i][j] = rand() % 10;
                    cout << setw(3) << SET[q][z][i][j];
                }
                cout << endl;
            }
        }
    }

    int max=INT_MIN,k = 0, poz,v;
    int pos[10];

    bool verificare;

    system("pause");
    system("cls");
    cout << "Cate maximuri din primul vector din fiecare cub doriti sa gasiti?" << endl;
    cin >> v;


    for (int q = 0;q < qn;q++)
    {
        cout << "Valoarea maxima din matricea 1 din cubul " << q + 1 << endl;
        while (k < v)
        {
            max = INT_MIN;
            for (int j = 0;j < m;j++)
            {
                if (max < SET[q][0][0][j])
                {
                    verificare = true;
                    for (int i = 0;i < k;i++)
                    {
                        if (pos[i] == j) { verificare = false; break; }
                    }
                    if (verificare)
                    {
                        poz = j;
                        max = SET[q][0][0][j];
                    }
                }
            }
        pos[k] = poz;
        cout << "Max " << k + 1 << " = " << max << endl;
        k++;
        }
        k = 0;
    }                
    

    return 0;
}
/*
Sa se gaseasca x valori maximale din 1 vector din 1 cub
x - enter user

Acasa:

x - maximuri din 1 vector pentru fiecare cub

Sa se schimbe 2 cuburi cu locurile

*/