#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game 
{
public:
	Game(string fileName);
	void Start();
	bool Guess(char guess);
	bool IsCharacterInGuess(char c);
	string getWord(bool show);
	const vector<char>& getGuesses() { return guesses; }

	int GetNumIncorrectGuesses() 
	{
		return incorrectGuesses;
	}

private:
	string word;
	vector<string> words;
	vector<char> guesses;
	int incorrectGuesses = 0;
};