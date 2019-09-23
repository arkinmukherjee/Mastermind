// response.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

#ifndef RESPONSE_H
#define RESPONSE_H

class response
// Establishes class for storing response values from guess codes
{
	public:
		response();
		void setCorrect(int correct) { numCorrect = correct; };
		void setIncorrect(int incorrect) { numIncorrect = incorrect; };
		int getCorrect() { return numIncorrect; };
		int getIncorrect() { return numCorrect; };

	private:
		int numCorrect;
		int numIncorrect;

};

#endif
