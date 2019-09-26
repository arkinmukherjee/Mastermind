// mastermind.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b


#ifndef MASTERMIND_H
#define MASTERMIND_H 

// Libraries
#include "code.h"
#include "response.h"
#include <vector>

// Standard namespace
using namespace std;

class mastermind 
{
	public:
		// Constructors
		mastermind(int& n, int& m) { codeLength = n; maxValue = m; };
		mastermind() { codeLength = 5; maxValue = 10; };
		
		// Functions to handle game loops and logic
		void playGame();
		code humanGuess();
		bool isSolved(response& resp);
		response getResponse(code& secret, code& guess);
	private:
		// Variables that designate code object structure
		int codeLength;
		int maxValue;

		// Variable to hold count of times game has been played
		int guessCount = 0;

		// Variable to store responses guesses
		response localResponse;
};

#endif // !MASTERMIND_H