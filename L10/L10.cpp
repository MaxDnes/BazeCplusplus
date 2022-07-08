#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0));
	int gcount = 0, ccount = 0;
	I1:
	cout << "1. Ce tip de date are raspunsul expresiei 2+2 ? " << endl;
	cout << "\ta.char\n\tb.double\n\tc.int" << endl;
	switch(_getch())
	{
	case 'a' : cout << "Gresit!" << endl; gcount++; break;
	case 'b' : cout << "Gresit!" << endl; gcount++; break;
	case 'c' : cout << "Corect!" << endl; ccount++; break;
	default :
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I1;
	}
	}
	I2:
	cout << "2. Ce valoare poate primi x din intervalul : x = rand()%15 " << endl;
	cout << "\ta.x>=0,x<=15\n\tb.x>=0,x<15\n\tc.x>0,x==15" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Corect!!"<< endl; ccount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I2;
	}
	}
	I3:
	cout << "3. Ce ne va afisa :\n1 > 2 ? cout << \"True\" : cout << \"False\"; " << endl;
	cout << "\ta.False\n\tb.True\n\tc.Nimic" << endl;
	switch (_getch())
	{
	case 'a': cout << "Corect!" << endl; ccount++; break;
	case 'b': cout << "Gresit!" << endl; gcount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I3;
	}
	}
	I4:
	cout << "4. Cum se descifreaza iostream ? " << endl;
	cout << "\ta.inteligent one-sided stream \n\tb.informal open stream\n\tc.input output stream" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Gresit!" << endl; gcount++; break;
	case 'c': cout << "Corect!" << endl; ccount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I4;
	}
	}
	I5:
	cout << "5. Cum putem comenta un singur rand de cod ? " << endl;
	cout << "\ta.//\n\tb.#\n\tc./" << endl;
	switch (_getch())
	{
	case 'a': cout << "Corect!" << endl; ccount++; break;
	case 'b': cout << "Gresit!" << endl; gcount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I5;
	}
	}
	I6:
	cout << "6. Ce face '\\n' ? " << endl;
	cout << "\ta.Cursorul trece din rand nou.\n\tb.Programul ne va afisa o eroare\n\tc.Nimic,se va afisa '\\n'" << endl;
	switch (_getch())
	{
	case 'a': cout << "Corect!" << endl; ccount++; break;
	case 'b': cout << "Gresit!" << endl; gcount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I6;
	}
	}
	I7:
	cout << "7. Ce valoare va avea:\ndouble x = 3 - 2.25 ? " << endl;
	cout << "\ta.1\n\tb.0.75\n\tc.1.25" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Corect!" << endl; ccount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I7;
	}
	}
	I8:
	cout << "8. Cu care exacitate dupa punct poate lucra o variabila de tip float ?(0 poate fi orice nr din intervalul nr intregi posibile ale variabilei float)" << endl;
	cout << "\ta.36(0.36)\n\tb.37(0.37)\n\tc.38(0.38)" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Gresit!" << endl; gcount++; break;
	case 'c': cout << "Corect!" << endl; ccount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I8;
	}
	}
	I9:
	cout << "9. Ce bibliteca trebuie inclusa pentru a folosi functii ca pow(var,power);abs();sin() etc ? " << endl;
	cout << "\ta.<cmath>\n\tb.<math>\n\tc.<conio.h>" << endl;
	switch (_getch())
	{
	case 'a': cout << "Corect!" << endl; ccount++; break;
	case 'b': cout << "Gresit!" << endl; ccount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I9;
	}
	}
	I10:
	cout << "10. Ce valori vor avea x si y din urmatorul program ?\n" << endl;
	cout << "#include <iostream>\n#include <cstdlib>\n#include <ctime>\n\nusing namespace std;\n\nint main()\n{\n\tsrand(time(0));\n\tint x = rand()%15+15;\n\tint y = rand() % 15;\n\tcout << x << '\\n' << y << endl;\n\tif (x < y) x++;\n\telse if (x > y) y++;\n\telse\n\t{\n\tx++;\n\ty++;\n\t}\n\n\tcout << x <<'\\n' << y;\n\treturn 0;\n\t}\n" << endl;
	cout << "\ta.x in totdeauna va avea valoare sa + 1 (se va executa primul if)\n\tb.y in totdeauna va avea valoare sa + 1 (se va executa al doilea if, adica else if-ul)\n\tc.x si y vor primi tot timpul valorile sale + 1 (se va executa else-ul)" << endl;
	switch (_getch())
	{
	case 'a': cout << "Gresit!" << endl; gcount++; break;
	case 'b': cout << "Corect!" << endl; ccount++; break;
	case 'c': cout << "Gresit!" << endl; gcount++; break;
	default:
	{
		cout << "Ati introdus ceva diferit de a,b sau c, incercati din nou!";
		goto I10;
	}
	}
	
	cout << "Ati raspuns corect la " << ccount << " intrebari, si la " << gcount << " incorect,asa ca respectiv primiti nota "<<ccount<< '!' << endl;
	
	return 0;
}
/*
Sa se inseereze o valoare intreaga din 0...3
Sa se afiseze valoare cuvant a acestei valori

Sa se creeze un test cu 10 intrebari 
Sa se afiseze la sfarsit 
Raspunsuri minimum 3
Sa se afiseze nota, numarul de raspunsuri corecte si gresite
*/