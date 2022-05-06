#pragma once
#include "Character.h"

using namespace std;
namespace ajr
{
	class Player : public Character
	{
	public:
		Player()
		{
			cout << "Player Default CTOR" << endl;
		}

		Player(string name, int health, int lives, int score = 500) : Character(name, health)
		{
			cout << "Player CTOR" << endl;
			this->lives = lives;
			this->score = score;
		}

		void BattleCry() override;
		int GetLives() { return lives; }
		int SetLives() { this->lives = lives; }

		int GetScore() { return score; }
		int SetScore() { this->score = score; }
	private:
		int lives = 0;
		int score = 0;
	};
}


