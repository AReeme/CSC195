#include "Character.h"
#include "Player.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace ajr;

int Read(istream& input, ostream& output)
{
	output << "enter number: ";
	int i;
	input >> i;

	return i;
}

int main()
{
	Read(cin, cout);

	cout << "<-- character -->" << endl;
	Character character("AJ", 100);

	cout << character.GetName() << endl;
	character.BattleCry();

	character.TakeDamage(14);
	character.Heal(4);
	cout << character.GetHealth() << endl;

	cout << "<-- player -->" << endl;
	Player player("Austyn", 100, 3, 1000);
	cout << player.GetName() << endl;
	cout << player.GetScore() << endl;
	player.BattleCry();

	vector<Character*> characters; 
	characters.push_back(new Character("Jane", 100));
	characters.push_back(new Player("Tarzac", 100, 3, 0));

	for (int i = 0; i < characters.size(); i++)
	{
		cout << characters[i]->GetName() << endl;
		characters[i]->BattleCry();
	}
}