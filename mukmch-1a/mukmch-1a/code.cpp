// This file contains the function imlementations that are declared in code.h

//includes header files and libraries
#include "code.h"
#include <vector>
#include <iostream>

//standard namespace
using namespace std;

// Input: const integer by reference for code length, const integer by reference for range of digits
// Constructor that initializes a code object with a random code
code::code(const int& n, const int& m) {
	codeLength = n;
	maxValue = m;
	secretCode.resize(n);
	initRandom();
}

// Input: vector of integers for a guess
// Constructor that initializes the code object with a guess
code::code(vector<int> guess) {
	maxValue = 0; // Set default value
	setGuess(guess);
}
// Input: none
// Output: none
// Generates random code with the defined length and range for an already initialized code object
void code::initRandom() {
	for (int i = 0; i < codeLength; i++) {
		secretCode[i] = rand() % maxValue;
		cout << secretCode[i];
	}
	cout << endl;
}

// Input: const code object by reference
// Output: integer
// Checks the number of values in the guess match with the secret code and in the right place 
const int code::checkCorrect(const code &guess) {
	const vector<int> guessCode = guess.getCode();
	int counterCorrect = 0;

	if (checkSize(guessCode.size())) {
		for (int i = 0; i < guessCode.size(); i++){
			if (secretCode[i] == guessCode[i]) {
				counterCorrect++;
			}
		}
	}
	return counterCorrect;
}
// Input: const code object by reference
// Output: integer
// Checks the number of values in the guess match with the secret code but are in the wrong place 
const int code::checkIncorrect(const code &guess) {
	const vector<int> guessCode = guess.getCode();

	if (!checkSize(guessCode.size())) {
		return -1;
	}

	int counterIncorrect = 0;
	vector<bool> incorrectFlags;
	vector<bool> guessDups;
	incorrectFlags.resize(secretCode.size(), false);
	guessDups.resize(secretCode.size(), false);

	for (int i = 0; i < guessCode.size(); i++) {
		for (int j = 0; j < guessCode.size(); j++) {
			if (secretCode[i] == guessCode[j] &&  i != j && !incorrectFlags[i] && !guessDups[j]) {
				counterIncorrect++;
				incorrectFlags[i] = true;
				guessDups[j] = true;
				break;
			}
			else if (secretCode[i] == guessCode[j] && i == j && !incorrectFlags[i] && !guessDups[j]) {
				incorrectFlags[i] = true;
				guessDups[j] = true;
				break;
			}
		}
	}

	return counterIncorrect;
	
}

// Input: const int by reference of the guess size
// Output: boolean 
// Checks if the length of the guess matches the length of the secret code
const bool code::checkSize(const int &guessSize) {
	if (guessSize == secretCode.size()) {
		return true;
	}
	else {
		return false;
	}
}

// Input: const int by reference of the guess size
// Output: boolean 
// Checks if the range of the guess matches the range of the secret code
const bool code::checkRange(const int &val1) {
	if (val1 < maxValue) {
		return true;
	}
	else {
		return false;
	}
}

// Input: vector
// Output: none 
// Sets the value of the guess in the code object
void code::setGuess(vector<int> guess) {
	cout << "Setting guess\n";
	codeLength = guess.size();
	secretCode.resize(codeLength);
	for (int i = 0; i < codeLength; i++) {
		secretCode[i] = guess[i];
		cout << secretCode[i];
	}
	cout << endl;
}