// response.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

#include "code.h"

class response
// Establishes class for storing response values from guess codes
{
	public:
		response(code &secret, code &guess);
		response();
		void setCorrect() { numCorrect = secret.checkCorrect(guess); };
		void setIncorrect() { numIncorrect = secret.checkIncorrect(guess); };
		int getCorrect() { return numIncorrect; };
		int getIncorrect() { return numCorrect; };

	private:
		int numCorrect;
		int numIncorrect;
		code secret;
		code guess;

};