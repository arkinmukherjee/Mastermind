// File to load Mastermind game
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

void run(){
	code Key(5, 10);
	vector<int> guess1 = { 1,7,0,9,4 };
	int length = sizeof(guess1) / sizeof(guess1[0]);
	code Guess(guess1);
	cout << "\n" << Key.checkIncorrect(Guess);
}

int main() {
	//srand(time(NULL));

	run();

	//int i = Coder.checkCorrect(Guesser);
	cout << "\n\nIt built";

	return 0;
}