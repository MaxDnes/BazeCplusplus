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

void show(const char mess[256],int x)
{
    cout << mess << x << endl;
}

void show(const char mess[256], double x)
{
    cout << mess << x << endl;
}

void show(const char mess[256], char x)
{
    cout << mess << x << endl;
}

void show(const char mess[256], bool x)
{
    cout << mess << x << endl;
}


void showsetw(int w, int x)
{
    cout << setw(w) << x;
}

void showsetw(int w, const char* mess[256])
{
    cout << setw(w) << *mess;
}

int InserT(const char mess[256],int x )
{
    cout << mess;
    cin >> x;
    return x;
}

double InserTd(const char mess[256], double x)
{
    cout << mess;
    cin >> x;
    return x;
}

bool InserTb(const char mess[256], bool x)
{
    cout << mess;
    cin >> x;
    return x;
}

char InserTc(const char mess[256], char x)
{
    cout << mess;
    cin >> x;
    return x;
}




void insertV(int *v, int *n)
{
    cout << endl;
    for (int i = 0; i < *n; i++)
    {
        *(v + i) = InserT(" ", 1);
    }
}

void insertV(double *v1, int *n1)
{
    cout << endl;
    for (int i = 0; i < *n1; i++)
    {
        *(v1 + i) = InserTd(" ", 1.4);
    }
}

void insertV(char* v2, int* n2)
{
    cout << endl;
    for (int i = 0; i < rand()%10; i++)
    {
        char c = InserTc(" ", 'l');
        *(v2 + i) = c;
    }
}

void insertV(bool* v3, int* n3)
{
    cout << endl;
    for (int i = 0; i < rand()%16; i++)
    {
        *(v3 + i) = InserTb(" ", true);
    }
}


void showV(int* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        showsetw(3, *(v + i));
    }
    cout << endl;
}

void showV(double* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        showsetw(3, *(v + i));
    }
    cout << endl;
}

void showV(char* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        showsetw(3, *(v + i));
    }
    cout << endl;
}

void showV(bool* v, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        showsetw(3, *(v + i));
    }
    cout << endl;
}


int max(int* v,int *n)
{
    int* max = new int;
    *max = *v;
    for (int i = 1; i < *n; i++)
    {
        if (*(v + i) > *max) *max = *(v + i);
    }
    return *max;
}

double max(double* v, int* n)
{
    double* max = new double;
    *max = *v;
    for (int i = 1; i < *n; i++)
    {
        if (*(v + i) > *max) *max = *(v + i);
    }
    return *max;
}

char max(char* v, int* n)
{
    int* max = new int;
    *max = *v;
    for (int i = 1; i < *n; i++)
    {
        if (int(* (v + i))  > *max) *max = *(v + i);
    }
    return *max;
}

int max(bool* v, int* n)
{
    int* max = new int;
    *max = *v;
    for (int i = 1; i < *n; i++)
    {
        if (int(*(v + i)) > *max) *max = *(v + i);
    }
    return *max;
}


int min(int* v, int* n)
{
    int* min = new int;
    *min = *v;
    for (int i = 1; i < *n; i++)
    {
        if (*(v + i) < *min) *min = *(v + i);
    }
    return *min;
}

double min(double* v, int* n)
{
    double* min = new double;
    *min = *v;
    for (int i = 1; i < *n; i++)
    {
        if (*(v + i) < *min) *min = *(v + i);
    }
    return *min;
}

char min(char* v, int* n)
{
    int* min = new int;
    *min = *v;
    for (int i = 1; i < *n; i++)
    {
        if (int(*(v + i)) < *min) *min = *(v + i);
    }
    return *min;
}

int min(bool* v, int* n)
{
    int* min = new int;
    *min = *v;
    for (int i = 1; i < *n; i++)
    {
        if (int(*(v + i)) < *min) *min = *(v + i);
    }
    return *min;
}


void sortcr(int* v, int* n)
{
    for (int i = 0; i < *n - 1; i++)
        for (int j = 0,temp; j < *n - i - 1; j++)
            if (v[j] > v[j + 1])
            {
                temp = v[j];
                v[j] = v[j + 1];
                v[j+1] = temp;
            }
}



void sortcr(double* v, int* n)
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

void sortcr(char* v, int* n)
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

void sortcr(bool* v, int* n)
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


void sortdcr(int* v, int* n)
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


void sortdcr(double* v, int* n)
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


void sortdcr(char* v, int* n)
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

void sortdcr(bool* v, int* n)
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





void insertM(int *M[], int *n, int *m)
{
    for (int i = 0; i < *n; i++)
    {
        M[i] = new int[*m];
        for (int j = 0; j < *m; j++) M[i][j] = rand() % 10;
    }
       
}

void insertM(double* M[], int* n, int* m)
{
    for (int i = 0; i < *n; i++)
    {
        M[i] = new double[*m];
        for (int j = 0; j < *m; j++) M[i][j] = rand() % 10 * 1.55;
    }

}

void insertM(char* M[], int* n, int* m)
{
    for (int i = 0; i < *n; i++)
    {
        M[i] = new char[*m];
        for (int j = 0; j < *m; j++) M[i][j] = InserT(" ",'l');
    }

}

void insertM(bool* M[], int* n, int* m)
{
    for (int i = 0; i < *n; i++)
    {
        M[i] = new bool[*m];
        for (int j = 0; j < *m; j++) M[i][j] = rand() % 2;
    }

}


void showM(int** M, int* n, int* m)
{
    int* w = new int;
    *w = 3;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0, *tempp = new int; j < *m; j++)
        {
            *tempp = M[i][j];
            showsetw(*w, *tempp);
        }
        cout << endl;
    }
    delete w;
}


void showM(double** M, int* n, int* m)
{
    int* w = new int;
    *w = 3;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0, *tempp = new int; j < *m; j++)
        {
            *tempp = M[i][j];
            showsetw(*w, *tempp);
        }
        cout << endl;
    }
    delete w;
}



void showM(char** M, int* n, int* m)
{
    int* w = new int;
    *w = 3;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0, *tempp = new int; j < *m; j++)
        {
            *tempp = M[i][j];
            showsetw(*w, *tempp);
        }
        cout << endl;
    }
    delete w;
}


void showM(bool** M, int* n, int* m)
{
    int* w = new int;
    *w = 3;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0, *tempp = new int; j < *m; j++)
        {
            *tempp = M[i][j];
            showsetw(*w, *tempp);
        }
        cout << endl;
    }
    delete w;
}




int sumdgn(int **M, int *n, int *m, bool d)
{
    int* sum = new int;
    *sum = 0;
    if (d)
    {
        for (int i = 0; i < *n; i++)
        {
            for (int j = 0; j < *m; j++)
            {
                if (i == j) *sum+=M[i][j];
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


double sumdgn(double** M, int* n, int* m, bool d)
{
    double* sum = new double;
    *sum = 0;
    if (d)
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

char sumdgn(char** M, int* n, int* m, bool d)
{
    int* sum = new int;
    *sum = 0;
    if (d)
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

bool sumdgn(bool** M, int* n, int* m, bool d)
{
    int* sum = new int;
    *sum = 0;
    if (d)
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


int smaxmin_c1(int** M, int* n, int* m,int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
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
        int* min = new int;
        *min = M[0][0];
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

int smaxmin_c2(int** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
        *max = M[0][*m / 2];
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m/2; j < *m; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        int* min = new int;
        *min = M[0][*m/2];
        for (int i = 0; i < *n / 2; i++)
            for(int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

int smaxmin_c3(int** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = *n/2; i < *n; i++)
            for (int j = 0; j < *m/2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
        *max = M[*n/2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        int* min = new int;
        *min = M[*n/2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

int smaxmin_c4(int** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m/2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
        *max = M[*n / 2][*m/2];
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] > *max) *max = M[i][j];
            }

        return *max;
    }
    else
    {
        int* min = new int;
        *min = M[*n / 2][*m/2];
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}


double smaxmin_c1(double** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        double* s = new double;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        double* max = new double;
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
        double* min = new double;
        *min = M[0][0];
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

double smaxmin_c2(double** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        double* s = new double;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        double* max = new double;
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
        double* min = new double;
        *min = M[0][*m / 2];
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

double smaxmin_c3(double** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        double* s = new double;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        double* max = new double;
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
        double* min = new double;
        *min = M[*n / 2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

double smaxmin_c4(double** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        double* s = new double;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        double* max = new double;
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
        double* min = new double;
        *min = M[*n / 2][*m / 2];
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}


char smaxmin_c1(char** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        char* s = new char;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        char* max = new char;
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
        char* min = new char;
        *min = M[0][0];
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

char smaxmin_c2(char** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        char* s = new char;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        char* max = new char;
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
        char* min = new char;
        *min = M[0][*m / 2];
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

char smaxmin_c3(char** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        char* s = new char;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        char* max = new char;
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
        char* min = new char;
        *min = M[*n / 2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

char smaxmin_c4(char** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        char* s = new char;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        char* max = new char;
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
        char* min = new char;
        *min = M[*n / 2][*m / 2];
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}



bool smaxmin_c1(bool** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
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
        int* min = new int;
        *min = M[0][0];
        for (int i = 0; i < *n / 2; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

bool smaxmin_c2(bool** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
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
        int* min = new int;
        *min = M[0][*m / 2];
        for (int i = 0; i < *n / 2; i++)
            for (int j = *m / 2; j < *m; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

bool smaxmin_c3(bool** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        char* max = new char;
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
        int* min = new int;
        *min = M[*n / 2][0];
        for (int i = *n / 2; i < *n; i++)
            for (int j = 0; j < *m / 2; j++)
            {
                if (M[i][j] < *min) *min = M[i][j];
            }

        return *min;
    }
}

bool smaxmin_c4(bool** M, int* n, int* m, int define)
{
    if (define == 0)
    {
        int* s = new int;
        *s = 0;
        for (int i = *n / 2; i < *n; i++)
            for (int j = *m / 2; j < *m; j++) *s += M[i][j];

        return *s;
    }
    else if (define == 1)
    {
        int* max = new int;
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
        int* min = new int;
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
    srand(time(0));

    int *n = new int;

    *n = InserT("n=",1);
    int* v = new int[*n];

    insertV(v, n);
    showV(v,n);

    show("max=", max(v, n));
    show("min=", min(v, n));

    sortcr(v, n);
    showV(v, n);
    sortdcr(v, n);
    showV(v, n);

    clsps();



    int* n1 = new int;
    *n1 = InserT("n=", 1);

    double* v1 = new double[*n1];
    insertV(v1, n1);
    showV(v1, n1);

    show("max=", max(v1, n1));
    show("min=", min(v1, n1));


    sortcr(v1, n1);
    showV(v1, n1);
    sortdcr(v1, n1);
    showV(v1, n1);;

    clsps();

    int* n2 = new int;
    *n2 = InserT("n=", 1);

    char* v2 = new char[*n1];

    insertV(v2, n2);
    showV(v2, n2);

    show("max=", max(v2, n2));
    show("min=", min(v2, n2));

    sortcr(v2, n2);
    showV(v2, n2);
    sortdcr(v2, n2);
    showV(v2, n2);

    clsps();

    int* n3 = new int;
    *n3 = InserT("n=", 1);

    bool* v3 = new bool[*n3];

    insertV(v3, n3);
    showV(v3, n3);

    show("max=", max(v3, n3));
    show("min=", min(v3, n3));

    sortcr(v3, n3);
    showV(v3, n3);
    sortdcr(v3, n3);
    showV(v3, n3);

    clsps();
    


    delete v, v1, v2, v3, n, n1, n2, n3;


    //---------------------------------------------------------//


    int * m = new int,*m1=new int,*m2=new int,*m3=new int;

    *n = InserT("n=",1);
    *m = InserT("m=",2);

    int** M = new int* [*n];

    insertM(M, n, m);
    showM(M, n, m);

    show("Suma elementelor diagonalei principale: ", sumdgn(M, n, m, true));
    show("Suma elementelor diagonalei secundare: ", sumdgn(M, n, m, false));


    show("Suma cadranul1 :", smaxmin_c1(M, n, m, 0));
    show("Suma cadranul2 :", smaxmin_c2(M, n, m, 0));
    show("Suma cadranul3 :", smaxmin_c3(M, n, m, 0));
    show("Suma cadranul4 :", smaxmin_c4(M, n, m, 0));

    cout << endl;

    show("Max cadranul1 :", smaxmin_c1(M, n, m, 1));
    show("Max cadranul2 :", smaxmin_c2(M, n, m, 1));
    show("Max cadranul3 :", smaxmin_c3(M, n, m, 1));
    show("Max cadranul4 :", smaxmin_c4(M, n, m, 1));

    cout << endl;

    show("Min cadranul1 :", smaxmin_c1(M, n, m, 2));
    show("Min cadranul2 :", smaxmin_c2(M, n, m, 2));
    show("Min cadranul3 :", smaxmin_c3(M, n, m, 2));
    show("Min cadranul4 :", smaxmin_c4(M, n, m, 2));

    clsps();

    


    *n1 = InserT("n=", 1);
    *m1 = InserT("m=", 2);

    double** M1 = new double* [*n1];

    insertM(M1, n1, m1);
    showM(M1, n1, m1);

    show("Suma elementelor diagonalei principale: ", sumdgn(M1, n1, m1, true));
    show("Suma elementelor diagonalei secundare: ", sumdgn(M1, n1, m1, false));


    show("Suma cadranul1 :", smaxmin_c1(M1, n1, m1, 0));
    show("Suma cadranul2 :", smaxmin_c2(M1, n1, n1, 0));
    show("Suma cadranul3 :", smaxmin_c3(M1, n1, n1, 0));
    show("Suma cadranul4 :", smaxmin_c4(M1, n1, n1, 0));

    cout << endl;

    show("Max cadranul1 :", smaxmin_c1(M1, n1, m1, 1));
    show("Max cadranul2 :", smaxmin_c2(M1, n1, m1, 1));
    show("Max cadranul3 :", smaxmin_c3(M1, n1, m1, 1));
    show("Max cadranul4 :", smaxmin_c4(M1, n1, m1, 1));

    cout << endl;

    show("Min cadranul1 :", smaxmin_c1(M1, n1, n1, 2));
    show("Min cadranul2 :", smaxmin_c2(M1, n1, n1, 2));
    show("Min cadranul3 :", smaxmin_c3(M1, n1, n1, 2));
    show("Min cadranul4 :", smaxmin_c4(M1, n1, n1, 2));


    clsps();




    *n2 = InserT("n=", 1);
    *m2 = InserT("m=", 2);

    char** M2 = new char* [*n2];

    insertM(M2, n2, m2);
    showM(M2, n2, m2);

    show("Suma elementelor diagonalei principale: ", sumdgn(M2, n2, m2, true));
    show("Suma elementelor diagonalei secundare: ", sumdgn(M2, n2, m2, false));

    show("Suma cadranul1 :", smaxmin_c1(M2, n2, m2, 0));
    show("Suma cadranul2 :", smaxmin_c2(M2, n2, m2, 0));
    show("Suma cadranul3 :", smaxmin_c3(M2, n2, m2, 0));
    show("Suma cadranul4 :", smaxmin_c4(M2, n2, m2, 0));

    cout << endl;

    show("Max cadranul1 :", smaxmin_c1(M2, n2, m2, 1));
    show("Max cadranul2 :", smaxmin_c2(M2, n2, m2, 1));
    show("Max cadranul3 :", smaxmin_c3(M2, n2, m2, 1));
    show("Max cadranul4 :", smaxmin_c4(M2, n2, m2, 1));

    cout << endl;

    show("Min cadranul1 :", smaxmin_c1(M2, n2, m2, 2));
    show("Min cadranul2 :", smaxmin_c2(M2, n2, m2, 2));
    show("Min cadranul3 :", smaxmin_c3(M2, n2, m2, 2));
    show("Min cadranul4 :", smaxmin_c4(M2, n2, m2, 2));

    clsps();


    *n3 = InserT("n=", 1);
    *m3 = InserT("m=", 2);

    bool** M3 = new bool* [*n3];

    insertM(M3, n3, m3);
    showM(M3, n3, m3);

    show("Suma elementelor diagonalei principale: ", sumdgn(M3, n3, m3, true));
    show("Suma elementelor diagonalei secundare: ", sumdgn(M3, n3, m3, false));

    show("Suma cadranul1 :", smaxmin_c1(M3, n3, m3, 0));
    show("Suma cadranul2 :", smaxmin_c2(M3, n3, m3, 0));
    show("Suma cadranul3 :", smaxmin_c3(M3, n3, m3, 0));
    show("Suma cadranul4 :", smaxmin_c4(M3, n3, m3, 0));

    cout << endl;

    show("Max cadranul1 :", smaxmin_c1(M3, n3, m3, 1));
    show("Max cadranul2 :", smaxmin_c2(M3, n3, m3, 1));
    show("Max cadranul3 :", smaxmin_c3(M3, n3, m3, 1));
    show("Max cadranul4 :", smaxmin_c4(M3, n3, m3, 1));

    cout << endl;

    show("Min cadranul1 :", smaxmin_c1(M3, n3, m3, 2));
    show("Min cadranul2 :", smaxmin_c2(M3, n3, m3, 2));
    show("Min cadranul3 :", smaxmin_c3(M3, n3, m3, 2));
    show("Min cadranul4 :", smaxmin_c4(M3, n3, m3, 2));



    clsps();


}

/*Acasa:

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
