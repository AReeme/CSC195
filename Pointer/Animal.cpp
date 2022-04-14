#include "Animal.h"
#include <iostream>

using namespace std;

void Animal::Sleep()
{
	cout << "ZZZZZ" << endl;
}

void Animal::Speak()
{
	cout << "Oink!" << endl;
}

void Animal::Print()
{
	cout << speed << endl;
	cout << lifespan << endl;
}
