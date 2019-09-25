// response.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

#include "response.h"
#include <stdlib.h>

using namespace std;


response::response()
{
	numCorrect = 0;
	numIncorrect = 0;
}


bool operator==(const response& lhresponse, const response& rhresponse)
// Inputs: left hand response obj and right hand response object of ==
// Output: boolean value that is true when the correct and 
{
	if (lhresponse.numCorrect == rhresponse.numCorrect && lhresponse.numIncorrect == rhresponse.numIncorrect) 
	{
		return true;
	}
}


ostream& operator<<(ostream& ostr, const response& responseObj)
//
{
	ostr << "Correct: " << responseObj.numCorrect << "\nIncorrect: " << responseObj.numIncorrect << endl;
	return ostr;
}