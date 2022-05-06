#include "Animal.h"

void Animal::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "What is Animal's Name?" << endl;
	istream >> name;
	
	ostream << "What is Animal's lifespan?" << endl;
	istream >> lifespan;
}

void Animal::Write(std::ostream& ostream)
{
	ostream << "Name: " << name << endl;
	ostream << "Lifespan: " << lifespan << endl;
}

void Animal::Read(ifstream& istream)
{
	istream >> name;
	istream >> lifespan;
}

void Animal::Write(ofstream& ostream)
{
	ostream << name << endl;
	ostream << lifespan << endl;
}

ostream& operator<<(ostream& ostream, Animal* animal)
{
	ostream << animal->GetName() << endl;
	ostream << animal->GetLifespan() << endl;

	return ostream;
}
