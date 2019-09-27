// main.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/26/2019
// Project 1b
// Main file of Mastermind game

// Header files
#include "mastermind.h"

// Libraries
#include <ctime>

// Standard namespace
using namespace std;

bool gameSetter()
// Asks the user if they would like to set up the game
{
	char setGame;

	srand(time(NULL));
	cout << "Would you like to set up the game? (Y/N): ";
	cin >> setGame;
	setGame = toupper(setGame);

	if (setGame == 'Y') 
	{
		return true;
	}
	else
	{
		cout << "\nThe code length is 5 and the digit range is 0-9.\n";
		return false;
	}
} // end gameSetter


int main() 
// Main function that calls the run function and seeds the random function
{
	char playAgain= 'Y';
	
	// While loop for the play again functionality
	while (playAgain == 'Y')
	{
		int n, m;
		bool setGame = gameSetter();

		// Initializes and starts the game
		if (setGame)
		{	
			// Keep looping until valid code length
			while (true)
			{
				try
				{
					cout << "Enter the code length: ";
					cin.exceptions(istream::failbit);
					cin >> n;

					// Handle cin overflow error
					cin.clear();
					cin.ignore (numeric_limits<streamsize>::max(), '\n');

					if (n <= 0)
					{
						cout << "Invalid code length. Must be greater than 0."
							<< endl;
						continue;
					}
					break;
				}
				catch (const ios::failure&)
				{
					cout << "Invalid code length. \n";
					cin.clear();
					cin.ignore (numeric_limits<streamsize>::max(), '\n');
				}	
			} // end while

			// Keep looping until valid range
			while (true)
			{
				try
				{
					cout << "Enter the range of digits (1-10): ";
					cin >> m;
					cin.clear();
					cin.ignore (numeric_limits<streamsize>::max(), '\n');
					if (m > 10 || m <= 1)
					{
						cout << "Invalid range. Must be between 1-10. \n";
						continue;
					}
					break;
				}
				catch (const ios::failure&)
				{
					cout << "Invalid range. \n";
					cin.clear();
					cin.ignore (numeric_limits<streamsize>::max(), '\n');
				}	
			} // end while

			mastermind game(n, m);
			game.playGame();
		}
		else
		{
			mastermind game;
			game.playGame();
		}

		cout << "Would you like to play again? (Y/N): ";
		cin >> playAgain;
		playAgain = toupper(playAgain);
	}

	cout << "\nThanks for playing!\n";
	
	return 0;
} // end main