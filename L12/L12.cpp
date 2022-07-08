#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	for (int z = 0;z == 0;)
	{
		cout << z << endl;
		z = rand() % 10;
		cout << z;
	}
	return 0;
}