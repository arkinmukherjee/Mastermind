// mastermind.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

// Libraries and header files
#include "mastermind.h"

#include <vector>
#include <iostream>
#include <ctime>
#include <string>

// Standard namespace
using namespace std;

// TODO: 23 errors total in this file
void mastermind::playGame()
{
	// TODO: fix 17 errors from build here
	
	code Key(codeLength, maxValue);
	cout << "Secret code: ";
	Key.printCode();
	
	while ((guessCount <= 10) && (!isSolved(localResponse)))
	{
		code guess(codeLength, maxValue);
		guess = humanGuess();
		guessCount++;
	}

	if (isSolved(localResponse))
	{
		cout << "You won in " << guessCount << " guesses!";
	}
	else
	{
		cout << "You ran out of guesses :(";
	}
	
}


code mastermind::humanGuess()
{
	// TODO: fix 2 build errors
	code guess(codeLength, maxValue);
	string strGuess;

	cout << "Please enter a " << codeLength << "-digit number for your guess: ";
	cin >> strGuess;

	guess.setGuess(strGuess);

	return guess;
}

// TODO: fix 4 errors generated here

bool mastermind::isSolved(response& resp)
{
	if (codeLength = resp.getCorrect())
	{
		return true;
	}
}

response mastermind::getResponse(code& secret, code& guess)
{
	response resp(secret, guess);
	return resp;
}