#pragma once
#include "Animal.h"

class Cat : public Animal
{
	int age;

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;

	void Read(ifstream& istream) override;
	void Write(ofstream& ostream) override;

	Animal::eType GetType() override;// { return Animal::eType::Cat; }
};