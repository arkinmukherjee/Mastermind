// code.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/18/2019
// Header file for the declaration of the code class

//libraries
#include <vector>

//standard namespace
using namespace std;

//declares the code class
class code {

//public member prototype functions
public:
	// constructors
	code(const int& n, const int &m);
	code(vector<int> guess);

	// Functions to compare codes
	const int checkCorrect(const code &guess);
	const int checkIncorrect(const code &guess);

	// Functions for accessing private members
	// inline code to return the secretCode
	const vector<int> getCode() const { return secretCode; };

	void printCode();
	
	// Functions for setting private members
	void setGuess(vector<int> guess);

//private member prototype functions and variables
private:
	void initRandom();

	// Functions to check for errors
	const bool checkSize(const int& guessSize);
	const bool checkRange(const int& val1);

	// private variables that maintain important states for code class
	vector<int> secretCode;
	int codeLength;
	int maxValue;
}; // end code class