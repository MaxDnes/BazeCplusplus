#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cstring> // string.h

#include <windows.h>

using namespace std;

// Structuri de date


/*
struct nume_tip_date_user
{
tip_date var1;
tip_date var2;
tip_date var3;
....
tip_date varN;
}....;

*/
// student => nume, grupa , ani, media .......... N info



/*
abc X[1000];

X[0].a,b,c,R

X[1].a,b,c,R

...

X[10].a,b,c,R
*/

struct oper
{
	int suma = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	int n = rand() % 10 + 3;
}Q[10];

//oper A[123];


struct stdvalsltr
{
	char name[256];
	int age;
	char group[256];
	double avgrd;
};


template <typename T>
T InserT(const char mess[256], T x)
{
	cout << mess;
	cin >> x;
	return x;
}

char InserT()
{
	char x[256];
	cin >> x;
	return x;
}

int main()
{

	stdvalsltr info;

	srand(time(0));
    
	//MainMenu();

	while (1)
	{
		system("cls");
		cout << "\n\n\t Main Menu " << endl;
		cout << "\t  1. Enter student's information " << endl;
		cout << "\t  2. Show the student's information " << endl;
		cout << "\tESC. Exit" << endl;
		switch (_getch())
		{
		case 49:
			system("cls");
			cout << "\n\n\t Inserting values menu " << endl;
			cout << "\t  1. Enter student's name " << endl;
			cout << "\t  2. Enter student's age " << endl;
			cout << "\t  3. Enter student's group " << endl;
			cout << "\t  4. Enter student's average grade " << endl;
			cout << "\tESC. Exit" << endl;
			switch (_getch())
			{
			case 49:
				cout << "Whats your students name?";
				cin >> info.name;
				break;
			case 50:
				info.age = InserT("Your student's age:", 5);
				cout << info.age;
				break;
			case 51:
				cout << "Whats your students group?";
				cin >> info.group;
				break;
			case 52:
				info.age = InserT("Your student's average grade:", 5);
				break;
			case 27: break;
			default:
				cout << "Invalid input,press 1,2 or ESC" << endl;
			}
			break;
		case 50:
			system("cls");
			cout << "\n\n\t Showing values menu " << endl;
			cout << "\t  1. Show student's name " << endl;
			cout << "\t  2. Show student's age " << endl;
			cout << "\t  3. Show student's group " << endl;
			cout << "\t  4. Show student's average grade " << endl;
			cout << "\tESC. Exit" << endl;
			switch (_getch())
			{
			case 49:
				cout << info.name;
				system("pause");
				break;
			case 50:
				cout << info.age;
				system("pause");
				break;
			case 51:
				cout << info.group;
				system("pause");
				break;
			case 52:
				cout << info.avgrd;
				system("pause");
				break;
			case 27: break;
			default:
				cout << "Invalid input,press 1,2 or ESC" << endl;
				system("pause");
			}
		case 27: exit(0); break;
		default: cout << "Invalid input,press 1,2 or ESC" << endl;
		}
		system("pause");
	}

	return 0;
}

/*

Sa se creeze o aplicatie/program in forma de meniu
1.Sa se realizeze structura studentului cu minim 4 elemente
2.meniu 
2.1 insert struct 
2.2 show struct 


Nume varsta grupa media
*/