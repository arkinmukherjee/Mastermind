

// code.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/18/2019
// Project 1a
// Header file for the declaration of the code class

//#ifndef CODE_H
//#define CODE_H

// Libraries
#include <vector>
#include <string>

// Standard namespace
using namespace std;

// Declares the code class
class code 
{
	// Public member prototype functions
	public:
		// Constructors
		code(const int& n, const int &m);
		code(vector<int> guess);
		code();

		// Functions to compare codes
		const int checkCorrect(const code &guess);
		const int checkIncorrect(const code &guess);

		// Functions for accessing private members
		// Inline code to return the secretCode
		const vector<int> getCode() const { return secretCode; };
		void printCode();
	
		// Functions for setting private members
		void setGuess(vector<int> guess);
		void setGuess(string guess);

	// Private member prototype functions and variables
	private:
		void initRandom();

		// Functions to check for errors
		const bool checkSize(const int& guessSize);
		const bool checkRange(const int& val1);

		// Private variables that maintain important states for code class
		vector<int> secretCode;
		int codeLength;
		int maxValue;
}; // end code class

//#endif