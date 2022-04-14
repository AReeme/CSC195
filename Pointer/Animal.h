#pragma once

class Animal
{
public:
	Animal(int lifespan, float speed)
	{
		this->lifespan = lifespan;
		this->speed = speed;
	}

	void Sleep();
	void Speak();

	void Print();

private:
	int lifespan;
	float speed;
};
