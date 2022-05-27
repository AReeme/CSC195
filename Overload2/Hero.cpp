#include "Hero.h"

Hero& Hero::operator=(const Hero& superhero)
{
	this->name = superhero.name;
	this->powerLevel = superhero.powerLevel;

	return *this;
}

bool Hero::operator < (const Hero& superhero)
{
	return this->powerLevel < superhero.powerLevel;
}

bool Hero::operator > (const Hero& superhero)
{
	return this->powerLevel > superhero.powerLevel;
}

bool Hero::operator == (const Hero& superhero)
{
	return this->powerLevel == superhero.powerLevel;
}

bool Hero::operator != (const Hero& superhero)
{
	return this->powerLevel != superhero.powerLevel;
}

bool Hero::operator==(string name)
{
	return this->name == name;
}

ostream& operator << (ostream& output, const Hero superhero)
{
	output << superhero.name << " Power Level: " << superhero.powerLevel;

	return output;
}
