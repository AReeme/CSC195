#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void streamOut(ostream& stream, string text)
{
	stream << text << endl;
}

void streamOut(ofstream& stream, string text)
{
	stream << text << endl;
}

int main()
{
	streamOut(cout, "Hello");
	ofstream ofile2("test3.txt");
	streamOut(ofile2, "C++ is fun!");
	ofile2.close();

	cout << "Hello!" << endl;
	int i = 5;
	//cin >> i;
	cout << i << endl;

	ofstream ofile("test2.txt");
	if (ofile.is_open())
	{
		ofile << "Welcome to Gotham Town!" << endl;
	}
	ofile.close();

	ifstream ifile;
	ifile.open("test2.txt");

	if (ifile.is_open())
	{
		string text;
		getline(ifile, text);
		cout << text << endl;
	}

	return 0; //hack!!!

	if (ifile.is_open())
	{
		cout << "Success!" << endl;

		string text1;
		ifile >> text1;
		cout << text1 << endl;

		string text2;
		ifile >> text2;
		cout << text2 << endl;

		int n;
		ifile >> n;
		cout << n << endl;
	}
}