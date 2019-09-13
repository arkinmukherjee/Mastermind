//this file contains the function imlementations that are declared in code.h

#include "code.h"
#include <vector>

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
	for (int i = 0; i < codeLength; i++) {
		secretCode[i] = rand() % maxValue;
	}
}

const int code::checkCorrect(const code& c1) {
	const vector<int> secretCode2 = c1.getCode();
	int counterCorrect = 0;

	if (checkSize(secretCode2)) {
		for (int i = 0; i < secretCode2.size(); i++){
			if (secretCode[i] == secretCode2[i]) {
				counterCorrect++;
			}
		}
	}
	return counterCorrect;
}

const int code::checkIncorrect(const code& c1) {
	const vector<int> secretCode2 = c1.getCode();

	if (!checkSize(secretCode2.size())) {
		return -1;
	}

	int counterIncorrect = 0;
	vector<bool> incorrectFlags;
	incorrectFlags.resize(secretCode.size(), false);

	for (int i = 0; i < secretCode2.size(); i++) {
		for (int j = 0; j < secretCode2.size(); i++) {
			if (secretCode[i] == secretCode2[j] && !incorrectFlags[i]) {
				counterIncorrect++;
				incorrectFlags[i] = true;
				break;
			}
		}
	}

	return counterIncorrect;
	
}

const bool code::checkSize(const vector<int>& guessSize) {
	if (guessSize.size() == secretCode.size()) {
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

const vector<int> code::getCode() {
	return secretCode;
}

	