#pragma once
#include <iostream>

using namespace std;

namespace ajr
{
	class Character
	{
	public:
		Character()
		{
			cout << "Default CTOR" << endl;
		}

		Character(string name, int health)
		{
			cout << "ctor" << endl;
			this->name = name;
			this->health = health;
		}

		void Heal(int recover);
		void TakeDamage(int damage);
		virtual void BattleCry();
		

		string GetName()
		{
			return name;
		}

		int GetHealth()
		{
			return health;
		}

	private:
		string name;
		int health = 0;

	}
	;
}
