#include <iomanip>
#include <iostream>   //  cout si cin 
#include <cstdlib>  // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> 
#include <cstring>  // string.h
#include <windows.h>

using namespace std;

int main()
{
    srand(time(0));

    FILE* fp;

    fp = fopen("test.txt", "w+ ");

    int M[10][10];
    int *n = new int, *m = new int;

    cout << "n="; cin >> *n;
    cout << "m="; cin >> *m;

    fprintf(fp, "%d %d\n", *n, *m);

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            M[i][j] = rand() % 20;
            fprintf(fp, "%d ", M[i][j]);
        }
        fprintf(fp, "\n");
    }

    cout << "Done!"<<endl;
    system("pause");
    system("cls");

    float M1[10][10];

    cout << "n="; cin >> *n;
    cout << "m="; cin >> *m;

    fprintf(fp, "%d %d\n", *n, *m);

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            M1[i][j] = rand() % 20 * 1.35;
            fprintf(fp, "%f ", M1[i][j]);
        }
        fprintf(fp, "\n");
    }

    cout << "Done!" << endl;
    system("pause");
    system("cls");

    char M2[10][10];

    cout << "n="; cin >> *n;
    cout << "m="; cin >> *m;

    fprintf(fp, "%d %d\n", *n, *m);

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            M2[i][j] = 'a' + rand() % 27;
            fprintf(fp, "%c ", M2[i][j]);
        }
        fprintf(fp, "\n");
    }

    cout << "Done!" << endl;
    system("pause");
    system("cls");

    fclose(fp);

    int Mc[10][10];
    float Mc1[10][10];
    char Mc2[10][10];

    fopen("test.txt", "r+");

    
    fprintf(stdout, "Matricea int:\n");
    fscanf(fp, "%d %d", n, m);

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            fscanf(fp, "%d ", &Mc[i][j]);
            fprintf(stdout, " %d ", Mc[i][j]);
        }
        cout << endl;
    }
        
    fprintf(stdout, "Matricea float:\n");
    fscanf(fp, "%d %d", n, m);

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            fscanf(fp, "%f", &Mc1[i][j]);
            fprintf(stdout, " %f ", Mc1[i][j]);
        }
        cout << endl;
    }

    fprintf(stdout, "Matricea char:");
    fscanf(fp, "%d %d", n, m);

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            fscanf(fp, "%c", &Mc2[i][j]);
            fprintf(stdout, " %c ", Mc2[i][j]);
        }
        fscanf(fp, "%c");
        cout << endl;
    }

    fclose(fp);
    
    return 0;
}
/*

Sa se creeze u fisier cu numele si extensia introdusa de utiliztor

Sa se calculeze a+b-c de n ori
Sa se pastreze in fisier valoarea a,b,c is rezultatul

Sa se creeze un vector din n elemente
Sa se salveze in fisier 
Sa se extraga din fisier
Sa se salveze intr-un vector nou

Sa se creeze 3 matrici [][]
int flaot char
1.Sa se salveze toate 3 matrici matrix.txt
2.Sa se extraga 3 matrici din fisier + afisare

*/
