#include "Dog.h"

void Dog::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "How many legs does your Dog have?" << endl;
	istream >> numOfLegs;
}

void Dog::Write(std::ostream& ostream)
{
	Animal::Write(ostream);

	ostream << "Number Of Legs: " << numOfLegs << endl;
}

void Dog::Read(ifstream& istream)
{
	Animal::Read(istream);
	istream >> numOfLegs;
}

void Dog::Write(ofstream& ostream)
{
	Animal::Write(ostream);
	ostream << numOfLegs << endl;
}

Animal::eType Dog::GetType() { return Animal::eType::Dog; }
