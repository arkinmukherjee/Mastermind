// File to load Mastermind game
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>

using namespace std;

void run(){
	code Key(5, 10);
	int guess1[5] = { 5,0,3,2,6 };
	int length = sizeof(guess1) / sizeof(guess1[0]);
	code Guess(guess1, length);
	cout << "\n" << Key.checkCorrect(Guess);
}

int main() {
	//srand(time(NULL));

	run();

	//int i = Coder.checkCorrect(Guesser);
	cout << "\n\nIt built";

	return 0;
}