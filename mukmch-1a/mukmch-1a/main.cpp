// main.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/18/2019
// main file of Mastermind game

//includes header files and libraries
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>
#include <vector>

//standard namespace
using namespace std;

void run()
// hardcodes the guesses and calls all the necessary functions to run the game 
{
	vector<int> secret1 = {3, 2, 3, 3, 3};
	//code Key(5, 10);
	code Key(secret1);
	vector<int> guess1 = {1, 3, 3, 4, 5};
	code Guess(guess1);
	cout << "\nCorrect: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess);
} // end run


int main() 
// main function that calls the run function and seeds the random function
{
	//srand(time(NULL));
	run();
	return 0;
}