#pragma once
#include "Cat.h"
#include "Dog.h"
#include <vector>

using namespace std;

class Database
{
public:

	~Database();

	void Add(Animal::eType type);

	void Load(string fileName);
	void Save(string fileName);

	void DisplayAll();
	void Display();
	void Display(const string& name);
	void Display(Animal::eType type);

private:
	Animal* Create(Animal::eType type);

private:
	vector<Animal*> animals;
};