// code.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/18/2019
// This file contains the function implementations that are declared in code.h

//includes header files and libraries
#include "code.h"
#include <vector>
#include <iostream>

//standard namespace
using namespace std;


code::code(const int& n, const int& m) 
// Input: const integer by reference for code length, const integer by reference
// for range of digits
// Constructor that initializes a code object with a random code
{
	codeLength = n;
	maxValue = m;
	secretCode.resize(n);
	initRandom();
}


code::code(vector<int> guess) 
// Input: vector of integers for a guess
// Constructor that initializes the code object with a guess
{
	maxValue = 0; // Set default value
	setGuess(guess);
}


void code::initRandom() 
// Input: none
// Output: none
// Generates random code with the defined length and range for an already 
// initialized code object
{
	cout << "Secret code: ";
	for (int i = 0; i < codeLength; i++) 
	{
		secretCode[i] = rand() % maxValue;
	}
	printCode();
} // end initRandom


const int code::checkCorrect(const code &guess) 
// Input: const code object by reference for guess to compare to
// Output: integer of # of correct values
// Checks the number of values in the guess match with the secret code and in 
// the right place 
{
	const vector<int> guessCode = guess.getCode();
	int counterCorrect = 0;

	if (checkSize(guessCode.size())) 
	{
		for (int i = 0; i < guessCode.size(); i++)
		{
			if (secretCode[i] == guessCode[i]) 
			{
				counterCorrect++;
			}
		}
	}
	return counterCorrect;
} // end checkCorrect

const int code::checkIncorrect(const code &guess) 
// Input: const code object by reference for guess to compare to
// Output: integer of # of incorrect values
// Checks the number of values in the guess match with the secret code but are 
// in the wrong place 
{
	const vector<int> guessCode = guess.getCode();

	if (!checkSize(guessCode.size())) 
	{
		return -1;
	}

	int counterIncorrect = 0;
	vector<bool> incorrectFlags;
	vector<bool> guessDups;
	incorrectFlags.resize(secretCode.size(), false);
	guessDups.resize(secretCode.size(), false);

	for (int i = 0; i < guessCode.size(); i++) 
	{
		// For loop that loops through secret code values, assumes guess code is
		// the same size as the secret code
		for (int j = 0; j < guessCode.size(); j++) 
		{
			// For loop that loops through guess code, compares all guess values
			// against selected secret code value
			if (secretCode[i] == guessCode[j] &&  i != j && !incorrectFlags[i] 
				&& !guessDups[j])
			{
				counterIncorrect++;
				incorrectFlags[i] = true;
				guessDups[j] = true;
				break;
			}
			else if (secretCode[i] == guessCode[j] && i == j && 
					 !incorrectFlags[i] && !guessDups[j]) 
			{
				incorrectFlags[i] = true;
				guessDups[j] = true;
				break;
			} // end if
		} // end for
	} // end for

	return counterIncorrect;
	
} // end checkIncorrect


const bool code::checkSize(const int &guessSize) 
// Input: const int by reference of the guess size
// Output: boolean 
// Checks if the length of the guess matches the length of the secret code
{
	if (guessSize == secretCode.size()) 
	{
		return true;
	}
	else 
	{
		return false;
	}
} // end checkSize


const bool code::checkRange(const int &val1) 
// Input: const int by reference of a value in the guess
// Output: boolean value representing if the guess is within the same range as 
// the code generated
// Checks if the range of the guess matches the range of the secret code
{
	if (val1 < maxValue) 
	{
		return true;
	}
	else 
	{
		return false;
	}
} // end checkRange


void code::setGuess(vector<int> guess) 
// Input: vector containing guess
// Output: none 
// Sets the value of the guess in the code object
{
	codeLength = guess.size();
	secretCode.resize(codeLength);

	for (int i = 0; i < codeLength; i++) 
	{
		secretCode[i] = guess[i];
	}

	cout << endl;
} // end setGuess

void code::printCode()
// Print code by looping through it
{

	for (int i = 0; i < codeLength; i++) 
	{
		cout << secretCode[i];
	}
	cout << endl;
} // end printCode