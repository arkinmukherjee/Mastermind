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
	// Declare random secret code
	code Key(5, 10);

	// Declare random guesses for project1a
	vector<int> guess1 = {5, 0, 3, 2, 6};
	vector<int> guess2 = {2, 1, 2, 2, 2};
	vector<int> guess3 = {1, 3, 3, 4, 5};

	// Guess 1 output and check
	code Guess(guess1);
	cout << "Guess 1: ";
	Guess.printCode();

	cout << "Correct: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess) << endl;

	// Guess 2 output and check
	Guess.setGuess(guess2);
	cout << "Guess 2: ";
	Guess.printCode();

	cout << "Correct: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess) << endl;

	// Guess 3 output and check
	Guess.setGuess(guess3);
	cout << "Guess 3: ";
	Guess.printCode();

	cout << "Correct: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess) << endl;
} // end run


int main() 
// main function that calls the run function and seeds the random function
{
	srand(time(NULL));
	run();
	return 0;
}