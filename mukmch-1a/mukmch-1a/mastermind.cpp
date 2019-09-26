// mastermind.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/26/2019
// Project 1b

// Header file
#include "mastermind.h"

// Standard namespace
using namespace std;

void mastermind::playGame()
// Initializes game loop and asks user for guesses as inputs. Also, maintains 
// and checks game logic.
{
	code Key(codeLength, maxValue);
	cout << "Secret code: ";
	Key.printCode();
	
	// Loop through the game until either the user runs out of guesses or the code is solved
	while ((guessCount < 10) && (!isSolved(localResponse)))
	{
		code guess(codeLength, maxValue);
		guess = humanGuess();
		localResponse = getResponse(Key, guess);
		cout << localResponse;
		guessCount++;
	}

	if (isSolved(localResponse))
	{
		if (guessCount == 1) 
		{
			cout << "You won in " << guessCount << " guess!\n";
		}
		else
		{
			cout << "You won in " << guessCount << " guesses!\n";
		}
	}
	else
	{
		cout << "You ran out of guesses :(\n";
	}
}


code mastermind::humanGuess()
// Reads guesses as strings from user and stores those as code objects
{
	code guess(codeLength, maxValue);
	string strGuess;

	cout << "Please enter a " << codeLength << "-digit number for your guess: ";
	cin >> strGuess;

	// Converts string to integer values and stores it in guess object
	guess.setGuess(strGuess);

	return guess;
}


bool mastermind::isSolved(response& resp)
// Inputs: response object to be checked if the code is solved
// Output: boolean value representing if the game is solved
// Read a response and check if the # correct matches the length of the secret code,
// if so, the code is solved
{
	if (codeLength == resp.getCorrect())
	{
		return true;
	}
	else
	{
		return false;
	}
}


response mastermind::getResponse(code& secret, code& guess)
// Inputs: secret code object and guess code object
// Output: response object with correct and incorrect values
// Reads secret code and guess code, then evaluates guess code values against secret
{
	response resp;
	resp.setCorrect(secret.checkCorrect(guess));
	resp.setIncorrect(secret.checkIncorrect(guess));
	return resp;
}

