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

bool gameSetter()
//asks the user if they would like to set up the game
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


int main() 
// Main function that calls the run function and seeds the random function
{
	char playAgain= 'Y';
	
	//while loop for the play again functionality
	while (playAgain == 'Y')
	{
		int n, m;
		bool setGame = gameSetter();

		//Initializes and starts the game
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

	cout << "\nThanks for playing!\n";
	
	return 0;
}