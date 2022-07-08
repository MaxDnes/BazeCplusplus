#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

struct stud
{
    char nume[20];
    int ani;
    float media;
    int NrNOTE = 0;
    struct note
    {
        char DIS[100];
        int NOTA;
    }NOTE[50];
}S[100],X[10];

int main()
{
    srand(time(0));
    
    FILE* fp;

    fopen_s(&fp,"test.txt", "w+b");

    int n = 23;
    for (int i = 0; i < n; i++)
    {
        S[i].media = rand()%10*1.35;
        S[i].ani = rand() % 15;
    }

    for (int i = 0; i < n; i++) fprintf(stdout, "%d %d %f \n", i, S[i].ani, S[i].media);

    cout << " sizeof(stud = " << sizeof(stud) << " sizeofstud*" << n << " = " << sizeof(stud) * n << endl;

    fwrite(S, sizeof(stud), n, fp);

    fclose(fp);

    fopen_s(&fp, "test.txt", "r+b");
    if ((fopen_s(&fp, "file_b.txt", "r+b") == NULL))
    {
        cout << "Error";
        return 0;
    }

    int N = fread(X, sizeof(stud), 10,fp);

    for (int i = 0; i < n; i++) fprintf(stdout, "%d %d %f \n", i, X[i].ani, X[i].media);

    fclose(fp);

    return 0;
}
