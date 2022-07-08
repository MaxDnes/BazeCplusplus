#include <iomanip>
#include <iostream>   
#include <cstdlib>  
#include <ctime>    
#include <conio.h> 
#include <cstring>  

#pragma warning(disable:4996)

#include <windows.h>

using namespace std;

void line1()
{
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
}

void line2()
{
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
}

void line3()
{
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
}

struct stud
{
	char nume[256];
	int ani;
	double media;
	int note[12];
	int nrnote;

}S[100];

int meniu()
{
	system("cls");

	cout << "\n\n\t *** MENIU STUDENT ***" << endl;
	cout << "\t  1. Insert STUDENT  " << endl;
	cout << "\t  2. Show STUDENT  " << endl;
	cout << "\t  3. Cautare STUDENT" << endl;
	cout << "\t  4. Editare info STUDENT" << endl;
	cout << "\tESC. EXIT  " << endl;

	return _getch();
}

double calcmed(int n, int nrtot)
{
	int s = 0;

	for (int i = 0; i < nrtot; i++)
	{
		s += S[n].note[i];
	}

	return s / double(nrtot);
}

void insert(int* n,int * nrgrd)
{
	do
	{
		system("cls");
		cout << " Student [" << (*n) + 1 << "]" << endl;

		cout << " Enter nume  :: "; cin >> S[*n].nume;
		cout << " Enter ani   :: "; cin >> S[*n].ani;
		cout << " Enter note  for  " << S[*n].nume <<'\n' << endl;

		do
		{
			cout << "Nota [" << *nrgrd << "] = "; cin >> S[*n].note[*nrgrd];
			(*nrgrd)++;
			cout << " ESC - exit,  any key ...." << endl;
		} while (_getch() != 27);

		S[*n].nrnote = *nrgrd;

		S[*n].media = calcmed(*n, *nrgrd);

		system("cls");

		(*n)++;

		cout << " ESC - exit,  any key ...." << endl;
		*nrgrd = 0;
	} while (_getch() != 27);
}



void show(int n)
{

	int x = 2, in = 0, sf = x;
	bool EXIT = 0;

	if (n > 0)
	{
		while (1)
		{
			system("cls");

			line1(); cout << (char)186 << setw(5) << "ID" << (char)186 << setw(15) << "NUME" << (char)186 << setw(10) << "ANI" << (char)186 <<setw(20) << "NOTE" <<char(186)<<setw(10)<<"MEDIA" <<(char)186<< endl; line2();

			for (int i = in; i < sf; i++)
			{
				cout << (char)186 << setw(5) << i + 1
					<< (char)186 << setw(15) << S[i].nume
					<< (char)186 << setw(10) << S[i].ani
					<< (char)186;
				for (int j = 0; j < S[i].nrnote; j++)
				{
					cout << ' ' << S[i].note[j];
				}
				cout << setw(21 - S[i].nrnote*2) << (char)186 << setw(10) << S[i].media <<(char)186 << endl;
				if (i == sf - 1) line3();
				else line2();
			}
			

			switch (_getch())
			{
			case 43: in += x; sf += x; if (sf > n) { in = n - 2; sf = n; } break;
			case 45: in -= x; sf -= x; if (in < 0) { in = 0;   sf = x; } break;
			case 27: EXIT = true;
			}
			system("pause");
			if (EXIT) break;
		}
	}
	else
	{
		system("cls");
		cout << " Nu sunt studenti pentru afisare" << endl;
	}
}

int exist(int n, const char sname[256])
{
	bool found = false;
	int poz = -1;

	for (int i = 0; i < n; i++)
	{
		if (strcmp(sname, S[i].nume) == 0)
		{
			found = true;
			cout << "Am gasit informatie cu succes despre: " << S[i].nume << endl;

			line1(); cout << (char)186 << setw(5) << "ID" << (char)186 << setw(15) << "NUME" << (char)186 << setw(10) << "ANI" << (char)186 << setw(20) << "NOTE" << char(186) << setw(10) << "MEDIA" << (char)186 << endl; line2();

			cout << (char)186 << setw(5) << i + 1
				<< (char)186 << setw(15) << S[i].nume
				<< (char)186 << setw(10) << S[i].ani
				<< (char)186;
			for (int j = 0; j < S[i].nrnote; j++)
			{
				cout << ' ' << S[i].note[j];
			}
			cout << setw(21 - S[i].nrnote * 2) << (char)186 << setw(10) << S[i].media << (char)186 << endl;
			line3();
			poz = i;
		}
	}
	return poz;
}

void search(int n)
{
	system("cls");
	if (n > 0)
	{
		char sname[256];
		cout << "Introduceti numele studentului cautat:\n"; cin >> sname;

		int poz = exist(n, sname);

		if (poz == -1)
		{
			cout << "Ne pare rau,n-am gasit asfel de studenti doriti sa cautati din nou? \n(apasati orice tasta pentru a iesi sau y/Y pentru a cauta alt student)\n";
			if (_getch() == 89 || _getch() == 121) search(n);
		}
	}
	else
	{
		system("cls");
		cout << " Nu sunt studenti pentru afisare" << endl;
	}
}


void editinfo(int n)
{
	if (n > 0)
	{
		int poz;
		char name[256];
		system("cls");
		cout << "Introduceti numele curent a studentului: \n";
		cin >> name;
		poz = exist(n,name);
		system("pause");
		if (poz != -1)
		{
			do
			{
				system("cls");
				cout << "Ce doriti sa editati:\n1.Numele \n2.Varsta \n3.Notele \nESC pentru a anula actiunea." << endl;
				if (_getch() == 49)
				{
					cout << "Introduceti numele nou:"; cin >> name;

					strcpy(S[poz].nume, name);
				}
				else if (_getch() == 50)
				{
					int* v = new int;
					cout << "Introduceti varsta studentului:"; cin >> *v;

					S[poz].ani = *v;
				}
				else if (_getch() == 51)
				{
					int* v = new int[25];
					cout << "Note curente:" << endl;
					for (int i = 0; i < S[poz].nrnote; i++)
					{
						cout << setw(3) << S[poz].note[i];
					}
					cout << "\nCe actiuni doriti sa faceti:\n1.Inlocuirea unei note\n2.Adaugarea unei note\n" << endl;
					switch (_getch())
					{
					case 49:
					{
						int nota;
						bool present = false;
						int pozn;
						
							cout << "Ce nota doriti sa inlocuiti?"<<endl; cin >> nota;
							for (int i = 0; i < S[poz].nrnote; i++)
							{
								if (nota == S[poz].note[i])
								{
									present = true;
									pozn = i;
								}
							}
							if (present) cout << "Nota este prezenta!" << endl;
							else cout << "Ne pare rau nu exista o astfel de nota incercati din nou sau apasati ESC pentru a iesi" << endl;
						
						if (present)
						{
							cout << "Ce nota o va inlocui pe nota " << S[poz].note[pozn]<<endl; cin >> nota;
							S[poz].note[pozn] = nota;
						}
						S[poz].media=calcmed(poz, S[poz].nrnote);
						break;
					}
					case 50:
					{
						int i = 0;
						cout << "Adaugarea notelor " << endl;
						do
						{
							cout << "Nota [" << S[poz].nrnote+i << "] = "; cin >> S[poz].note[ S[poz].nrnote + i ];
							i++;
							cout << " ESC - exit,  any key ...." << endl;
						} while (_getch() != 27);
						S[poz].nrnote = S[poz].nrnote + i;
						S[poz].media = calcmed(poz, S[poz].nrnote + i);
						break;
					}
					}
					
				}
				cout << " ESC - exit,  any key ...." << endl;
			} while (_getch() != 27);
		}
	}
	else
	{
		system("cls");
		cout << " Nu sunt studenti pentru afisare" << endl;
		system("pause");
	}
}

int main()
{
	srand(time(0));

	int n = 0;
	int nrgrd = 0;

	while (1)
	{

		switch (meniu())
		{
		case 49:  insert(&n,&nrgrd); system("pause"); break;
		case 50:  show(n); system("pause"); break;
		case 51:  search(n); system("pause"); break;
		case 52:  editinfo(n); system("pause"); break;
		case 27:  exit(0);
		}

	}




	return 0;
}







/*

Acasa:

0.finisare afisare
1.Cautare student dupa nume
2.Editare informatie 
3.Editare note (adaugati note, schimbati)

*/
