// File to load Mastermind game
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

void run(){
	vector<int> secret1 = {3, 2, 3, 3, 3};
	//code Key(5, 10);
	code Key(secret1);
	vector<int> guess1 = {1, 3, 3, 4, 5};
	code Guess(guess1);
	cout << "\nCorrect: " << Key.checkCorrect(Guess);
	cout << "\nIncorrect: " << Key.checkIncorrect(Guess);
}

int main() {
	//srand(time(NULL));

	run();

	//int i = Coder.checkCorrect(Guesser);
	cout << "\n\nIt built";

	return 0;
}