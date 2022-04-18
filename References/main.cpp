#include <iostream>

using namespace std;

void f1(int i) // i => 10
{
	i = i + 5;
}

void f2(int* i) // i => address
{
	//i = i + 5; // Adds 5 to the Address
	*i = *i + 5; // Adds 5 to Value Pointed At
}

void swap(int* i1, int* i2)
{
	cout << "Pointer" << endl;
	int temp = *i1;
	*i1 = *i2;
	*i2 = temp;
}

void swap(int& i1, int& i2)
{
	cout << "Reference" << endl;
	int temp = i1;
	i1 = i2;
	i2 = temp;
}

int main()
{
	int i = 10;
	int j = 23;

	// :(
	int* p = nullptr; // Pointer (Points to a Variable)
	p = &i;
	p = &j;
	//p = nullptr;

	// :)
	int& r = j; // Reference (Alias to a Variable)
	r = i; // Assign Value of i to r(j)

	cout << &j << endl;
	cout << &r << endl;
	cout << &p << endl;

	r = 5; // i = 5;

	//f2(p); // p == &i
	cout << i << endl;
	cout << *p << endl;

	swap(i, j);
	cout << i << " " << j << endl;

	return 0;
}