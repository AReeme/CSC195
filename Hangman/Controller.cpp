#include "Controller.h"
#include "View.h"
#include <iostream>

using namespace std;

Controller::Controller()
{
	game = new Game("Words.txt");
}

Controller::~Controller()
{
	delete game;
}

void Controller::Run()
{
    bool playAgain;
    bool hasWon = false;
    string replayResponse;
    do {
        hasWon = false;
        game->Start();
        while (game->GetNumIncorrectGuesses() < 5 && !hasWon)
        {
            Console::DisplayHangman(game->GetNumIncorrectGuesses());
            Console::DisplayWord(game->getWord(false));
            Console::DisplayCharacters(game->getGuesses());
            char guess;
            do
            {
                guess = Console::GetChar();
            } while (!isalpha(guess) || game->IsCharacterInGuess(guess));
            if (game->Guess(guess)) cout << "Guess is Correct\n";
            system("cls");
            hasWon = (game->getWord(false) == game->getWord(true));
        }
        string finishOutput = (hasWon) ? "You win!" : "You lose...";
        cout << finishOutput << endl;
        cout << "Do you want to play again? (Y/N)" << endl;
        cin >> replayResponse;
        playAgain = (replayResponse == "Y");
    } while (playAgain);
}
