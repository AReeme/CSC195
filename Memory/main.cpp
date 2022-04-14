#include <iostream>
using namespace std;

//void OhNo(int size)
//{
//	char* block = new char[10000];
//	cout << size << endl;
//	delete[] block;
//	OhNo(size + 10000);
//}

int main()
{
	/*OhNo(10000);*/
	bool b = true; //Bool Value (1-Byte)
	int i = 67;
	int j = 90;
	int* pi = &i; // <- Address (4-Bytes)
	*pi = 75;
	pi = &j;
	*pi = 54;

	cout << sizeof(pi) << endl;
	cout << &i << endl;
	cout << pi << endl;
	cout << *pi << endl;
	cout << i << endl;
	cout << j << endl;

	
	cout << &i << endl;
	cout << &b << endl;

	int* p = new int(10);

	cout << p << endl;  //Value = Address of the Data pointing at (Heap)
	cout << &p << endl; //Address = Address of The Variable on the stack
	cout << *p << endl; //Dereference = Value of the Data pointed at

	int* po = new int[5];
	po[0] = 23;
	po[1] = 36;

	cout << po << endl;
	cout << &po << endl;
	cout << po[1] << endl;

	cout << *p << endl;

	delete p;
	delete[] po;

	
}