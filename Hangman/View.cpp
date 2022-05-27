#include "View.h"
#include <iostream>

using namespace std;

namespace Console
{
	void DisplayWord(const string& str)
	{
		cout << str << endl;
	}
	void DisplayCharacters(const vector<char>& characters)
	{
		cout << "Guesses: ";
		for (auto c : characters)
		{
			cout << (char)toupper(c) << " ";
		}
		cout << endl;
	}

	void DisplayLines(const char* lines[], int num)
	{
		for (int i = 0; i < num; i++)
		{
			cout << lines[i] << endl;
		}
	}

	void DisplayHangman(int stage)
	{
		switch (stage)
		{
			case 0:
			{
				const char* lines[] =
				{
					"------",
					" |    |",
					"      |",
					"      |",
					"      |",
					"      |",
					"-------"
				};
				DisplayLines(lines, 7);
			}
				break;
			case 1:
			{
				const char* lines[] =
				{
					"------",
					" |    |",
					" O    |",
					"      |",
					"      |",
					"      |",
					"-------"
				};
				DisplayLines(lines, 7);
			}
				break;
			case 2:
			{
				const char* lines[] =
				{
					"------",
					" |    |",
					" O    |",
					" |    |",
					"      |",
					"      |",
					"-------"
				};
				DisplayLines(lines, 7);
			}
				break;
			case 3:
			{
				const char* lines[] =
				{
					"------",
					" |    |",
					" O    |",
					"-|    |",
					"      |",
					"      |",
					"-------"
				};
				DisplayLines(lines, 7);
			}
				break;
			case 4:
			{
				const char* lines[] =
				{
					"------",
					" |    |",
					" O    |",
					"-|-   |",
					"      |",
					"      |",
					"-------"
				};
				DisplayLines(lines, 7);
			}
				break;
			case 5:
			{
				const char* lines[] =
				{
					"------",
					" |    |",
					" O    |",
					"-|-   |",
					" ^    |",
					"      |",
					"-------"
				};
				DisplayLines(lines, 7);
			}
				break;
			
		}
	}
	char GetChar()
	{
		cout << "Enter Guess: ";
		char guess;
		cin >> guess;

		return guess;
	}
}


