#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int gcount = 0, ccount = 0;
	//int a, b, c, R, n;
	//int C = 0;
	//int rp = 0, sr1 = 0, sr2 = 0, sr3 = 0, sr4 = 0;
	//int rmax = -151, rmin1 = 148, rmin2 = INT_MAX; //Calculam raspunsul maximal si minimal1 prin o metoda si raspunsul minimal2 prin alta metoda cu INT_MAX
	//cout << "De cate ori doriti sa calculati a+b-c: ";
	//cin >> n;

	//E:

	//a = rand() % 100 - 50; //-50...50
	//b = rand() % 100 - 50;
	//c = rand() % 100 - 50;

	//R = a + b - c;

	//if (R % 2 == 0 && R >= 19 && R < 37) rp++;

	//if (R >= 3 && R < 13) sr1 += R;

	//if (R >= 30 && R < 54) sr2 += R;

	//if (R >= 67 && R < 99) sr3 += R;

	//if (R >= -11 && R < -1) sr4 += R;


	//if (R % 2 != 0 && R >= 33 && R < 77 && rmax < R) rmax = R;

	//if (R >= 10 && R < 30 && rmin1 > R) rmin1 = R;

	//if (R >= 55 && R < 77 && rmin2 > R) rmin2 = R;

	//cout << a << '+' << b << '-' << c << '=' << a + b - c << endl;
	//C++;
	//if (C < n) goto E;

	//cout << "Raspnusul a fost par si a intrat in intervalul 19...37 de " << rp << " ori" << endl;
	//cout << "Suma raspunsurilor ce intra in intervalul 3...13   este:" << sr1 << endl;
	//cout << "Suma raspunsurilor ce intra in intervalul 30...54  este:" << sr2 << endl;
	//cout << "Suma raspunsurilor ce intra in intervalul 67...99  este:" << sr3 << endl;
	//cout << "Suma raspunsurilor ce intra in intervalul -11...-1 este:" << sr4 << endl;

	//if (rmax == -151) cout << "Raspunsul maximal impar ce intra in intervalul 33...77 nu este prezent in aceste ecuatii" << endl; //Daca rmax,rmin1,rmin2 nu au primit nici o valoare ei vor avea tot aceeasi valoare,rmax are valoarea minima-1,rmin1 are valoarea maxima+1, rmin2 are o valoare imposibila de atins cu valorile posibile ale lui a,b si c 
	//else cout << "Raspunsul maximal impar ce intra in intervalul 33...77 este: " << rmax << endl;
	//if (rmin1 == 148) cout << "Raspunsul maximal impar ce intra in intervalul 10...30 nu este prezent in aceste ecuatii" << endl;
	//else cout << "Raspunsul mininal ce intra in intervalul 10...30 este: " << rmin1 << endl;
	//if (rmin2 == INT_MAX) cout << "Raspunsul minimal ce intra in intervalul 55...77 nu este prezent in aceste ecuatii" << endl;
	//else cout << "Raspunsul minimal ce intra in intervalul 55...77 este: " << rmin2 << endl;
	/*int x = rand()%15+15;
	int y = rand() % 15;
	cout << x << '\n' << y << endl;
	if (x < y) x++;
	else if (x > y) y++;
	else
	{
		x++;
		y++;
	}
	
	cout << x <<'\n' << y;*/
	I1:
	cout << "1. Ce tip de date are raspunsul expresiei 2+2 ? " << endl;
	cout << "\ta.char\n\tb.double\n\tc.int" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Gresit!" << endl; gcount++; break;
	case 'c': cout << "Corect!" << endl; ccount++; break;
	default :
	{
		cout << "Ati introdus ceva diferit de a,b sau c, Incercati din nou!";
		goto I1;
	}
	}
	I2:
	cout << "2. Ce valoare poate primi x din intervalul : x = rand()%15 " << endl;
	cout << "\ta.x>=0,x<=15\n\tb.x>=0,x<15\n\tc.x>0,x==15" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Corect!!" << endl; ccount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, Incercati din nou!";
		goto I2;
	}
	}
}

/*
a+b-c de n ori
1.Sa se contorizeze cate R sunt pare si	intra in intervalul 19...37
2.Sa se realizeze suma R => care intra in intervalele 3...13,30..54,67...99,-11...-1
3.Raspunsul Max, daca raspunsul este impar intra in invervalul 33...77
4.Raspunusl Min, daca raspunsul este 10...30 55...77
*/