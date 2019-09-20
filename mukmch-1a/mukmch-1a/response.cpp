// response.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

#include "response.h"
#include <stdlib.h>

using namespace std;

bool operator == (response& lhresponse, response& rhresponse)
{
	if (lhresponse.getCorrect() == rhresponse.getCorrect() && lhresponse.getIncorrect() == rhresponse.getIncorrect()) 
	{
		return true;
	}
}

ostream& operator << (ostream& ostr, response& responseObj)
{

}