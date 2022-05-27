#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

namespace Console 
{
	void DisplayWord(const string& str);
	void DisplayCharacters(const vector<char>& characters);
	void DisplayHangman(int stage);
	char GetChar();
}

