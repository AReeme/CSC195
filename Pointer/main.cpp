#include "Animal.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<Animal*> animals; 

	for (int i = 0; i < 3; i++) 
	{
		Animal* animal = new Animal(12, 24.5);
		animals.push_back(animal);
	}

	//animal = nullptr;
	/*cout << sizeof(Animal) << endl;*/

	for (auto animal : animals)
	{
		animal->Speak();
	}

	for (auto animal : animals)
	{
		delete animal;
	}

	animals.clear();

	/*animal->Sleep();
	animal->Speak();
	animal->Print();*/

	//delete animal;

}