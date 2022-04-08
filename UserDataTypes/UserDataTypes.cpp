// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Declaration provides basic attributes of a symbol: Type and Name
//Definition provides all details of the symbol

class Sandwich
{
public:
	Sandwich() 
	{
		//A Default Constructor is automatically declared if no user constructor is created
		cout << "constructor\n";
	}

	Sandwich(string name, float price) : name(name), price(price), isHot(false)
	{
		//Once you start declaring a constructor, the default consturctor is ignored
		cout << "Constructor\n";
		/*this->name = name;
		this->price = price;*/
	}

	~Sandwich()
	{
		//A Destructor destroys data upon program end; Automatucally created if not declared
		cout << "Destructor\n";
	}

	void Read() {
		cout << "Enter Name: ";
		cin >> name;
	}
	void Write();

private:
	string name;
	float price;
	bool isHot;
};

void Sandwich::Write() {
	cout << "Name: " << name << endl;
}

//Structure
struct Point
{
	int x;
	int y;
};

int main()
{
	int mx;
	int my;

	Point point;
	point.x = 300;
	point.y = 200;

	{
		// scope
		int j = 5;
		{
			j = 10;
		}
	}

	{
		Sandwich sandwich("Ham", 4.5);
		/*sandwich.Read();*/
		sandwich.Write();
	}

	enum class Difficulty
	{
		Easy,
		Medium,
		Hard
	};

	enum class Eggs
	{
		Easy, 
		Scrambled
	};

	Difficulty d = Difficulty::Easy;
	if (d == Difficulty::Easy) cout << "Easy\n";

	union Data
	{
		int i;
		float f;
		bool b;
	};

	Data data;
	data.i = 10;
	//data.f = 23.5f;
	//data.b = true;

	cout << &data.i << endl;
	cout << &data.f << endl;

	cout << data.i << endl;
}

