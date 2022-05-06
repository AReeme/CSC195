#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Animal
{
public:
	string name;
	int lifespan;

	enum class eType
	{
		Dog, Cat
	};

	Animal() {}
	Animal(string name, int lifespan)
	{
		this->name = name;
		this->lifespan = lifespan;
	}

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);

	virtual void Read(ifstream& istream);
	virtual void Write(ofstream& ostream);

	string GetName()
	{
		return name;
	}
	int GetLifespan() { return lifespan; }
	virtual eType GetType() = 0;
};

ostream& operator << (ostream& ostream, Animal* animal);

