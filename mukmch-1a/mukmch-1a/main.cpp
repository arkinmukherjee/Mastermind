// main file of Mastermind game

//includes header files and libraries
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>
#include <vector>

//standard namespace
using namespace std;

//hardcodes the guesses and calls all the necessary functions to run the game 
void run(){
	vector<int> secret1 = {3, 2, 3, 3, 3};
	//code Key(5, 10);
	code Key(secret1);
	vector<int> guess1 = {1, 3, 3, 4, 5};
	code Guess(guess1);
	cout << "\nCorrect: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess);
}


//main function that calls the run function
int main() {
	//srand(time(NULL));
	run();
	return 0;
}