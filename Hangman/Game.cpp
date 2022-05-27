#include "Game.h"
#include <iostream>
#include <fstream>

using namespace std;

Game::Game(string fileName)
{
	ifstream input(fileName);
	if (input.is_open())
	{
		string str;
		while (getline(input, str))
		{
#ifdef _DEBUG
			cout << str << endl;
#endif
			words.push_back(str);
		}

		input.close();
	}
}

void Game::Start()
{
	incorrectGuesses = 0;
	guesses.clear();
	word = words[rand() % words.size()];

#ifdef _DEBUG
	cout << "Answer: " << word << endl;
#endif
}

bool Game::Guess(char guess)
{
	guesses.push_back(guess);

	//Compare Guess to Letters in the Word
	for (auto letter : word)
	{
		if (tolower(letter) == tolower(guess))
		{
			return true;
		}
	}

	incorrectGuesses++;
	return false;
}

bool Game::IsCharacterInGuess(char c)
{
	for (auto guess : guesses)
	{
		if (tolower(c) == tolower(guess)) return true;
	}

	return false;
}

string Game::getWord(bool show)
{
	if (show) return word;

	string result;
	for (auto letter : word)
	{
		if (!isalpha(letter))
		{
			result.push_back(letter);
		}
		else 
		{
		bool found = false;
		for (auto guess : guesses)
		{
			if (tolower(guess) == tolower(letter))
			{
				found = true;
				break;
			}
		}
		result.push_back(found ? letter : ' ');
		}
	}

	return result;
}
