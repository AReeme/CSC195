#include "A.h"
#include <iostream>
#define NAME "Austyn"
#define SQR(x) x * x
#define MULT(x, y) x * y
#define PI 3.1415f
#define XBOX
#define Wii

using namespace std;

int main()
{
	int i = 0;
	i = i + 5;
	A a;
	a.print();

	func();

#ifdef XBOX
	cout << "XBOX" << endl;
#elif defined(Wii)
	cout << "Wii" << endl;
#endif 

#ifdef _DEBUG
	cout << "DEBUG!" << endl;
#endif

	cout << NAME << endl;
	cout << SQR(5) << endl;
	cout << MULT(3, 4) << endl;
}
