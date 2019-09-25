// response.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

#ifndef RESPONSE_H
#define RESPONSE_H

#include <iostream>

using namespace std;

class response
// Establishes class for storing response values from guess codes
{
	public:
		response();
		void setCorrect(int correct) { numCorrect = correct; };
		void setIncorrect(int incorrect) { numIncorrect = incorrect; };
		int getCorrect() { return numCorrect; };
		int getIncorrect() { return numIncorrect; };
		friend bool operator==(const response& lhresponse, const response& rhresponse);
		friend ostream& operator<<(ostream& ostr, const response& responseObj);

	private:
		int numCorrect;
		int numIncorrect;

};

#endif
