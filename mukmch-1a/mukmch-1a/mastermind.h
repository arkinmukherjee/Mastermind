// mastermind.h
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

// Libraries
#include <vector>

// Standard namespace
using namespace std;

class mastermind 
{
	public:
		mastermind(int &n, int &m) { codeLength = n; maxValue = m; };
		mastermind() { codeLength = 5; maxValue = 10; };
		void playGame();
	private:
		int codeLength;
		int maxValue;

};