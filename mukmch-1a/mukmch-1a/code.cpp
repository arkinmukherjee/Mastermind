//this file contains the function imlementations that are declared in code.h

#include "code.h"
#include <vector>
#include <iostream>
#include <ctime>

using namespace std;


// Initializes a code object
code::code(const int& n, const int& m) {
	codeLength = n;
	maxValue = m;
	secretCode.resize(n);
	initRandom();
}


// Generates random code based on inputs to object
void code::initRandom() {
	srand(time(NULL));
	for (int i = 0; i < codeLength; i++) {
		secretCode[i] = rand() % maxValue;
		cout << secretCode[i];
	}
}

const int code::checkCorrect(code &guess) { //TODO find out if const can be used
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

const int code::checkIncorrect(code &guess) { //TODO find out if const can be used
	const vector<int> guessCode = guess.getCode();

	if (!checkSize(guessCode.size())) {
		return -1;
	}

	int counterIncorrect = 0;
	vector<bool> incorrectFlags;
	incorrectFlags.resize(secretCode.size(), false);

	for (int i = 0; i < guessCode.size(); i++) {
		for (int j = 0; j < guessCode.size(); i++) {
			if (secretCode[i] == guessCode[j] && !incorrectFlags[i]) {
				counterIncorrect++;
				incorrectFlags[i] = true;
				break;
			}
		}
	}

	return counterIncorrect;
	
}

const bool code::checkSize(const int &guessSize) {
	if (guessSize == secretCode.size()) {
		return true;
	}
	else {
		return false;
	}
}

const bool code::checkRange(const int &val1) {
	if (val1 < maxValue){
		return true;
	}
	else{
		return false;
	}
}

const vector<int> code::getCode() const {
	return secretCode;
}

