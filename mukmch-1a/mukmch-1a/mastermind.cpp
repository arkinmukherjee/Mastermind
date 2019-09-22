// mastermind.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

// Libraries and header files
#include "mastermind.h"
#include "code.h"
#include "response.h"
#include <vector>
#include <iostream>
#include <ctime>

// Standard namespace
using namespace std;


void mastermind::playGame()
{
	code Key(codeLength, maxValue);
	cout << "Secret code: ";
	Key.printCode();
	
	while ((guessCount <= 10) && (!isSolved()))
	{
		code guess(codeLength, maxValue);
		guess = humanGuess();
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
	response resp(secret, guess);
	return resp;
}