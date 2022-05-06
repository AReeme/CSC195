#include "Cat.h"

void Cat::Read(ostream& ostream, istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "What is your Cat's Age?" << endl;
	istream >> age;
}

void Cat::Write(ostream& ostream)
{
	Animal::Write(ostream);

	ostream << "Age: " << age << endl;
}

void Cat::Read(ifstream& istream)
{
	Animal::Read(istream);
	istream >> age;
}

void Cat::Write(ofstream& ostream)
{
	Animal::Write(ostream);
	ostream << age << endl;;
}

Animal::eType Cat::GetType() { return Animal::eType::Cat; }
