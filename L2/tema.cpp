/*Acest program lucreaza doar cu nume(familie) de 14 caractere fix si prenume de 5 caractere pentru a modifica nr de caractere
este necesar de modificat nr de variabile char.
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Programul pentru creearea unui cv" << endl;
	char a, b, c, d, e, f, g, h, i, j, k, l, m, n;
	cout << "Introduceti prenumele prin litere separate prin spatiu ex:Dnestreanschii - D n e s t r e a n s c h i i:" << endl;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n;
	char a1, b1, c1, d1, e1;
	cout << "Introduceti numele prin litere separate prin spatiu ex:Maxim - M a x i m:" << endl;
	cin >> a1 >> b1 >> c1 >> d1 >> e1;
	int b_date;
	cout << "Introduceti anul nasterii:" << endl;
	cin >> b_date;
	int age = 2021 - b_date;
	float avg;
	cout << "Introduceti(prin .) media notelor studiilor de la IT Step:" << endl;
	cin >> avg;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCV\n\n" << endl;
	cout << "Acest CV cuprinde informatia de baza a unui programator cu:\n\n\n" << endl;
	cout << "Numele:" << a << b << c << d << e << f << g << h << i << j << k << l << m << n << "\t\t\t\t\t\tPrenumele:" << a1 << b1 << c1 << d1 << e1 << endl;
	cout << "\n\t\t\tMedia anuala la academia IT Step:" << avg << endl;
	cout << "\nAnul nasterii:" << b_date << "\t\t\t\t\t\tVarsta:" << age << " ani" << endl;
	return 0;
}

