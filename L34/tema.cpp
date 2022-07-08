#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cstring> // string.h

#include <windows.h>

using namespace std;


struct sinfo
{
    char nume[256];
    int ani;
    double media;
}S[100];


int MainMenu()
{
    system("cls");
    cout << "\n\n\t *** Main Menu ***" << endl;
    cout << "\t  1. Insert STUDENT  " << endl;
    cout << "\t  2. Show STUDENT  " << endl;
    cout << "\tESC. EXIT  " << endl;
    return _getch();
}
void insert(int* n)
{
    system("cls");
    do
    {
        cout << " Student [" << (*n) + 1 << "]" << endl;
        cout << " Enter nume  :: "; cin >> S[*n].nume;
        cout << " Enter ani   :: "; cin >> S[*n].ani;
        cout << " Enter media :: "; cin >> S[*n].media;
        (*n)++;
        cout << " ESC - exit,  any key ...." << endl;
    } while (_getch() != 27);
}
void show(int n)
{
    system("cls");
    if (n > 0)
        for (int i = 0; i < n; i++)
        {
            cout << " Student [" << i + 1 << "]" << endl;
            cout << " Nume  " << S[i].nume << endl;
            cout << " Ani " << S[i].ani << endl;
            cout << " Media " << S[i].media << endl;
        }
    else cout << " Nu sunt studenti pentru afisare " << endl;
}
int main()
{
    srand(time(0));

    int C = 0;

    while (1)
    {
        switch (MainMenu())
        {
        case 49:  insert(&C); system("pause"); break;
        case 50:  show(C); system("pause"); break;
        case 27: exit(0);
        }
    }
    return 0;
}
