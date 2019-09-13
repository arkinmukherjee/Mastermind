// File to load Mastermind game
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>

using namespace std;

void run(){
	code Key(5, 10);
	int guess1[5] = { 7,0,3,2,6 };
	code Guess(guess1);
	cout << "\n" << Key.checkCorrect(Guess);
}

int main() {
	//srand(time(NULL));

	run();

	//int i = Coder.checkCorrect(Guesser);
	cout << "\n\nIt built";

	return 0;
}