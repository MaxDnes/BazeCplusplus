#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));
	
	int* n = new int;

	cout << "Cati vectori doriti sa creati? ";
	cin >> *n;

	int ** M = new int *[*n];

	for (int i = 0,*lgth=new int;i < *n;i++)
	{
		*lgth =  rand()%15 + 1;
		M[i] = new int[*lgth+1];;
		cout << "\nVectorul " << i + 1 << " format din " << *lgth << " elemente:";
		M[i][0] = *lgth;
		for (int j = 1; j < *lgth+1;j++)
		{
			M[i][j] = rand() % 10;
			cout << setw(3) << M[i][j];
		}
		cout << endl;
	}

	for (int i = 0;i < *n;i++)
	{
		delete M[i];
	}
	
	delete n;

	return 0;
}
/*

Sa se creeze n vectori in forma de pointeri cu marimi diferite pentru fiecare vector

*/
