#include "Character.h"
#include <iostream>

using namespace std;
namespace ajr
{
	void Character::Heal(int recover)
	{
		health += recover;
	}

	void Character::TakeDamage(int damage)
	{
		health -= damage;
	}

	void Character::BattleCry()
	{
		cout << "DEAD MEME!" << endl;
	}
}


