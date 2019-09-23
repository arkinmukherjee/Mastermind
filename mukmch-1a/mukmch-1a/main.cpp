// main.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/18/2019
// Project 1b
// Main file of Mastermind game

// Includes header files and libraries
#include <stdlib.h>
#include "mastermind.h"
#include <iostream>
#include <ctime>
#include <vector>

// Standard namespace
using namespace std;


// TODO: fix 4 errors in entire file
bool gameSetter()
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
		return false;
	}
}


void run()
// Hardcodes the guesses and calls all the necessary functions to run the game
{
	// Declare random secret code
	
	code Key(5, 10);
	cout << "Secret code: ";
	Key.printCode();

	// Declare random guesses for project1a
	vector<int> guess1 = {5, 0, 3, 2, 6};
	vector<int> guess2 = {2, 1, 2, 2, 2};
	vector<int> guess3 = {1, 3, 3, 4, 5};

	// Guess 1 output and check
	code Guess(guess1);
	cout << "\nGuess 1: ";
	Guess.printCode();

	cout << "Correct: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess) << endl;

	// Guess 2 output and check
	Guess.setGuess(guess2);
	cout << "\nGuess 2: ";
	Guess.printCode();

	cout << "Correct: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess) << endl;

	// Guess 3 output and check
	Guess.setGuess(guess3);
	cout << "\nGuess 3: ";
	Guess.printCode();

	cout << "Correct: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess) << endl;
} // end run


int main() 
// Main function that calls the run function and seeds the random function
{
	char playAgain= 'Y';
	
	while (playAgain == 'Y')
	{
		int n, m;
		bool setGame = gameSetter();

		if (setGame)
		{
			cout << "Enter the code length: ";
			cin >> n;
			cout << "Enter the range of digit: ";
			cin >> m;
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
	

	return 0;
}