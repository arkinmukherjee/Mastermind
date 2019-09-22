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

}

response mastermind::getResponse(code& secret, code& guess)
{

}