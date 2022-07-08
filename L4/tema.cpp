#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/*Variables ranges
a ->     10 -> 50
b ->    200 -> 300
c ->   -120 -> 15
d ->    223 -> 241
e ->   -111 -> -5
*/

using namespace std;

int main()
{
	srand(time(0));
	int a = (rand() & 40) + 10;
	int b = (rand() & 100) + 200;
	int c = (rand() & 135) - 120;
	int d = (rand() & 18) + 223;
	int e = (rand() & 106) - 111;

	double r1 = sin(pow(a, 4)-c);
	double r2 = pow(cos(a * b * c), 3);
	double r3 = pow(sqrt(abs(r1 / r2)), 4);
	
	double r4 = tan(pow(d, 3) + e);
	double r5 = sqrt(abs(a * pow(e, 2) - d));
	double r6 = pow(r4 / r5, 2);
	
	double r7 = cos(pow(c, 3) - pow(d, 2));
	double r8 = sqrt(abs(pow(tan(a * c), 2)));
	double r9 = sqrt(abs(pow(r7 / r8, 3)));
	
	double r10 = r3 * r6 + r9;
	
	double r11 = sin((a + c) * (b - e));
	double r12 = tan(b + d + a - pow(c, 2));
	double r13 = sqrt(abs(r11 / r12));
	
	double r14 = cos(tan(a + b - c));
	double r15 = sqrt(a) - (c, 2);
	double r16 = r15 /a;

	double r17 = r14 / r16;
	
	double r18 = pow(d, 2) / sqrt(abs((a * c )));
	double r19 = r18 / sin(a*c);

	double r20 = r13 + r17 - r19;
	
	double r21 =(pow(sqrt(abs(sin(pow(a, 4) - c) / pow(cos(a * b * c), 3))), 4) * pow( r4 / sqrt(abs(a * pow(e, 2) - d)), 2) + r9 ) / ( r13 + r17 - r19 );
	
	cout << "The final result is:" << r21 << endl;
	
	//Result in 1 row and 1 variable
	double r_fin = ((pow(sqrt(abs((sin(pow(a, 4) - c)) / (pow(cos(a * b * c), 3)))), 4)) * (pow((tan(pow(d, 3) + e)) / (sqrt(abs(a * pow(e, 2) - d))), 2)) + (sqrt(abs(pow((cos(pow(c, 3) - pow(d, 2))) / (sqrt(abs(pow(tan(a * c), 2)))), 3))))) / ((sqrt(abs((sin((a + c) * (b - e))) / (tan(b + d + a - pow(c, 2)))))) + ((cos(tan(a + b - c))) / (r15 / a)) - ((pow(d, 2) / sqrt(abs((a * c)))) / sin(a * c)));

	cout << r_fin << endl;
	
	//Check for bugs
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
	cout << r16 << endl;
	cout << r17 << endl;
	cout << r18 << endl;
	cout << r19 << endl;
	cout << r20 << endl;
	cout << r21 << endl;*/
	return 0;
}
