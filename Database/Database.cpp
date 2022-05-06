#include "Database.h"

Database::~Database()
{
	for (int i = 0; i < animals.size(); i++)
	{
		delete animals[i];
	}
	animals.clear();
}

void Database::Add(Animal::eType type)
{
	Animal* animal = Create(type);

	animal->Read(std::cout, std::cin);
	animals.push_back(animal);
}

Animal* Database::Create(Animal::eType type)
{
	Animal* animal = nullptr;
	switch (type)
	{
	case Animal::eType::Cat:
		animal = new Cat();
		break;

	case Animal::eType::Dog:
		animal = new Dog();
		break;
	}

	return animal;

}

void Database::DisplayAll()
{
	for (Animal* animal : animals)
	{
		cout << animal;
		//animal->Write(std::cout);
	}
}


void Database::Display(const std::string& name)
{
	for (Animal* animal : animals)
	{
		if (animal->GetName() == name)
		{
			cout << animal;
		}
	}
}


void Database::Display(Animal::eType type)
{
	for (Animal* animal : animals)
	{
		if (animal->GetType() == type)
		{
			cout << animal;
		}
	}
}

void Database::Load(string fileName)
{
	ifstream input(fileName);
	if (input.is_open())
	{
		while (!input.eof())
		{
			int type;
			input >> type;
			Animal* animal = Create(static_cast<Animal::eType>(type));
			animal->Read(input);

			if (input.eof()) break;

			animals.push_back(animal);
		}
	}
}

void Database::Save(string fileName)
{
	ofstream output(fileName);
	if (output.is_open())
	{
		for (auto animal : animals)
		{
			output << static_cast<int>(animal->GetType()) << endl;
			animal->Write(output);
		}
	}
}
