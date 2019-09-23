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

void mastermind::playGame()
{
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
		cout << "You won in " << guessCount << " guesses!\n";
	}
	else
	{
		cout << "You ran out of guesses :(";
	}
}


code mastermind::humanGuess()
{
	code guess(codeLength, maxValue);
	string strGuess;

	cout << "Please enter a " << codeLength << "-digit number for your guess: ";
	cin >> strGuess;

	guess.setGuess(strGuess);

	return guess;
}

bool mastermind::isSolved(response& resp)
{
	if (codeLength = resp.getCorrect())
	{
		return true;
	}
}

response mastermind::getResponse(code& secret, code& guess)
{
	response resp;
	resp.setCorrect(1);
	resp.setIncorrect(5);
	return resp;
}

