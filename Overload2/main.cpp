#include "Hero.h"
#include <iostream>
#include <vector>

using namespace std;
vector<Hero> heroes;

int main()
{
    Hero hero1("Jerry", 468.75);
    heroes.push_back(hero1);
    Hero hero2("Bowl Man", 243.89);
    heroes.push_back(hero2);
    Hero hero3;
    hero3 = hero2;
    /*heroes.push_back(hero3);*/

    if (hero1 == "Jerry") cout << "Found!" << endl;

    for (size_t i = 0; i < heroes.size(); i++)
    {
        cout << heroes[i].GetName() << endl;
        cout << heroes[i].GetPowerLevel() << endl;
    }

    for (size_t i = 0; i < heroes.size(); i++)
    {
        for (size_t j = 0; j < heroes.size(); j++)
        {
            if (i == j) continue;
            if (heroes[i] < heroes[j])
            {
                cout << heroes[i].GetName() << " is weaker than " << heroes[j].GetName() << endl;
            }
            if (heroes[i] > heroes[j])
            {
                cout << heroes[i].GetName() << " is stronger than " << heroes[j].GetName() << endl;
            }
            if (heroes[i] == heroes[j])
            {
                cout << heroes[i].GetName() << " is as strong as " << heroes[j].GetName() << endl;
            }
        }
    }
    heroes.clear();


    /*cout << hero3 << endl;

    cout << hero1.GetName();
    if (hero1 < hero2) cout << " is less than ";
    else if (hero1 > hero2) cout << " is greater than ";
    else if (hero1 == hero2) cout << " is equal to ";
    cout << hero2.GetName() << endl;*/
}

