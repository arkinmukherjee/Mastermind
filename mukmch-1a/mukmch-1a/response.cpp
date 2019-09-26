// response.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/26/2019
// Project 1b

// Header files
#include "response.h"

using namespace std;

response::response()
// Constructor that sets default values for correct and incorrect
{
	numCorrect = 0;
	numIncorrect = 0;
}


bool operator==(const response& lhresponse, const response& rhresponse)
// Inputs: left hand response obj and right hand response object of ==
// Output: boolean value that's true when the correct and incorrect values match
// Overloaded == operator that allows for quick comparisons between response 
// objects
{
	if (lhresponse.numCorrect == rhresponse.numCorrect && 
		lhresponse.numIncorrect == rhresponse.numIncorrect) 
	{
		return true;
	}
}


ostream& operator<<(ostream& ostr, const response& responseObj)
// Inputs: ostream object and response object to output values for
// Output: ostream object with concatenated string displaying response message
// Overloaded << operator that outputs the number of correct values and 
// incorrect values from response
{
	ostr << "Correct: " << responseObj.numCorrect << "\nIncorrect: " << 
		responseObj.numIncorrect;
	return ostr;
}