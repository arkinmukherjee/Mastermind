// mastermind.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b


//#ifndef MASTERMIND_H
//#define MASTERMIND_H 

// Libraries
#include "code.h"
#include "response.h"
#include <vector>

// Standard namespace
using namespace std;

class mastermind 
{
	public:
		mastermind(int& n, int& m) { codeLength = n; maxValue = m; };
		mastermind() { codeLength = 5; maxValue = 10; };
		void playGame();
		code humanGuess();

		bool isSolved(response& resp);
		response getResponse(code& secret, code& guess);
	private:
		int codeLength;
		int maxValue;
		int guessCount = 0;
		response localResponse;

};

//#endif // !MASTERMIND_H