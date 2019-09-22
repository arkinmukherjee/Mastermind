// mastermind.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

// Libraries
#include "code.h"
#include <vector>

// Standard namespace
using namespace std;

class mastermind 
{
	public:
		mastermind(int& n, int& m) { codeLength = n; maxValue = m; };
		mastermind() { codeLength = 5; maxValue = 10; };
		code humanGuess();
		void playGame();
		bool isSolved();
	private:
		int codeLength;
		int maxValue;
		int guessCount = 0;

};