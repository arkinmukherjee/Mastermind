// response.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

#include "response.h"
#include <stdlib.h>
#include <iostream>

using namespace std;


response::response(code& secret, code& guess)
{
	*this->secret = secret;
	*this->guess = guess;
	numCorrect = getCorrect();
	numIncorrect = getIncorrect();
}


response::response()
{

}


bool operator == (response& lhresponse, response& rhresponse)
// Inputs: left hand response obj and right hand response object of ==
// Output: boolean value that is true when the correct and 
{
	if (lhresponse.getCorrect() == rhresponse.getCorrect() && lhresponse.getIncorrect() == rhresponse.getIncorrect()) 
	{
		return true;
	}
}


ostream& operator << (ostream& ostr, response& responseObj)
{
	return ostr << "Correct: " << responseObj.getCorrect() << "Incorrect: " << responseObj.getIncorrect() << endl;
}