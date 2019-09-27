// response.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/26/2019
// Project 1b

// Header guard
#ifndef RESPONSE_H
#define RESPONSE_H

// Library 
#include <iostream>

using namespace std;

class response
// Establishes class for storing response values from guess codes
{
	public:
		// Constructor
		response();

		// Functions for setting values
		void setCorrect(int correct) { numCorrect = correct; };
		void setIncorrect(int incorrect) { numIncorrect = incorrect; };
		
		// Functions for getting values from response object
		int getCorrect() { return numCorrect; };
		int getIncorrect() { return numIncorrect; };

		// Overloaded operators
		friend bool operator==(const response& lhresponse, 
			const response& rhresponse);
		friend ostream& operator<<(ostream& ostr, const response& responseObj);

	private:
		// Variables to hold responses from guess and secret code comparison
		int numCorrect;
		int numIncorrect;

}; // end response class

#endif
