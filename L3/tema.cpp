/*
				
		a*c-b   b+c-a   c*b*+a   a*b*c-a
		----- X ----- X ------ - -------
		a-c+b   a*b+c   a*b-c     a+b-c
		-----------------------------------
				 (b*c/a -b)(a*b-a/b-c)

+ -> 5
- -> 10
* -> 11
/ -> 6
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Application for solving the ecuation of the form presented below:" << endl;
	cout << "\n\ta*c-b   b+c-a   c*b*+a   a*b*c-a\n" << "\t----- X ----- X ------ - -------\n" << "\ta-c+b   a*b+c   a*b-c     a+b-c\n" << "\t-----------------------------------\n" << "\t\t (b*c/a -b)(a*b-a/b-c)\n\n" << endl;
	
	int a, b, c;
	
	cout << "Enter a:";
	cin >> a;

	cout << "Enter b:";
	cin >> b;

	cout << "Enter c:";
	cin >> c;

	int r1 = a * c - b;
	int r2 = a - c + b;
	double r3 = double(r1) / r2;
	
	int r4 = b + c - a;
	int r5 = a * b + c;
	double r6 = double(r4) / r5;

	int r7 = c * b + a;
	int r8 = a * b - c;
	double r9 = double(r7) / r8;

	int r10 = a * b * c - a;
	int r11 = a + b - c;
	double r12 = double(r10) / r11;

	double r13 = r3 * r6 * r9 - r12;

	double r14 = b * c / double(a) - b;
	double r15 = a * b - double(a) / b - c;
	double r16 = r14 * r15;

	double r_final = r13 / r16;

	cout << '\n'<<"The final result is:" << r_final << endl;

	/*If any bugs appear check each r(result) for errors*/
	/*cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;
	cout << r5 << endl;
	cout << r6 << endl;
	cout << r7 << endl;
	cout << r8 << endl;
	cout << r9 << endl;
	cout << r10 << endl;
	cout << r11 << endl;
	cout << r12 << endl;
	cout << r13 << endl;
	cout << r14 << endl;
	cout << r15 << endl;
	cout << r16 << endl;*/
	return 0;
}