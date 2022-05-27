#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hero
{
public:
	Hero(){}
	Hero(string name, double powerLevel) : name{name}, powerLevel{powerLevel}{}
	Hero& operator = (const Hero& superhero);  //Assignment Operator

	bool operator < (const Hero& superhero);   //Pass By Copy
	bool operator > (const Hero& superhero);
	bool operator == (const Hero& superhero);
	bool operator != (const Hero& superhero);

	bool operator == (string name);

	friend ostream& operator << (ostream& output, const Hero superhero);

	string GetName() { return name; }
	double GetPowerLevel() { return powerLevel; }
private:
	string name;
	double powerLevel = 0;
};
